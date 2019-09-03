#include <stdafx.h>
#include "FunctionLibrary.h"
#include <OsirisProxy.h>

namespace osidbg
{
	FunctionHandle StatusIteratorEventHandle;

	namespace func
	{
		void IterateCharacterStatuses(OsiArgumentDesc const & args)
		{
			auto character = FindCharacterByNameGuid(args.Get(0).String);
			if (character == nullptr) {
				return;
			}

			auto eventName = args.Get(1).String;
			auto statuses = character->StatusManager;
			if (statuses != nullptr) {
				auto index = 0;
				EsvStatus ** end = statuses->Statuses + statuses->StatusCount;
				for (auto status = statuses->Statuses; status != end; status++) {
					auto eventArgs = OsiArgumentDesc::Create(OsiArgumentValue{ ValueType::String, eventName });
					eventArgs->Add(OsiArgumentValue{ ValueType::GuidString, args.Get(0).String });
					eventArgs->Add(OsiArgumentValue{ (int64_t)index });

					auto osiris = gOsirisProxy->GetDynamicGlobals().OsirisObject;
					gOsirisProxy->GetWrappers().Event.CallOriginal(osiris, (uint32_t)StatusIteratorEventHandle, eventArgs);
					index++;

					delete eventArgs;
				}
			}
		}

		EsvStatus * GetStatusHelper(OsiArgumentDesc const & args)
		{
			auto character = FindCharacterByNameGuid(args.Get(0).String);
			if (character == nullptr || character->StatusManager == nullptr) {
				return nullptr;
			}

			auto handle = args.Get(1).Int64;
			auto statuses = character->StatusManager;
			if (handle < 0 || handle >= statuses->StatusCount) {
				Debug("GetStatusHelper(): Status handle out of bounds");
				return nullptr;
			}

			return statuses->Statuses[handle];
		}

		bool GetStatusAttributeString(OsiArgumentDesc & args)
		{
			auto status = GetStatusHelper(args);
			if (status == nullptr) {
				return false;
			}

			auto attributeName = args.Get(2).String;
			if (strcmp(attributeName, "StatsId") == 0) {
				args.Get(3).String = const_cast<char *>(status->StatusId.Str);
			}
			else {
				Debug("GetStatusAttributeString(): Unknown attribute");
				return false;
			}

			return true;
		}

		bool GetStatusAttributeGuidString(OsiArgumentDesc & args)
		{
			auto status = GetStatusHelper(args);
			if (status == nullptr) {
				return false;
			}

			auto attributeName = args.Get(2).String;
			ObjectHandle handle;
			if (strcmp(attributeName, "Obj1") == 0) {
				handle = status->ObjHandle1;
			}
			else if (strcmp(attributeName, "TargetCI") == 0) {
				handle = status->TargetCIHandle;
			}
			else if (strcmp(attributeName, "StatusSource") == 0) {
				handle = status->StatusSourceHandle;
			}
			else if (strcmp(attributeName, "Obj2") == 0) {
				handle = status->SomeHandle;
			}
			else {
				Debug("GetStatusAttributeGuidString(): Unknown attribute");
				return false;
			}

			auto character = FindCharacterByHandle(handle);
			if (character == nullptr) {
				return false;
			}

			args.Get(3).String = const_cast<char *>(character->MyGuid.Str);
			return true;
		}

		bool GetStatusAttributeFloat(OsiArgumentDesc & args)
		{
			auto status = GetStatusHelper(args);
			if (status == nullptr) {
				return false;
			}

			auto attributeName = args.Get(2).String;
			if (strcmp(attributeName, "StartTimer") == 0) {
				args.Get(3).Float = status->StartTimer;
			}
			else if (strcmp(attributeName, "LifeTime") == 0) {
				args.Get(3).Float = status->LifeTime;
			}
			else if (strcmp(attributeName, "CurrentLifeTime") == 0) {
				args.Get(3).Float = status->CurrentLifeTime;
			}
			else if (strcmp(attributeName, "TurnTimer") == 0) {
				args.Get(3).Float = status->TurnTimer;
			}
			else if (strcmp(attributeName, "Strength") == 0) {
				args.Get(3).Float = status->Strength;
			}
			else if (strcmp(attributeName, "StatsMultiplier") == 0) {
				args.Get(3).Float = status->StatsMultiplier;
			}
			else {
				Debug("GetStatusAttributeFloat(): Unknown attribute");
				return false;
			}

			return true;
		}

		bool GetStatusAttributeInt(OsiArgumentDesc & args)
		{
			auto status = GetStatusHelper(args);
			if (status == nullptr) {
				return false;
			}

			auto attributeName = args.Get(2).String;
			if (strcmp(attributeName, "CanEnterChance") == 0) {
				args.Get(3).Int32 = status->CanEnterChance;
			}
			else if (strcmp(attributeName, "DamageSourceType") == 0) {
				args.Get(3).Int32 = status->DamageSourceType;
			}
			else if (strcmp(attributeName, "KeepAlive") == 0) {
				args.Get(3).Int32 = (status->Flags0 & EsvStatus::SF0_KeepAlive) ? 1 : 0;
			}
			else if (strcmp(attributeName, "IsOnSourceSurface") == 0) {
				args.Get(3).Int32 = (status->Flags0 & EsvStatus::SF0_IsOnSourceSurface) ? 1 : 0;
			}
			else if (strcmp(attributeName, "IsFromItem") == 0) {
				args.Get(3).Int32 = (status->Flags0 & EsvStatus::SF0_IsFromItem) ? 1 : 0;
			}
			else if (strcmp(attributeName, "Channeled") == 0) {
				args.Get(3).Int32 = (status->Flags0 & EsvStatus::SF0_Channeled) ? 1 : 0;
			}
			else if (strcmp(attributeName, "IsLifeTimeSet") == 0) {
				args.Get(3).Int32 = (status->Flags0 & EsvStatus::SF0_IsLifeTimeSet) ? 1 : 0;
			}
			else if (strcmp(attributeName, "InitiateCombat") == 0) {
				args.Get(3).Int32 = (status->Flags0 & EsvStatus::SF0_InitiateCombat) ? 1 : 0;
			}
			else if (strcmp(attributeName, "Influence") == 0) {
				args.Get(3).Int32 = (status->Flags0 & EsvStatus::SF0_Influence) ? 1 : 0;
			}
			else if (strcmp(attributeName, "BringIntoCombat") == 0) {
				args.Get(3).Int32 = (status->Flags1 & EsvStatus::SF1_BringIntoCombat) ? 1 : 0;
			}
			else if (strcmp(attributeName, "IsHostileAct") == 0) {
				args.Get(3).Int32 = (status->Flags1 & EsvStatus::SF1_IsHostileAct) ? 1 : 0;
			}
			else if (strcmp(attributeName, "IsInvulnerable") == 0) {
				args.Get(3).Int32 = (status->Flags1 & EsvStatus::SF1_IsInvulnerable) ? 1 : 0;
			}
			else if (strcmp(attributeName, "IsResistingDeath") == 0) {
				args.Get(3).Int32 = (status->Flags1 & EsvStatus::SF1_IsResistingDeath) ? 1 : 0;
			}
			else if (strcmp(attributeName, "ForceStatus") == 0) {
				args.Get(3).Int32 = (status->Flags2 & EsvStatus::SF2_ForceStatus) ? 1 : 0;
			}
			else if (strcmp(attributeName, "ForceFailStatus") == 0) {
				args.Get(3).Int32 = (status->Flags2 & EsvStatus::SF2_ForceFailStatus) ? 1 : 0;
			}
			else if (strcmp(attributeName, "RequestDelete") == 0) {
				args.Get(3).Int32 = (status->Flags2 & EsvStatus::SF2_RequestDelete) ? 1 : 0;
			}
			else if (strcmp(attributeName, "RequestDeleteAtTurnEnd") == 0) {
				args.Get(3).Int32 = (status->Flags2 & EsvStatus::SF2_RequestDeleteAtTurnEnd) ? 1 : 0;
			}
			else if (strcmp(attributeName, "Started") == 0) {
				args.Get(3).Int32 = (status->Flags2 & EsvStatus::SF2_Started) ? 1 : 0;
			}
			else {
				Debug("GetStatusAttributeInt(): Unknown attribute");
				return false;
			}

			return true;
		}
	}

	void CustomFunctionLibrary::RegisterStatusFunctions()
	{
		auto & functionMgr = osiris_.GetCustomFunctionManager();

		auto iterateCharacterStatuses = std::make_unique<CustomCall>(
			"NRD_IterateCharacterStatuses",
			std::vector<CustomFunctionParam>{
				{ "CharacterGuid", ValueType::GuidString, FunctionArgumentDirection::In },
				{ "Event", ValueType::String, FunctionArgumentDirection::In }
			},
			&func::IterateCharacterStatuses
		);
		functionMgr.Register(std::move(iterateCharacterStatuses));

		auto getStatusAttributeInt = std::make_unique<CustomQuery>(
			"NRD_GetStatusAttributeInt",
			std::vector<CustomFunctionParam>{
				{ "Character", ValueType::GuidString, FunctionArgumentDirection::In },
				{ "StatusHandle", ValueType::Integer64, FunctionArgumentDirection::In },
				{ "Attribute", ValueType::String, FunctionArgumentDirection::In },
				{ "Value", ValueType::Integer, FunctionArgumentDirection::Out },
			},
			&func::GetStatusAttributeInt
		);
		functionMgr.Register(std::move(getStatusAttributeInt));

		auto getStatusAttributeFloat = std::make_unique<CustomQuery>(
			"NRD_GetStatusAttributeFloat",
			std::vector<CustomFunctionParam>{
				{ "Character", ValueType::GuidString, FunctionArgumentDirection::In },
				{ "StatusHandle", ValueType::Integer64, FunctionArgumentDirection::In },
				{ "Attribute", ValueType::String, FunctionArgumentDirection::In },
				{ "Value", ValueType::Real, FunctionArgumentDirection::Out },
			},
			&func::GetStatusAttributeFloat
		);
		functionMgr.Register(std::move(getStatusAttributeFloat));

		auto getStatusAttributeString = std::make_unique<CustomQuery>(
			"NRD_GetStatusAttributeString",
			std::vector<CustomFunctionParam>{
				{ "Character", ValueType::GuidString, FunctionArgumentDirection::In },
				{ "StatusHandle", ValueType::Integer64, FunctionArgumentDirection::In },
				{ "Attribute", ValueType::String, FunctionArgumentDirection::In },
				{ "Value", ValueType::String, FunctionArgumentDirection::Out },
			},
			&func::GetStatusAttributeString
		);
		functionMgr.Register(std::move(getStatusAttributeString));

		auto getStatusAttributeGuidString = std::make_unique<CustomQuery>(
			"NRD_GetStatusAttributeGuidString",
			std::vector<CustomFunctionParam>{
				{ "Character", ValueType::GuidString, FunctionArgumentDirection::In },
				{ "StatusHandle", ValueType::Integer64, FunctionArgumentDirection::In },
				{ "Attribute", ValueType::String, FunctionArgumentDirection::In },
				{ "Value", ValueType::GuidString, FunctionArgumentDirection::Out },
			},
			&func::GetStatusAttributeGuidString
		);
		functionMgr.Register(std::move(getStatusAttributeGuidString));

		auto statusIteratorEvent = std::make_unique<CustomEvent>(
			"NRD_StatusIteratorEvent",
			std::vector<CustomFunctionParam>{
				{ "Event", ValueType::String, FunctionArgumentDirection::In },
				{ "Character", ValueType::CharacterGuid, FunctionArgumentDirection::In },
				{ "StatusHandle", ValueType::Integer64, FunctionArgumentDirection::In },
			}
		);
		StatusIteratorEventHandle = functionMgr.Register(std::move(statusIteratorEvent));
	}

}