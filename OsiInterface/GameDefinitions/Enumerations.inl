BEGIN_ENUM(PathRootType, int)
	EV(Root, 0)
	EV(Data, 1)
	EV(Public, 2)
	EV(MyDocuments, 3)
	EV(GameStorage, 4)
END_ENUM()

BEGIN_ENUM(ObjectType, uint32_t)
	EV(Unknown, 0)
	EV(Light, 1)
	EV(Visual, 2)
	EV(UIObject, 3)
	EV(Decal, 4)
	EV(Dummy, 5)
	EV(Reference, 6)
	EV(Text3D, 7)
	EV(Effect, 8)
	EV(Trigger, 9)
	EV(TerrainObject, 10)
	EV(MeshProxy, 11)
	EV(SoundVolumeTrigger, 12)
	EV(Scene, 13)
	EV(GrannyFile, 14)
	EV(CustomStatsComponent, 15)
	EV(CombatComponent, 16)
	EV(ContainerComponent, 17)
	EV(ContainerElementComponent, 18)
	EV(GMJournalNode, 19)
	EV(ClientCustomStatDefinitionComponent, 20)
	EV(ClientEgg, 21)
	EV(ClientCharacter, 22)
	EV(ClientItem, 23)
	EV(ClientProjectile, 24)
	EV(ClientScenery, 25)
	EV(ClientWallConstruction, 26)
	EV(ClientWallBase, 27)
	EV(ClientWallIntersection, 28)
	EV(ClientInventory, 29)
	EV(ClientInventoryView, 30)
	EV(ClientAlignment, 31)
	EV(ClientAlignmentData, 32)
	EV(ClientGameAction, 33)
	EV(ClientSkill, 34)
	EV(ClientStatus, 35)
	EV(ClientParty, 36)
	EV(ClientOverviewMap, 37)
	EV(ClientVignette, 38)
	EV(ClientNote, 39)
	EV(ClientPointTrigger, 40)
	EV(ClientCullTrigger, 41)
	EV(ClientCameraLockTrigger, 42)
	EV(ClientRegionTrigger, 43)
	EV(ClientSecretRegionTrigger, 44)
	EV(ClientSoundVolumeTrigger, 45)
	EV(ClientPointSoundTrigger, 46)
	EV(ClientPointSoundTriggerDummy, 47)
	EV(ClientSpectatorTrigger, 48)
	EV(ClientAtmosphereTrigger, 49)
	EV(ClientAiSeederTrigger, 50)
	EV(ClientSurface, 51)
	EV(ClientDummyGameObject, 52)
	EV(ServerCustomStatDefinitionComponent, 53)
	EV(ServerEgg, 54)
	EV(ServerCharacter, 55)
	EV(ServerItem, 56)
	EV(ServerProjectile, 57)
	EV(ServerInventory, 58)
	EV(ServerInventoryView, 59)
	EV(ServerParty, 60)
	EV(ServerOverviewMap, 61)
	EV(ServerVignette, 62)
	EV(ServerNote, 63)
	EV(ServerSurfaceAction, 64)
	EV(ServerEocPointTrigger, 65)
	EV(ServerEocAreaTrigger, 66)
	EV(ServerStartTrigger, 67)
	EV(ServerTeleportTrigger, 68)
	EV(ServerEventTrigger, 69)
	EV(ServerCrimeAreaTrigger, 70)
	EV(ServerCrimeRegionTrigger, 71)
	EV(ServerAtmosphereTrigger, 72)
	EV(ServerAIHintAreaTrigger, 73)
	EV(ServerMusicVolumeTrigger, 74)
	EV(ServerSecretRegionTrigger, 75)
	EV(ServerStatsAreaTrigger, 76)
	EV(ServerSoundVolumeTrigger, 77)
	EV(ServerRegionTrigger, 78)
	EV(ServerExplorationTrigger, 79)
	EV(Texture, 80)
	EV(Shader, 81)
	EV(IndexBuffer, 82)
	EV(VertexBuffer, 83)
	EV(VertexFormat, 84)
	EV(SamplerState, 85)
	EV(BlendState, 86)
	EV(DepthState, 87)
	EV(RasterizerState, 88)
	EV(SRV, 89)
	EV(TextureRemoveData, 90)
	EV(StructuredBuffer, 91)
	EV(Constant, 92)
	EV(ConstantBuffer, 93)
	EV(CompiledShader, 94)
	EV(TexturedFont, 95)
END_ENUM()


BEGIN_ENUM_NS(ecl, GameState, uint32_t)
	EV(Unknown, 0)
	E(Init)
	E(InitMenu)
	E(InitNetwork)
	E(InitConnection)
	E(Idle)
	E(LoadMenu)
	E(Menu)
	E(Exit)
	E(SwapLevel)
	EV(LoadLevel, 10)
	E(LoadModule)
	E(LoadSession)
	E(LoadGMCampaign)
	E(UnloadLevel)
	E(UnloadModule)
	E(UnloadSession)
	E(Paused)
	E(PrepareRunning)
	E(Running)
	EV(Disconnect, 20)
	E(Join)
	E(Save)
	E(StartLoading)
	E(StopLoading)
	E(StartServer)
	E(Movie)
	E(Installation)
	E(GameMasterPause)
	E(ModReceiving)
	EV(Lobby, 30)
	E(BuildStory)
	E(LoadLoca)
END_ENUM_NS()


BEGIN_ENUM_NS(ecl, ComponentType, uint32_t)
	// Registered from App::InitGame
	EV(AnimationBlueprint, 0)
	E(Spline)
	E(Combat)
	E(CustomStats)
	E(GameMaster)
	E(GMJournalNode)
	E(Container)
	E(ContainerElement)

	// Registered from BaseApp::RegisterBaseComponentAndSystemTypes
	E(Visual)
	E(Light)
	E(LightProbe)
	E(Decal)
	E(Sound)
	E(PublishingRequest)
	E(Effect)
	E(ParentEntity)

	// Registered from ecl::EoCClient::ConfigureECS
	E(Net)
	E(OverviewMap)
	E(Vignette)
	E(Note)
	E(CustomStatDefinition)
	E(Scenery)
	E(Item)
	E(Character)
	E(Egg)
	E(Projectile)
	// ...
END_ENUM_NS()


BEGIN_ENUM_NS(esv, GameState, uint32_t)
	EV(Unknown, 0)
	E(Uninitialized)
	E(Init)
	E(Idle)
	E(Exit)
	E(LoadLevel)
	E(LoadModule)
	E(LoadGMCampaign)
	E(LoadSession)
	E(UnloadLevel)
	EV(UnloadModule, 10)
	E(UnloadSession)
	E(Sync)
	E(Paused)
	E(Running)
	E(Save)
	E(Disconnect)
	E(GameMasterPause)
	E(BuildStory)
	E(ReloadStory)
	EV(Installation, 20)
END_ENUM_NS()


BEGIN_ENUM_NS(esv, ComponentType, uint32_t)
	// Registered from App::InitGame
	EV(AnimationBlueprint, 0)
	E(Spline)
	E(Combat)
	E(CustomStats)
	E(GameMaster)
	E(GMJournalNode)
	E(Container)
	E(ContainerElement)

	// Registered from esv::EocServer::ConfigureECS
	E(Net)
	E(OverviewMap)
	E(Note)
	E(Vignette)
	E(CustomStatDefinition)
	E(Item)
	E(Character)
	E(Egg)
	E(Projectile)
	// ...
END_ENUM_NS()

BEGIN_ENUM_NS(esv, SystemType, uint32_t)
	EV(AnimationBlueprint, 0)
	E(Container)
	E(ContainerElement)
	E(TurnManager)
	E(SightManager)
	E(GameAction)
	E(Surface)
	E(Character)
	E(Projectile)
	E(Trigger)
	E(Item)
	E(Egg)
	E(Effect)
	E(Shroud)
	E(EnvironmentalStatus)
	E(NetEntity)
	E(CustomStat)
	E(Reward)
	E(CharacterSpline)
	E(CameraSpline)
	E(GM)
	E(GMCampaign)
	E(GMJournal)
END_ENUM_NS()


BEGIN_ENUM(NetMessage, uint32_t)
	EV(NETMSG_HOST_WELCOME, 1)
	EV(NETMSG_HOST_REFUSE, 2)
	EV(NETMSG_HOST_REFUSEPLAYER, 3)
	EV(NETMSG_HOST_LEFT, 4)
	EV(NETMSG_CLIENT_CONNECT, 5)
	EV(NETMSG_CLIENT_ACCEPT, 6)
	EV(NETMSG_CLIENT_JOINED, 7)
	EV(NETMSG_CLIENT_LEFT, 8)
	EV(NETMSG_PLAYER_CONNECT, 9)
	EV(NETMSG_PLAYER_DISCONNECT, 10)
	EV(NETMSG_PLAYER_ACCEPT, 11)
	EV(NETMSG_PLAYER_JOINED, 12)
	EV(NETMSG_PLAYER_LEFT, 13)
	EV(NETMSG_VOICEDATA, 14)
	EV(NETMSG_SKIPMOVIE_RESULT, 15)
	EV(NETMSG_SURFACE_CREATE, 17)
	EV(NETMSG_SURFACE_META, 18)
	EV(NETMSG_GAMEACTION, 19)
	EV(NETMSG_CHARACTER_CREATE, 20)
	EV(NETMSG_CHARACTER_DESTROY, 21)
	EV(NETMSG_CHARACTER_CONFIRMATION, 22)
	EV(NETMSG_CHARACTER_ACTIVATE, 23)
	EV(NETMSG_CHARACTER_DEACTIVATE, 24)
	EV(NETMSG_CHARACTER_ASSIGN, 25)
	EV(NETMSG_CHARACTER_POSITION, 26)
	EV(NETMSG_CHARACTER_POSITION_SYNC, 27)
	EV(NETMSG_CHARACTER_STEERING, 28)
	EV(NETMSG_CHARACTER_ACTION, 29)
	EV(NETMSG_CHARACTER_ACTION_DATA, 30)
	EV(NETMSG_CHARACTER_ACTION_REQUEST_RESULT, 31)
	EV(NETMSG_CHARACTER_STATUS, 32)
	EV(NETMSG_CHARACTER_STATUS_LIFETIME, 33)
	EV(NETMSG_CHARACTER_UPDATE, 34)
	EV(NETMSG_CHARACTER_CONTROL, 35)
	EV(NETMSG_CHARACTER_SET_STORY_NAME, 36)
	EV(NETMSG_CHARACTER_DIALOG, 37)
	EV(NETMSG_CHARACTER_SKILLBAR, 38)
	EV(NETMSG_CHARACTER_SELECTEDSKILLSET, 39)
	EV(NETMSG_CHARACTER_USE_AP, 40)
	EV(NETMSG_CHARACTER_UPGRADE, 41)
	EV(NETMSG_CHARACTER_STATS_UPDATE, 42)
	EV(NETMSG_CHARACTER_AOO, 43)
	EV(NETMSG_CHARACTER_BOOST, 44)
	EV(NETMSG_CHARACTER_CUSTOMIZATION, 45)
	EV(NETMSG_CHARACTER_TRANSFORM, 46)
	EV(NETMSG_CHARACTER_TELEPORT, 47)
	EV(NETMSG_CHARACTER_PICKPOCKET, 48)
	EV(NETMSG_CHARACTER_OFFSTAGE, 49)
	EV(NETMSG_CHARACTER_LOCK_ABILITY, 50)
	EV(NETMSG_CHARACTER_LOOT_CORPSE, 51)
	EV(NETMSG_CHARACTER_ITEM_USED, 52)
	EV(NETMSG_CHARACTER_CORPSE_LOOTABLE, 53)
	EV(NETMSG_CHARACTER_IN_DIALOG, 54)
	EV(NETMSG_COMBAT_TURN_TIMER, 55)
	EV(NETMSG_COMBAT_COMPONENT_SYNC, 56)
	EV(NETMSG_UPDATE_COMBAT_GROUP_INFO, 57)
	EV(NETMSG_PARTY_CREATE, 58)
	EV(NETMSG_PARTY_DESTROY, 59)
	EV(NETMSG_PARTYGROUP, 60)
	EV(NETMSG_PARTYORDER, 61)
	EV(NETMSG_PARTYUPDATE, 62)
	EV(NETMSG_PARTYUSER, 63)
	EV(NETMSG_SHROUD_UPDATE, 64)
	EV(NETMSG_SHROUD_FRUSTUM_UPDATE, 65)
	EV(NETMSG_SECRET_REGION_UNLOCK, 66)
	EV(NETMSG_ITEM_CREATE, 67)
	EV(NETMSG_ITEM_DESTROY, 68)
	EV(NETMSG_ITEM_ACTIVATE, 69)
	EV(NETMSG_ITEM_DEACTIVATE, 70)
	EV(NETMSG_ITEM_DESTINATION, 71)
	EV(NETMSG_ITEM_UPDATE, 72)
	EV(NETMSG_ITEM_USE_REMOTELY, 73)
	EV(NETMSG_ITEM_MOVE_TO_WORLD, 74)
	EV(NETMSG_ITEM_MOVE_TO_INVENTORY, 75)
	EV(NETMSG_ITEM_ACTION, 76)
	EV(NETMSG_ITEM_STATUS, 77)
	EV(NETMSG_ITEM_STATUS_LIFETIME, 78)
	EV(NETMSG_ITEM_TRANSFORM, 79)
	EV(NETMSG_ITEM_CONFIRMATION, 80)
	EV(NETMSG_ITEM_OFFSTAGE, 81)
	EV(NETMSG_ITEM_MOVED_INFORM, 82)
	EV(NETMSG_ITEM_MOVE_UUID, 83)
	EV(NETMSG_INVENTORY_CREATE, 84)
	EV(NETMSG_INVENTORY_CREATE_AND_OPEN, 85)
	EV(NETMSG_INVENTORY_DESTROY, 86)
	EV(NETMSG_INVENTORY_VIEW_CREATE, 87)
	EV(NETMSG_INVENTORY_VIEW_DESTROY, 88)
	EV(NETMSG_INVENTORY_VIEW_UPDATE_ITEMS, 89)
	EV(NETMSG_INVENTORY_VIEW_UPDATE_PARENTS, 90)
	EV(NETMSG_INVENTORY_VIEW_SORT, 91)
	EV(NETMSG_INVENTORY_ITEM_UPDATE, 92)
	EV(NETMSG_INVENTORY_LOCKSTATE_SYNC, 93)
	EV(NETMSG_PROJECTILE_CREATE, 94)
	EV(NETMSG_PROJECTILE_EXPLOSION, 95)
	EV(NETMSG_EGG_CREATE, 96)
	EV(NETMSG_EGG_DESTROY, 97)
	EV(NETMSG_TURNBASED_START, 98)
	EV(NETMSG_TURNBASED_STOP, 99)
	EV(NETMSG_TURNBASED_ROUND, 100)
	EV(NETMSG_TURNBASED_ORDER, 101)
	EV(NETMSG_TURNBASED_SUMMONS, 102)
	EV(NETMSG_TURNBASED_SETTEAM, 103)
	EV(NETMSG_TURNBASED_FLEECOMBATRESULT, 104)
	EV(NETMSG_NET_ENTITY_CREATE, 105)
	EV(NETMSG_NET_ENTITY_DESTROY, 106)
	EV(NETMSG_PEER_ACTIVATE, 107)
	EV(NETMSG_PEER_DEACTIVATE, 108)
	EV(NETMSG_SKILL_CREATE, 109)
	EV(NETMSG_SKILL_DESTROY, 110)
	EV(NETMSG_SKILL_UPDATE, 111)
	EV(NETMSG_SKILL_LEARN, 112)
	EV(NETMSG_SKILL_UNLEARN, 113)
	EV(NETMSG_SKILL_ACTIVATE, 114)
	EV(NETMSG_SKILL_REMOVED, 115)
	EV(NETMSG_EFFECT_CREATE, 116)
	EV(NETMSG_EFFECT_FORGET, 117)
	EV(NETMSG_EFFECT_DESTROY, 118)
	EV(NETMSG_GAMECONTROL_UPDATE_S2C, 119)
	EV(NETMSG_GAMECONTROL_UPDATE_C2S, 120)
	EV(NETMSG_GAMECONTROL_PRICETAG, 121)
	EV(NETMSG_FORCE_SHEATH, 122)
	EV(NETMSG_PLAYSOUND, 123)
	EV(NETMSG_PLAYMOVIE, 124)
	EV(NETMSG_PLAY_HUD_SOUND, 125)
	EV(NETMSG_CHARACTER_ERROR, 126)
	EV(NETMSG_ALIGNMENT_CREATE, 127)
	EV(NETMSG_ALIGNMENT_SET, 128)
	EV(NETMSG_ALIGNMENT_RELATION, 129)
	EV(NETMSG_ALIGNMENT_CLEAR, 130)
	EV(NETMSG_CACHETEMPLATE, 131)
	EV(NETMSG_OVERHEADTEXT, 132)
	EV(NETMSG_COMBATLOG, 133)
	EV(NETMSG_COMBATLOGITEMINTERACTION, 134)
	EV(NETMSG_SCREEN_FADE, 135)
	EV(NETMSG_SCREEN_FADE_DONE, 136)
	EV(NETMSG_OPEN_CUSTOM_BOOK_UI_MESSAGE, 137)
	EV(NETMSG_CLOSE_CUSTOM_BOOK_UI_MESSAGE, 138)
	EV(NETMSG_OPEN_KICKSTARTER_BOOK_UI_MESSAGE, 139)
	EV(NETMSG_OPEN_MESSAGE_BOX_MESSAGE, 140)
	EV(NETMSG_CLOSED_MESSAGE_BOX_MESSAGE, 141)
	EV(NETMSG_OPEN_WAYPOINT_UI_MESSAGE, 142)
	EV(NETMSG_CLOSE_UI_MESSAGE, 143)
	EV(NETMSG_SHOW_ENTER_REGION_UI_MESSAGE, 144)
	EV(NETMSG_JOURNAL_RESET, 145)
	EV(NETMSG_QUEST_UPDATE, 146)
	EV(NETMSG_QUEST_CATEGORY_UPDATE, 147)
	EV(NETMSG_QUEST_STATE, 148)
	EV(NETMSG_SECRET_UPDATE, 149)
	EV(NETMSG_TROPHY_UPDATE, 150)
	EV(NETMSG_JOURNALRECIPE_UPDATE, 151)
	EV(NETMSG_MARKER_UI_CREATE, 152)
	EV(NETMSG_MARKER_UI_UPDATE, 153)
	EV(NETMSG_QUEST_TRACK, 154)
	EV(NETMSG_QUEST_POSTPONE, 155)
	EV(NETMSG_UI_QUESTSELECTED, 156)
	EV(NETMSG_MYSTERY_STATE, 157)
	EV(NETMSG_MYSTERY_UPDATE, 158)
	EV(NETMSG_PARTYFORMATION, 159)
	EV(NETMSG_STOP_FOLLOW, 160)
	EV(NETMSG_NOTIFICATION, 161)
	EV(NETMSG_GAMEOVER, 162)
	EV(NETMSG_REGISTER_WAYPOINT, 163)
	EV(NETMSG_FLAG_UPDATE, 164)
	EV(NETMSG_PARTY_CONSUMED_ITEMS, 165)
	EV(NETMSG_PARTY_UNLOCKED_RECIPE, 166)
	EV(NETMSG_PARTY_SPLIT_NOTIFICATION, 167)
	EV(NETMSG_PARTY_MERGE_NOTIFICATION, 168)
	EV(NETMSG_DIALOG_STATE_MESSAGE, 169)
	EV(NETMSG_DIALOG_NODE_MESSAGE, 170)
	EV(NETMSG_DIALOG_ANSWER_MESSAGE, 171)
	EV(NETMSG_DIALOG_ANSWER_HIGHLIGHT_MESSAGE, 172)
	EV(NETMSG_DIALOG_HISTORY_MESSAGE, 173)
	EV(NETMSG_DIALOG_ACTORJOINS_MESSAGE, 174)
	EV(NETMSG_DIALOG_ACTORLEAVES_MESSAGE, 175)
	EV(NETMSG_GM_SPAWN, 176)
	EV(NETMSG_GM_DELETE, 177)
	EV(NETMSG_GM_ITEM_CHANGE, 178)
	EV(NETMSG_GM_DRAW_SURFACE, 179)
	EV(NETMSG_GM_TOGGLE_OVERVIEWMAP, 180)
	EV(NETMSG_GM_TOGGLE_VIGNETTE, 181)
	EV(NETMSG_GM_DAMAGE, 182)
	EV(NETMSG_GM_EXPORT, 183)
	EV(NETMSG_GM_REMOVE_EXPORTED, 184)
	EV(NETMSG_GM_HEAL, 185)
	EV(NETMSG_GM_ADD_EXPERIENCE, 186)
	EV(NETMSG_GM_TOGGLE_PAUSE, 187)
	EV(NETMSG_GM_REQUEST_ROLL, 188)
	EV(NETMSG_GM_ROLL, 189)
	EV(NETMSG_GM_PASS_ROLL, 190)
	EV(NETMSG_GM_REMOVE_ROLL, 191)
	EV(NETMSG_GM_TICK_ROLLS, 192)
	EV(NETMSG_GM_CHANGE_LEVEL, 193)
	EV(NETMSG_GM_VIGNETTE_ANSWER, 194)
	EV(NETMSG_GM_POSITION_SYNC, 195)
	EV(NETMSG_GM_TELEPORT, 196)
	EV(NETMSG_GM_TRAVEL_TO_DESTINATION, 197)
	EV(NETMSG_GM_STOP_TRAVELING, 198)
	EV(NETMSG_GM_CAMPAIGN_SAVE, 199)
	EV(NETMSG_GM_SYNC_SCENES, 200)
	EV(NETMSG_GM_SYNC_OVERVIEW_MAPS, 201)
	EV(NETMSG_GM_SYNC_VIGNETTES, 202)
	EV(NETMSG_GM_SYNC_ASSETS, 203)
	EV(NETMSG_GM_ASSETS_PENDING_SYNCS_INFO, 204)
	EV(NETMSG_GM_REORDER_ELEMENTS, 205)
	EV(NETMSG_GM_SET_START_POINT, 206)
	EV(NETMSG_GM_CONFIGURE_CAMPAIGN, 207)
	EV(NETMSG_GM_LOAD_CAMPAIGN, 208)
	EV(NETMSG_GM_REQUEST_CAMPAIGN_DATA, 209)
	EV(NETMSG_GM_POSSESS, 210)
	EV(NETMSG_GM_CHANGE_NAME, 211)
	EV(NETMSG_GM_DUPLICATE, 212)
	EV(NETMSG_GM_ITEM_USE, 213)
	EV(NETMSG_GM_HOST, 214)
	EV(NETMSG_GM_TOGGLE_PEACE, 215)
	EV(NETMSG_GM_MAKE_TRADER, 216)
	EV(NETMSG_GM_SET_INTERESTED_CHARACTER, 217)
	EV(NETMSG_GM_GIVE_REWARD, 218)
	EV(NETMSG_GM_SET_STATUS, 219)
	EV(NETMSG_GM_REMOVE_STATUS, 220)
	EV(NETMSG_GM_CLEAR_STATUSES, 221)
	EV(NETMSG_GM_CREATE_ITEM, 222)
	EV(NETMSG_GM_SET_ATMOSPHERE, 223)
	EV(NETMSG_GM_SOUND_PLAYBACK, 224)
	EV(NETMSG_GM_CHANGE_SCENE_NAME, 225)
	EV(NETMSG_GM_CHANGE_SCENE_PATH, 226)
	EV(NETMSG_GM_EDIT_ITEM, 227)
	EV(NETMSG_GM_EDIT_CHARACTER, 228)
	EV(NETMSG_GM_UI_OPEN_STICKY, 229)
	EV(NETMSG_GM_SYNC_NOTES, 230)
	EV(NETMSG_GM_MAKE_FOLLOWER, 231)
	EV(NETMSG_GM_DEACTIVATE, 232)
	EV(NETMSG_GM_INVENTORY_OPERATION, 233)
	EV(NETMSG_GM_SET_REPUTATION, 234)
	EV(NETMSG_GM_REQUEST_CHARACTERS_REROLL, 235)
	EV(NETMSG_TRADE_ACTION, 236)
	EV(NETMSG_CAMERA_ACTIVATE, 237)
	EV(NETMSG_CAMERA_ROTATE, 238)
	EV(NETMSG_CAMERA_TARGET, 239)
	EV(NETMSG_CAMERA_MODE, 240)
	EV(NETMSG_ATMOSPHERE_OVERRIDE, 241)
	EV(NETMSG_CHAT, 242)
	EV(NETMSG_GAMETIME_SYNC, 243)
	EV(NETMSG_PARTY_NPC_DATA, 244)
	EV(NETMSG_CHARACTER_ANIMATION_SET_UPDATE, 245)
	EV(NETMSG_REQUESTAUTOSAVE, 246)
	EV(NETMSG_SAVEGAME, 247)
	EV(NETMSG_SAVEGAMEHANDSHAKE, 248)
	EV(NETMSG_MODULE_LOAD, 249)
	EV(NETMSG_MODULE_LOADED, 250)
	EV(NETMSG_MODULES_DOWNLOAD, 251)
	EV(NETMSG_SESSION_LOAD, 252)
	EV(NETMSG_SESSION_LOADED, 253)
	EV(NETMSG_LEVEL_LOAD, 254)
	EV(NETMSG_LEVEL_LOADED, 255)
	EV(NETMSG_LOAD_START, 256)
	EV(NETMSG_LEVEL_INSTANTIATE_SWAP, 257)
	EV(NETMSG_LEVEL_SWAP_READY, 258)
	EV(NETMSG_LEVEL_SWAP_COMPLETE, 259)
	EV(NETMSG_LEVEL_START, 260)
	EV(NETMSG_CHARACTERCREATION_DONE, 261)
	EV(NETMSG_CHARACTERCREATION_READY, 262)
	EV(NETMSG_CHARACTERCREATION_NOT_READY, 263)
	EV(NETMSG_CHANGE_COMBAT_FORMATION, 264)
	EV(NETMSG_DIFFICULTY_CHANGED, 265)
	EV(NETMSG_CHARACTER_CHANGE_OWNERSHIP, 266)
	EV(NETMSG_RUNECRAFT, 267)
	EV(NETMSG_JOURNALDIALOGLOG_UPDATE, 268)
	EV(NETMSG_SHOW_TUTORIAL_MESSAGE, 269)
	EV(NETMSG_ACHIEVEMENT_UNLOCKED_MESSAGE, 270)
	EV(NETMSG_NOTIFY_COMBINE_FAILED_MESSAGE, 271)
	EV(NETMSG_SAVEGAME_LOAD_FAIL, 272)
	EV(NETMSG_SERVER_COMMAND, 273)
	EV(NETMSG_SERVER_NOTIFICATION, 274)
	EV(NETMSG_ITEM_ENGRAVE, 275)
	EV(NETMSG_STORY_ELEMENT_UI, 276)
	EV(NETMSG_OPEN_CRAFT_UI_MESSAGE, 277)
	EV(NETMSG_ACHIEVEMENT_PROGRESS_MESSAGE, 278)
	EV(NETMSG_UNLOCK_WAYPOINT, 279)
	EV(NETMSG_DISCOVERED_PORTALS, 280)
	EV(NETMSG_LOCK_WAYPOINT, 281)
	EV(NETMSG_CRAFT_RESULT, 282)
	EV(NETMSG_UNLOCK_ITEM, 283)
	EV(NETMSG_TELEPORT_PYRAMID, 284)
	EV(NETMSG_TELEPORT_WAYPOINT, 285)
	EV(NETMSG_REALTIME_MULTIPLAY, 286)
	EV(NETMSG_DIALOG_LISTEN, 287)
	EV(NETMSG_MUSIC_STATE, 288)
	EV(NETMSG_MUSIC_EVENT, 289)
	EV(NETMSG_LOBBY_DATAUPDATE, 290)
	EV(NETMSG_LOBBY_USERUPDATE, 291)
	EV(NETMSG_LOBBY_SPECTATORUPDATE, 292)
	EV(NETMSG_LOBBY_COMMAND, 293)
	EV(NETMSG_LOBBY_CHARACTER_SELECT, 294)
	EV(NETMSG_LOBBY_STARTGAME, 295)
	EV(NETMSG_LOBBY_SURRENDER, 296)
	EV(NETMSG_LOBBY_RETURN, 297)
	EV(NETMSG_UPDATE_CHARACTER_TAGS, 298)
	EV(NETMSG_UPDATE_ITEM_TAGS, 299)
	EV(NETMSG_AITEST_UPDATE, 300)
	EV(NETMSG_TELEPORT_ACK, 301)
	EV(NETMSG_PARTYCREATEGROUP, 302)
	EV(NETMSG_ARENA_RESULTS, 303)
	EV(NETMSG_CAMERA_SPLINE, 304)
	EV(NETMSG_CHARACTER_COMPANION_CUSTOMIZATION, 305)
	EV(NETMSG_READYCHECK, 306)
	EV(NETMSG_PAUSE, 307)
	EV(NETMSG_UNPAUSE, 308)
	EV(NETMSG_SET_CHARACTER_ARCHETYPE, 309)
	EV(NETMSG_DIPLOMACY, 310)
	EV(NETMSG_TRIGGER_CREATE, 311)
	EV(NETMSG_TRIGGER_DESTROY, 312)
	EV(NETMSG_TRIGGER_UPDATE, 313)
	EV(NETMSG_PING_BEACON, 314)
	EV(NETMSG_CUSTOM_STATS_DEFINITION_CREATE, 315)
	EV(NETMSG_CUSTOM_STATS_DEFINITION_REMOVE, 316)
	EV(NETMSG_CUSTOM_STATS_DEFINITION_UPDATE, 317)
	EV(NETMSG_CUSTOM_STATS_CREATE, 318)
	EV(NETMSG_CUSTOM_STATS_UPDATE, 319)
	EV(NETMSG_GIVE_REWARD, 320)
	EV(NETMSG_LOAD_GAME_WITH_ADDONS, 321)
	EV(NETMSG_LOAD_GAME_WITH_ADDONS_FAIL, 322)
	EV(NETMSG_SHOW_ERROR, 323)
	EV(NETMSG_CLIENT_GAME_SETTINGS, 324)
	EV(NETMSG_GM_JOURNAL_UPDATE, 325)
	EV(NETMSG_STORY_VERSION, 326)
	EV(NETMSG_MULTIPLE_TARGET_OPERATION, 327)
	EV(NETMSG_DLC_UPDATE, 329)
	EV(NETMSG_MUTATORS_ENABLED, 330)
	EV(NETMSG_HACK_TELL_BUILDNAME, 331)
	
	EV(NETMSG_SCRIPT_EXTENDER, 400)
END_ENUM()


BEGIN_ENUM(PlayerUpgradeAttribute, int)
	EV(Strength, 0)
	EV(Finesse, 1)
	EV(Intelligence, 2)
	EV(Constitution, 3)
	EV(Memory, 4)
	EV(Wits, 5)
END_ENUM()


BEGIN_ENUM(StatGetterType, int)
	EV(MaxMp, 0)
	EV(APStart, 1)
	EV(APRecovery, 2)
	EV(APMaximum, 3)

	EV(Strength, 4)
	EV(Finesse, 5)
	EV(Intelligence, 6)
	EV(Constitution, 7)
	EV(Memory, 8)
	EV(Wits, 9)

	EV(Accuracy, 10)
	EV(Dodge, 11)
	EV(CriticalChance, 12)

	EV(FireResistance, 13)
	EV(EarthResistance, 14)
	EV(WaterResistance, 15)
	EV(AirResistance, 16)
	EV(PoisonResistance, 17)
	EV(ShadowResistance, 18)
	EV(CustomResistance, 19)

	EV(LifeSteal, 20)
	EV(Sight, 21)
	EV(Hearing, 22)
	EV(Movement, 23)
	EV(Initiative, 24)
	EV(BlockChance, 25)
	EV(ChanceToHitBoost, 26)

	// Implemented using custom functions
	E(PhysicalResistance)
	E(PiercingResistance)
	E(CorrosiveResistance)
	E(MagicResistance)
	E(DamageBoost)
END_ENUM()


BEGIN_ENUM(CRPGStats_Object_Property_Type, uint32_t)
	EV(Custom, 0x0)
	EV(Status, 0x1)
	EV(SurfaceChange, 0x2)
	EV(GameAction, 0x3)
	EV(OsirisTask, 0x4)
	EV(Sabotage, 0x5)
	EV(Summon, 0x6)
	EV(Force, 0x7)
	EV(CustomDescription, 0x10)
END_ENUM()

BEGIN_BITMASK(CRPGStats_Object_PropertyContext, uint8_t)
	EV(Target, 0x01)
	EV(AoE, 0x02)
	EV(Self, 0x04)
	EV(SelfOnHit, 0x08)
	EV(SelfOnEquip, 0x10)
END_ENUM()

BEGIN_ENUM(RequirementType, uint32_t)
	EV(None, 0)
	EV(Level, 1)
	EV(Strength, 2)
	EV(Finesse, 3)
	EV(Intelligence, 4)
	EV(Constitution, 5)
	EV(Memory, 6)
	EV(Wits, 7)
	EV(WarriorLore, 8)
	EV(RangerLore, 9)
	EV(RogueLore, 10)
	EV(SingleHanded, 11)
	EV(TwoHanded, 12)
	EV(PainReflection, 13)
	EV(Ranged, 14)
	EV(Shield, 15)
	EV(Reflexes, 16)
	EV(PhysicalArmorMastery, 17)
	EV(MagicArmorMastery, 18)
	EV(Vitality, 19)
	EV(Sourcery, 20)
	EV(Telekinesis, 21)
	EV(FireSpecialist, 22)
	EV(WaterSpecialist, 23)
	EV(AirSpecialist, 24)
	EV(EarthSpecialist, 25)
	EV(Necromancy, 26)
	EV(Summoning, 27)
	EV(Polymorph, 28)
	EV(Repair, 30)
	EV(Sneaking, 31)
	EV(Pickpocket, 32)
	EV(Thievery, 33)
	EV(Loremaster, 34)
	EV(Crafting, 35)
	EV(Barter, 36)
	EV(Charm, 37)
	EV(Intimidate, 38)
	EV(Reason, 39)
	EV(Persuasion, 40)
	EV(Leadership, 41)
	EV(Luck, 42)
	EV(DualWielding, 43)
	EV(Wand, 44)
	EV(Perseverance, 45)
	EV(TALENT_ItemMovement, 46)
	EV(TALENT_ItemCreation, 47)
	EV(TALENT_Flanking, 48)
	EV(TALENT_AttackOfOpportunity, 49)
	EV(TALENT_Backstab, 50)
	EV(TALENT_Trade, 51)
	EV(TALENT_Lockpick, 52)
	EV(TALENT_ChanceToHitRanged, 53)
	EV(TALENT_ChanceToHitMelee, 54)
	EV(TALENT_Damage, 55)
	EV(TALENT_ActionPoints, 56)
	EV(TALENT_ActionPoints2, 57)
	EV(TALENT_Criticals, 58)
	EV(TALENT_IncreasedArmor, 59)
	EV(TALENT_Sight, 60)
	EV(TALENT_ResistFear, 61)
	EV(TALENT_ResistKnockdown, 62)
	EV(TALENT_ResistStun, 63)
	EV(TALENT_ResistPoison, 64)
	EV(TALENT_ResistSilence, 65)
	EV(TALENT_ResistDead, 66)
	EV(TALENT_Carry, 67)
	EV(TALENT_Kinetics, 68)
	EV(TALENT_Repair, 69)
	EV(TALENT_ExpGain, 70)
	EV(TALENT_ExtraStatPoints, 71)
	EV(TALENT_ExtraSkillPoints, 72)
	EV(TALENT_Durability, 73)
	EV(TALENT_Awareness, 74)
	EV(TALENT_Vitality, 75)
	EV(TALENT_FireSpells, 76)
	EV(TALENT_WaterSpells, 77)
	EV(TALENT_AirSpells, 78)
	EV(TALENT_EarthSpells, 79)
	EV(TALENT_Charm, 80)
	EV(TALENT_Intimidate, 81)
	EV(TALENT_Reason, 82)
	EV(TALENT_Luck, 83)
	EV(TALENT_Initiative, 84)
	EV(TALENT_InventoryAccess, 85)
	EV(TALENT_AvoidDetection, 86)
	EV(TALENT_AnimalEmpathy, 87)
	EV(TALENT_Escapist, 88)
	EV(TALENT_StandYourGround, 89)
	EV(TALENT_SurpriseAttack, 90)
	EV(TALENT_LightStep, 91)
	EV(TALENT_ResurrectToFullHealth, 92)
	EV(TALENT_Scientist, 93)
	EV(TALENT_Raistlin, 94)
	EV(TALENT_MrKnowItAll, 95)
	EV(TALENT_WhatARush, 96)
	EV(TALENT_FaroutDude, 97)
	EV(TALENT_Leech, 98)
	EV(TALENT_ElementalAffinity, 99)
	EV(TALENT_FiveStarRestaurant, 100)
	EV(TALENT_Bully, 101)
	EV(TALENT_ElementalRanger, 102)
	EV(TALENT_LightningRod, 103)
	EV(TALENT_Politician, 104)
	EV(TALENT_WeatherProof, 105)
	EV(TALENT_LoneWolf, 106)
	EV(TALENT_Zombie, 107)
	EV(TALENT_Demon, 108)
	EV(TALENT_IceKing, 109)
	EV(TALENT_Courageous, 110)
	EV(TALENT_GoldenMage, 111)
	EV(TALENT_WalkItOff, 112)
	EV(TALENT_FolkDancer, 113)
	EV(TALENT_SpillNoBlood, 114)
	EV(TALENT_Stench, 115)
	EV(TALENT_Kickstarter, 116)
	EV(TALENT_WarriorLoreNaturalArmor, 117)
	EV(TALENT_WarriorLoreNaturalHealth, 118)
	EV(TALENT_WarriorLoreNaturalResistance, 119)
	EV(TALENT_RangerLoreArrowRecover, 120)
	EV(TALENT_RangerLoreEvasionBonus, 121)
	EV(TALENT_RangerLoreRangedAPBonus, 122)
	EV(TALENT_RogueLoreDaggerAPBonus, 123)
	EV(TALENT_RogueLoreDaggerBackStab, 124)
	EV(TALENT_RogueLoreMovementBonus, 125)
	EV(TALENT_RogueLoreHoldResistance, 126)
	EV(TALENT_NoAttackOfOpportunity, 127)
	EV(TALENT_WarriorLoreGrenadeRange, 128)
	EV(TALENT_RogueLoreGrenadePrecision, 129)
	EV(TALENT_ExtraWandCharge, 130)
	EV(TALENT_DualWieldingDodging, 131)
	EV(TALENT_Human_Civil, 133)
	EV(TALENT_Human_Inventive, 132)
	EV(TALENT_Dwarf_Sneaking, 134)
	EV(TALENT_Dwarf_Sturdy, 135)
	EV(TALENT_Elf_CorpseEater, 136)
	EV(TALENT_Elf_Lore, 137)
	EV(TALENT_Lizard_Persuasion, 139)
	EV(TALENT_Lizard_Resistance, 138)
	EV(TALENT_Perfectionist, 140)
	EV(TALENT_Executioner, 141)
	EV(TALENT_QuickStep, 143)
	EV(TALENT_ViolentMagic, 142)
	EV(TALENT_Memory, 144)
	EV(TALENT_LivingArmor, 145)
	EV(TALENT_Torturer, 146)
	EV(TALENT_Ambidextrous, 147)
	EV(TALENT_Unstable, 148)
	EV(TALENT_Sourcerer, 149)
	EV(TRAIT_Forgiving, 150)
	EV(TRAIT_Vindictive, 151)
	EV(TRAIT_Bold, 152)
	EV(TRAIT_Timid, 153)
	EV(TRAIT_Altruistic, 154)
	EV(TRAIT_Egotistical, 155)
	EV(TRAIT_Independent, 156)
	EV(TRAIT_Obedient, 157)
	EV(TRAIT_Pragmatic, 158)
	EV(TRAIT_Romantic, 159)
	EV(TRAIT_Spiritual, 160)
	EV(TRAIT_Materialistic, 161)
	EV(TRAIT_Righteous, 162)
	EV(TRAIT_Renegade, 163)
	EV(TRAIT_Blunt, 164)
	EV(TRAIT_Considerate, 165)
	EV(TRAIT_Compassionate, 166)
	EV(TRAIT_Heartless, 167)
	EV(Combat, 168)
	EV(MinKarma, 169)
	EV(MaxKarma, 170)
	EV(Immobile, 171)
	EV(Tag, 172)
END_ENUM()


BEGIN_ENUM(WeaponType, uint32_t)
	EV(None, 0)
	EV(Sword, 1)
	EV(Club, 2)
	EV(Axe, 3)
	EV(Staff, 4)
	EV(Bow, 5)
	EV(Crossbow, 6)
	EV(Spear, 7)
	EV(Knife, 8)
	EV(Wand, 9)
	EV(Arrow, 10)
	EV(Rifle, 11)
	EV(Sentinel, 12)
END_ENUM()


BEGIN_ENUM(ArmorType, uint32_t)
	EV(None, 0)
	EV(Cloth, 1)
	EV(Leather, 2)
	EV(Mail, 3)
	EV(Plate, 4)
	EV(Robe, 5)
	EV(Sentinel, 6)
END_ENUM()


BEGIN_ENUM(HandednessType, uint32_t)
	EV(Any, 0)
	EV(One, 1)
	EV(Two, 2)
END_ENUM()


BEGIN_ENUM(AbilityType, int)
	EV(WarriorLore, 0)
	EV(RangerLore, 1)
	EV(RogueLore, 2)
	EV(SingleHanded, 3)
	EV(TwoHanded, 4)
	EV(PainReflection, 5)
	EV(Ranged, 6)
	EV(Shield, 7)
	EV(Reflexes, 8)
	EV(PhysicalArmorMastery, 9)
	EV(MagicArmorMastery, 10)
	EV(VitalityMastery, 11)
	EV(Sourcery, 12)
	EV(FireSpecialist, 13)
	EV(WaterSpecialist, 14)
	EV(AirSpecialist, 15)
	EV(EarthSpecialist, 16)
	EV(Necromancy, 17)
	EV(Summoning, 18)
	EV(Polymorph, 19)
	EV(Telekinesis, 20)
	EV(Repair, 21)
	EV(Sneaking, 22)
	EV(Pickpocket, 23)
	EV(Thievery, 24)
	EV(Loremaster, 25)
	EV(Crafting, 26)
	EV(Barter, 27)
	EV(Charm, 28)
	EV(Intimidate, 29)
	EV(Reason, 30)
	EV(Persuasion, 31)
	EV(Leadership, 32)
	EV(Luck, 33)
	EV(DualWielding, 34)
	EV(Wand, 35)
	EV(Perseverance, 36)
	EV(Runecrafting, 37)
	EV(Brewmaster, 38)
	EV(Sulfurology, 39)
	EV(Sentinel, 40)
END_ENUM()


BEGIN_ENUM(CriticalRoll, int)
	EV(Roll, 0)
	EV(Critical, 1)
	EV(NotCritical, 2)
END_ENUM()


BEGIN_ENUM(HighGroundBonus, int)
	EV(Unknown, 0)
	EV(HighGround, 1)
	EV(EvenGround, 2)
	EV(LowGround, 3)
END_ENUM()


BEGIN_ENUM(EquipmentStatsType, uint32_t)
	EV(Weapon, 0)
	EV(Armor, 1)
	EV(Shield, 2)
END_ENUM()


BEGIN_BITMASK_NS(ecl, StatusFlags, uint8_t)
	EV(RequestDelete, 0x01)
	EV(Started, 0x02)
	EV(KeepAlive, 0x08)
	EV(HasVisuals, 0x40)
END_ENUM_NS()


BEGIN_BITMASK_NS(esv, StatusFlags0, uint8_t)
	EV(KeepAlive, 1)
	EV(IsOnSourceSurface, 2)
	EV(IsFromItem, 4)
	EV(Channeled, 8)
	EV(IsLifeTimeSet, 0x10)
	EV(InitiateCombat, 0x20)
	EV(Influence, 0x80)
END_ENUM_NS()


BEGIN_BITMASK_NS(esv, StatusFlags1, uint8_t)
	EV(BringIntoCombat, 1)
	EV(IsHostileAct, 2)
	EV(IsInvulnerable, 8)
	EV(IsResistingDeath, 0x10)
END_ENUM_NS()


BEGIN_BITMASK_NS(esv, StatusFlags2, uint8_t)
	EV(ForceStatus, 1)
	EV(ForceFailStatus, 2)
	EV(RequestDelete, 0x20)
	EV(RequestDeleteAtTurnEnd, 0x40)
	EV(Started, 0x80)
END_ENUM_NS()


BEGIN_ENUM(StatusType, uint32_t)
	EV(HIT, 1)
	EV(DYING, 2)
	EV(HEAL, 3)
	EV(MUTED, 4)
	EV(CHARMED, 5)
	EV(KNOCKED_DOWN, 6)
	EV(SUMMONING, 7)
	EV(HEALING, 8)
	EV(THROWN, 9)
	EV(TELEPORT_FALLING, 0x0B)
	EV(CONSUME, 0x0C)
	EV(COMBAT, 0x0D)
	EV(AOO, 0x0E)
	EV(STORY_FROZEN, 0x0F)
	EV(SNEAKING, 0x10)
	EV(UNLOCK, 0x11)
	EV(FEAR, 0x12)
	EV(BOOST, 0x13)
	EV(UNSHEATHED, 0x14)
	EV(STANCE, 0x15)
	EV(SITTING, 0x16)
	EV(LYING, 0x17)
	EV(BLIND, 0x18)
	EV(SMELLY, 0x19)
	EV(CLEAN, 0x1A)
	EV(INFECTIOUS_DISEASED, 0x1B)
	EV(INVISIBLE, 0x1C)
	EV(ROTATE, 0x1D)
	EV(ENCUMBERED, 0x1E)
	EV(IDENTIFY, 0x1F)
	EV(REPAIR, 0x20)
	EV(MATERIAL, 0x21)
	EV(LEADERSHIP, 0x22)
	EV(EXPLODE, 0x23)
	EV(ADRENALINE, 0x24)
	EV(SHACKLES_OF_PAIN, 0x25)
	EV(SHACKLES_OF_PAIN_CASTER, 0x26)
	EV(WIND_WALKER, 0x27)
	EV(DARK_AVENGER, 0x28)
	EV(REMORSE, 0x29)
	EV(DECAYING_TOUCH, 0x2A)
	EV(UNHEALABLE, 0x2B)
	EV(FLANKED, 0x2C)
	EV(CHANNELING, 0x2D)
	EV(DRAIN, 0x2E)
	EV(LINGERING_WOUNDS, 0x2F)
	EV(INFUSED, 0x30)
	EV(SPIRIT_VISION, 0x31)
	EV(SPIRIT, 0x32)
	EV(DAMAGE, 0x33)
	EV(FORCE_MOVE, 0x34)
	EV(CLIMBING, 0x35)
	EV(INCAPACITATED, 0x36)
	EV(INSURFACE, 0x37)
	EV(SOURCE_MUTED, 0x38)
	EV(OVERPOWER, 0x39)
	EV(COMBUSTION, 0x3A)
	EV(POLYMORPHED, 0x3B)
	EV(DAMAGE_ON_MOVE, 0x3C)
	EV(DEMONIC_BARGAIN, 0x3D)
	EV(GUARDIAN_ANGEL, 0x3E)
	EV(FLOATING, 0x40)
	EV(CHALLENGE, 0x41)
	EV(DISARMED, 0x42)
	EV(HEAL_SHARING, 0x43)
	EV(HEAL_SHARING_CASTER, 0x44)
	EV(EXTRA_TURN, 0x45)
	EV(ACTIVE_DEFENSE, 0x46)
	EV(SPARK, 0x47)
	EV(PLAY_DEAD, 0x48)
	EV(CONSTRAINED, 0x49)
	EV(EFFECT, 0x4A)
	EV(DEACTIVATED, 0x4B)
	EV(TUTORIAL_BED, 0x4C)
END_ENUM()


BEGIN_ENUM(CauseType, uint8_t)
	EV(None, 0)
	EV(SurfaceMove, 1)
	EV(SurfaceCreate, 2)
	EV(SurfaceStatus, 3)
	EV(StatusEnter, 4)
	EV(StatusTick, 5)
	EV(Attack, 6)
	EV(Offhand, 7)
	EV(GM, 8)
END_ENUM()


BEGIN_ENUM(DeathType, uint8_t)
	EV(None, 0)
	EV(Physical, 1)
	EV(Piercing, 2)
	EV(Arrow, 3)
	EV(DoT, 4)
	EV(Incinerate, 5)
	EV(Acid, 6)
	EV(Electrocution, 7)
	EV(FrozenShatter, 8)
	EV(PetrifiedShatter, 9)
	EV(Explode, 10)
	EV(Surrender, 11)
	EV(Hang, 12)
	EV(KnockedDown, 13)
	EV(Lifetime, 14)
	EV(Sulfur, 15)
	EV(Sentinel, 16)
END_ENUM()


BEGIN_ENUM(DamageType, uint32_t)
	EV(None, 0)
	EV(Physical, 1)
	EV(Piercing, 2)
	EV(Corrosive, 3)
	EV(Magic, 4)
	EV(Chaos, 5)
	EV(Fire, 6)
	EV(Air, 7)
	EV(Water, 8)
	EV(Earth, 9)
	EV(Poison, 10)
	EV(Shadow, 11)
	EV(Sulfuric, 12)
	EV(Sentinel, 13)
END_ENUM()


BEGIN_ENUM(HitType, uint32_t)
	EV(Melee, 0)
	EV(Magic, 1)
	EV(Ranged, 2)
	EV(WeaponDamage, 3)
	EV(Surface, 4)
	EV(DoT, 5)
	EV(Reflected, 6)
END_ENUM()


BEGIN_ENUM(ItemSlot, uint8_t)
	EV(Helmet, 0)
	EV(Breast, 1)
	EV(Leggings, 2)
	EV(Weapon, 3)
	EV(Shield, 4)
	EV(Ring, 5)
	EV(Belt, 6)
	EV(Boots, 7)
	EV(Gloves, 8)
	EV(Amulet, 9)
	EV(Ring2, 10)
	EV(Wings, 11)
	EV(Horns, 12)
	EV(Overhead, 13)
	EV(Sentinel, 14)
END_ENUM()


BEGIN_BITMASK(StatCharacterFlags, uint8_t)
	EV(IsPlayer, 1)
	EV(InParty, 2)
	EV(IsSneaking, 4)
	EV(Invisible, 8)
	EV(Blind, 16)
	EV(DrinkedPotion, 32)
	EV(EquipmentValidated, 64)
END_ENUM()


BEGIN_BITMASK(HitFlag, uint32_t)
	EV(Hit, 1)
	EV(Blocked, 2)
	EV(Dodged, 4)
	EV(Missed, 8)
	EV(CriticalHit, 0x10)
	EV(Backstab, 0x20)
	EV(FromSetHP, 0x40)
	EV(DontCreateBloodSurface, 0x80)
	EV(Reflection, 0x200)
	EV(NoDamageOnOwner, 0x400)
	EV(FromShacklesOfPain, 0x800)
	EV(DamagedMagicArmor, 0x1000)
	EV(DamagedPhysicalArmor, 0x2000)
	EV(DamagedVitality, 0x4000)
	EV(Flanking, 0x8000)
	EV(PropagatedFromOwner, 0x10000)
	EV(Surface, 0x20000)
	EV(DoT, 0x40000)
	EV(ProcWindWalker, 0x80000)
	EV(CounterAttack, 0x100000)
	EV(Poisoned, 0x200000)
	EV(Burning, 0x400000)
	EV(Bleeding, 0x800000)
	// Custom flags
	EV(NoEvents, 0x80000000)
END_ENUM()


BEGIN_ENUM(StatusHealType, uint32_t)
	EV(None, 0)
	EV(Vitality, 1)
	EV(PhysicalArmor, 2)
	EV(MagicArmor, 3)
	EV(AllArmor, 4)
	EV(All, 5)
	EV(Source, 6)
END_ENUM()


BEGIN_ENUM(HealEffect, uint32_t)
	EV(None, 0)
	EV(ResistDeath, 1)
	EV(Heal, 2)
	EV(Behavior, 3)
	EV(Unknown4, 4)
	EV(Sitting, 5)
	EV(Surface, 6)
	EV(Lifesteal, 7)
	EV(NegativeDamage, 8)
	EV(Unknown9, 9)
	EV(Script, 10)
	EV(HealSharing, 11)
	EV(Necromantic, 12)
	EV(HealSharingReflected, 13)
END_ENUM()


// Persistent flags: 0x2414170022110
// AI flags: 0x4000070000060
BEGIN_BITMASK_NS(esv, CharacterFlags, uint64_t)
	EV(IsPlayer, 0x01)
	EV(Multiplayer, 0x02)
	EV(InParty, 0x04)
	EV(HostControl, 0x08)
	EV(OffStage, 0x20)
	EV(Dead, 0x40)
	EV(HasOwner, 0x80)
	EV(InDialog, 0x100)
	EV(Summon, 0x200)
	EV(CharacterControl, 0x2000)
	EV(Loaded, 0x4000)
	EV(InArena, 0x10000)
	EV(CharacterCreationFinished, 0x200000)
	EV(Floating, 0x400000)
	EV(SpotSneakers, 0x1000000)
	EV(Temporary, 0x2000000)
	EV(WalkThrough, 0x10000000)
	EV(CoverAmount, 0x20000000)
	EV(CanShootThrough, 0x40000000)
	EV(PartyFollower, 0x400000000)
	EV(Totem, 0x2000000000)
	EV(NoRotate, 0x8000000000)
	EV(IsHuge, 0x200000000000)
	EV(MadePlayer, 0x1000000000000)
	EV(RegisteredForAutomatedDialog, 0x40000000000000)
END_ENUM_NS()


BEGIN_BITMASK_NS(esv, CharacterFlags2, uint8_t)
	EV(Global, 0x01)
	EV(HasOsirisDialog, 0x02)
	EV(HasDefaultDialog, 0x04)
	EV(TreasureGeneratedForTrader, 0x10)
	EV(Trader, 0x20)
	EV(Resurrected, 0x40)
END_ENUM_NS()


BEGIN_BITMASK_NS(esv, CharacterFlags3, uint8_t)
	EV(IsPet, 0x01)
	EV(IsSpectating, 0x02)
	EV(NoReptuationEffects, 0x04)
	EV(HasWalkSpeedOverride, 0x08)
	EV(HasRunSpeedOverride, 0x10)
	EV(IsGameMaster, 0x20)
	EV(IsPossessed, 0x40)
END_ENUM_NS()


BEGIN_BITMASK(AIFlags, uint8_t)
	EV(CanNotUse, 0x01)
	EV(IgnoreSelf, 0x02)
	EV(IgnoreDebuff, 0x04)
	EV(IgnoreBuff, 0x08)
	EV(StatusIsSecondary, 0x10)
	EV(IgnoreControl, 0x20)
	EV(CanNotTargetFrozen, 0x40)
END_ENUM()

BEGIN_ENUM(GameActionType, int)
	EV(RainAction, 1)
	EV(StormAction, 2)
	EV(WallAction, 4)
	EV(TornadoAction, 6)
	EV(PathAction, 7)
	EV(GameObjectMoveAction, 8)
	EV(StatusDomeAction, 9)
END_ENUM()

BEGIN_ENUM(SkillType, uint32_t)
	EV(Zone, 0x1)
	EV(SkillHeal, 0x2)
	EV(Jump, 0x3)
	EV(MultiStrike, 0x4)
	EV(Path, 0x5)
	EV(Projectile, 0x6)
	EV(ProjectileStrike, 0x7)
	EV(Quake, 0x8)
	EV(Rain, 0x9)
	EV(Rush, 0xA)
	EV(Shout, 0xB)
	EV(Storm, 0xC)
	EV(Summon, 0xD)
	EV(Target, 0xE)
	EV(Teleportation, 0xF)
	EV(Tornado, 0x10)
	EV(Wall, 0x11)
	EV(Dome, 0x12)
END_ENUM()


BEGIN_BITMASK(StatAttributeFlags, uint64_t)
	EV(FreezeImmunity, 1ull << 0)
	EV(BurnImmunity, 1ull << 1)
	EV(StunImmunity, 1ull << 2)
	EV(PoisonImmunity, 1ull << 3)
	EV(CharmImmunity, 1ull << 4)
	EV(FearImmunity, 1ull << 5)
	EV(KnockdownImmunity, 1ull << 6)
	EV(MuteImmunity, 1ull << 7)
	EV(ChilledImmunity, 1ull << 8)
	EV(WarmImmunity, 1ull << 9)
	EV(WetImmunity, 1ull << 10)
	EV(BleedingImmunity, 1ull << 11)
	EV(CrippledImmunity, 1ull << 12)
	EV(BlindImmunity, 1ull << 13)
	EV(CursedImmunity, 1ull << 14)
	EV(WeakImmunity, 1ull << 15)
	EV(SlowedImmunity, 1ull << 16)
	EV(DiseasedImmunity, 1ull << 17)
	EV(InfectiousDiseasedImmunity, 1ull << 18)
	EV(PetrifiedImmunity, 1ull << 19)
	EV(DrunkImmunity, 1ull << 20)
	EV(SlippingImmunity, 1ull << 21)
	EV(FreezeContact, 1ull << 22)
	EV(BurnContact, 1ull << 23)
	EV(StunContact, 1ull << 24)
	EV(PoisonContact, 1ull << 25)
	EV(ChillContact, 1ull << 26)
	EV(Torch, 1ull << 27)
	EV(Arrow, 1ull << 28)
	EV(Unbreakable, 1ull << 29)
	EV(Unrepairable, 1ull << 30)
	EV(Unstorable, 1ull << 31)
	EV(Grounded, 1ull << 32)
	EV(HastedImmunity, 1ull << 33)
	EV(TauntedImmunity, 1ull << 34)
	EV(SleepingImmunity, 1ull << 35)
	EV(AcidImmunity, 1ull << 36)
	EV(SuffocatingImmunity, 1ull << 37)
	EV(RegeneratingImmunity, 1ull << 38)
	EV(DisarmedImmunity, 1ull << 39)
	EV(DecayingImmunity, 1ull << 40)
	EV(ClairvoyantImmunity, 1ull << 41)
	EV(EnragedImmunity, 1ull << 42)
	EV(BlessedImmunity, 1ull << 43)
	EV(ProtectFromSummon, 1ull << 44)
	EV(Floating, 1ull << 45)
	EV(DeflectProjectiles, 1ull << 46)
	EV(IgnoreClouds, 1ull << 47)
	EV(MadnessImmunity, 1ull << 48)
	EV(ChickenImmunity, 1ull << 49)
	EV(IgnoreCursedOil, 1ull << 50)
	EV(ShockedImmunity, 1ull << 51)
	EV(WebImmunity, 1ull << 52)
	EV(LootableWhenEquipped, 1ull << 53)
	EV(PickpocketableWhenEquipped, 1ull << 54)
	EV(LoseDurabilityOnCharacterHit, 1ull << 55)
	EV(EntangledContact, 1ull << 56)
	EV(ShacklesOfPainImmunity, 1ull << 57)
	EV(MagicalSulfur, 1ull << 58)
	EV(ThrownImmunity, 1ull << 59)
	EV(InvisibilityImmunity, 1ull << 60)
END_ENUM()



BEGIN_ENUM(TalentType, int)
	EV(None, 0)
	EV(ItemMovement, 1)
	EV(ItemCreation, 2)
	EV(Flanking, 3)
	EV(AttackOfOpportunity, 4)
	EV(Backstab, 5)
	EV(Trade, 6)
	EV(Lockpick, 7)
	EV(ChanceToHitRanged, 8)
	EV(ChanceToHitMelee, 9)
	EV(Damage, 10)
	EV(ActionPoints, 11)
	EV(ActionPoints2, 12)
	EV(Criticals, 13)
	EV(IncreasedArmor, 14)
	EV(Sight, 15)
	EV(ResistFear, 16)
	EV(ResistKnockdown, 17)
	EV(ResistStun, 18)
	EV(ResistPoison, 19)
	EV(ResistSilence, 20)
	EV(ResistDead, 21)
	EV(Carry, 22)
	EV(Throwing, 23)
	EV(Repair, 24)
	EV(ExpGain, 25)
	EV(ExtraStatPoints, 26)
	EV(ExtraSkillPoints, 27)
	EV(Durability, 28)
	EV(Awareness, 29)
	EV(Vitality, 30)
	EV(FireSpells, 31)
	EV(WaterSpells, 32)
	EV(AirSpells, 33)
	EV(EarthSpells, 34)
	EV(Charm, 35)
	EV(Intimidate, 36)
	EV(Reason, 37)
	EV(Luck, 38)
	EV(Initiative, 39)
	EV(InventoryAccess, 40)
	EV(AvoidDetection, 41)
	EV(AnimalEmpathy, 42)
	EV(Escapist, 43)
	EV(StandYourGround, 44)
	EV(SurpriseAttack, 45)
	EV(LightStep, 46)
	EV(ResurrectToFullHealth, 47)
	EV(Scientist, 48)
	EV(Raistlin, 49)
	EV(MrKnowItAll, 50)
	EV(WhatARush, 51)
	EV(FaroutDude, 52)
	EV(Leech, 53)
	EV(ElementalAffinity, 54)
	EV(FiveStarRestaurant, 55)
	EV(Bully, 56)
	EV(ElementalRanger, 57)
	EV(LightningRod, 58)
	EV(Politician, 59)
	EV(WeatherProof, 60)
	EV(LoneWolf, 61)
	EV(Zombie, 62)
	EV(Demon, 63)
	EV(IceKing, 64)
	EV(Courageous, 65)
	EV(GoldenMage, 66)
	EV(WalkItOff, 67)
	EV(FolkDancer, 68)
	EV(SpillNoBlood, 69)
	EV(Stench, 70)
	EV(Kickstarter, 71)
	EV(WarriorLoreNaturalArmor, 72)
	EV(WarriorLoreNaturalHealth, 73)
	EV(WarriorLoreNaturalResistance, 74)
	EV(RangerLoreArrowRecover, 75)
	EV(RangerLoreEvasionBonus, 76)
	EV(RangerLoreRangedAPBonus, 77)
	EV(RogueLoreDaggerAPBonus, 78)
	EV(RogueLoreDaggerBackStab, 79)
	EV(RogueLoreMovementBonus, 80)
	EV(RogueLoreHoldResistance, 81)
	EV(NoAttackOfOpportunity, 82)
	EV(WarriorLoreGrenadeRange, 83)
	EV(RogueLoreGrenadePrecision, 84)
	EV(WandCharge, 85)
	EV(DualWieldingDodging, 86)
	EV(Human_Inventive, 87)
	EV(Human_Civil, 88)
	EV(Elf_Lore, 89)
	EV(Elf_CorpseEating, 90)
	EV(Dwarf_Sturdy, 91)
	EV(Dwarf_Sneaking, 92)
	EV(Lizard_Resistance, 93)
	EV(Lizard_Persuasion, 94)
	EV(Perfectionist, 95)
	EV(Executioner, 96)
	EV(ViolentMagic, 97)
	EV(QuickStep, 98)
	EV(Quest_SpidersKiss_Str, 99)
	EV(Quest_SpidersKiss_Int, 100)
	EV(Quest_SpidersKiss_Per, 101)
	EV(Quest_SpidersKiss_Null, 102)
	EV(Memory, 103)
	EV(Quest_TradeSecrets, 104)
	EV(Quest_GhostTree, 105)
	EV(BeastMaster, 106)
	EV(LivingArmor, 107)
	EV(Torturer, 108)
	EV(Ambidextrous, 109)
	EV(Unstable, 110)
	EV(ResurrectExtraHealth, 111)
	EV(NaturalConductor, 112)
	EV(Quest_Rooted, 113)
	EV(PainDrinker, 114)
	EV(DeathfogResistant, 115)
	EV(Sourcerer, 116)
	EV(Rager, 117)
	EV(Elementalist, 118)
	EV(Sadist, 119)
	EV(Haymaker, 120)
	EV(Gladiator, 121)
	EV(Indomitable, 122)
	EV(WildMag, 123)
	EV(Jitterbug, 124)
	EV(Soulcatcher, 125)
	EV(MasterThief, 126)
	EV(GreedyVessel, 127)
	EV(MagicCycles, 128)
	EV(Max, MagicCycles)
END_ENUM()


BEGIN_ENUM(SurfaceType, uint32_t)
	EV(Fire, 0x0)
	EV(FireBlessed, 0x1)
	EV(FireCursed, 0x2)
	EV(FirePurified, 0x3)
	EV(Water, 0x4)
	EV(WaterElectrified, 0x5)
	EV(WaterFrozen, 0x6)
	EV(WaterBlessed, 0x7)
	EV(WaterElectrifiedBlessed, 0x8)
	EV(WaterFrozenBlessed, 0x9)
	EV(WaterCursed, 0xA)
	EV(WaterElectrifiedCursed, 0xB)
	EV(WaterFrozenCursed, 0xC)
	EV(WaterPurified, 0xD)
	EV(WaterElectrifiedPurified, 0xE)
	EV(WaterFrozenPurified, 0xF)
	EV(Blood, 0x10)
	EV(BloodElectrified, 0x11)
	EV(BloodFrozen, 0x12)
	EV(BloodBlessed, 0x13)
	EV(BloodElectrifiedBlessed, 0x14)
	EV(BloodFrozenBlessed, 0x15)
	EV(BloodCursed, 0x16)
	EV(BloodElectrifiedCursed, 0x17)
	EV(BloodFrozenCursed, 0x18)
	EV(BloodPurified, 0x19)
	EV(BloodElectrifiedPurified, 0x1A)
	EV(BloodFrozenPurified, 0x1B)
	EV(Poison, 0x1C)
	EV(PoisonBlessed, 0x1D)
	EV(PoisonCursed, 0x1E)
	EV(PoisonPurified, 0x1F)
	EV(Oil, 0x20)
	EV(OilBlessed, 0x21)
	EV(OilCursed, 0x22)
	EV(OilPurified, 0x23)
	EV(Lava, 0x24)
	EV(Source, 0x25)
	EV(Web, 0x26)
	EV(WebBlessed, 0x27)
	EV(WebCursed, 0x28)
	EV(WebPurified, 0x29)
	EV(Deepwater, 0x2A)
	EV(Custom, 0x2B)
	EV(CustomBlessed, 0x2C)
	EV(CustomCursed, 0x2D)
	EV(CustomPurified, 0x2E)
	EV(FireCloud, 0x2F)
	EV(FireCloudBlessed, 0x30)
	EV(FireCloudCursed, 0x31)
	EV(FireCloudPurified, 0x32)
	EV(WaterCloud, 0x33)
	EV(WaterCloudElectrified, 0x34)
	EV(WaterCloudBlessed, 0x35)
	EV(WaterCloudElectrifiedBlessed, 0x36)
	EV(WaterCloudCursed, 0x37)
	EV(WaterCloudElectrifiedCursed, 0x38)
	EV(WaterCloudPurified, 0x39)
	EV(WaterCloudElectrifiedPurified, 0x3A)
	EV(BloodCloud, 0x3B)
	EV(BloodCloudElectrified, 0x3C)
	EV(BloodCloudBlessed, 0x3D)
	EV(BloodCloudElectrifiedBlessed, 0x3E)
	EV(BloodCloudCursed, 0x3F)
	EV(BloodCloudElectrifiedCursed, 0x40)
	EV(BloodCloudPurified, 0x41)
	EV(BloodCloudElectrifiedPurified, 0x42)
	EV(PoisonCloud, 0x43)
	EV(PoisonCloudBlessed, 0x44)
	EV(PoisonCloudCursed, 0x45)
	EV(PoisonCloudPurified, 0x46)
	EV(SmokeCloud, 0x47)
	EV(SmokeCloudBlessed, 0x48)
	EV(SmokeCloudCursed, 0x49)
	EV(SmokeCloudPurified, 0x4A)
	EV(ExplosionCloud, 0x4B)
	EV(FrostCloud, 0x4C)
	EV(Deathfog, 0x4D)
	EV(ShockwaveCloud, 0x4E)
	EV(Sentinel, 0x4F)
END_ENUM()


BEGIN_ENUM(SurfaceActionType, uint32_t)
	EV(CreateSurfaceAction, 1)
	EV(CreatePuddleAction, 2)
	EV(ExtinguishFireAction, 3)
	EV(ZoneAction, 4)
	EV(TransformSurfaceAction, 5)
	EV(ChangeSurfaceOnPathAction, 6)
	EV(RectangleSurfaceAction, 7)
	EV(PolygonSurfaceAction, 8)
	EV(SwapSurfaceAction, 9)
END_ENUM()


BEGIN_ENUM(SurfaceTransformActionType, uint32_t)
	E(None)
	E(Ignite)
	E(Bless)
	E(Purify)
	E(Curse)
	E(Electrify)
	E(Melt)
	E(Freeze)
	E(Condense)
	E(Vaporize)
	E(Bloodify)
	E(Contaminate)
	E(Oilify)
	E(Shatter)
END_ENUM()


BEGIN_BITMASK(ESurfaceFlag, uint64_t)
	// --- BASE TYPE START
	EV(Fire, 0x1000000)
	EV(Water, 0x2000000)
	EV(Blood, 0x4000000)
	EV(Poison, 0x8000000)
	EV(Oil, 0x10000000)
	EV(Lava, 0x20000000)
	EV(Source, 0x40000000)
	EV(Web, 0x80000000)
	EV(Deepwater, 0x100000000)
	EV(Sulfurium, 0x200000000)
	// UNUSED = 0x400000000
	// --- BASE TYPE END


	// --- CLOUD TYPE START
	EV(FireCloud, 0x800000000)
	EV(WaterCloud, 0x1000000000)
	EV(BloodCloud, 0x2000000000)
	EV(PoisonCloud, 0x4000000000)
	EV(SmokeCloud, 0x8000000000)
	EV(ExplosionCloud, 0x10000000000)
	EV(FrostCloud, 0x20000000000)
	EV(Deathfog, 0x40000000000)
	EV(ShockwaveCloud, 0x80000000000)
	// UNUSED = 0x100000000000
	// UNUSED = 0x200000000000
	// --- CLOUD TYPE END

	EV(Blessed, 0x400000000000)
	EV(Cursed, 0x800000000000)
	EV(Purified, 0x1000000000000)
	// ??? = 0x2000000000000

	// --- SURFACE ADJ START
	EV(CloudBlessed, 0x4000000000000)
	EV(CloudCursed, 0x8000000000000)
	EV(CloudPurified, 0x10000000000000)
	// UNUSED = 0x20000000000000
	// --- SURFACE ADJ END

	// --- GROUND MOD START
	EV(Electrified, 0x40000000000000)
	EV(Frozen, 0x80000000000000)
	EV(CloudElectrified, 0x100000000000000)
	// --- GROUND MOD END

	// --- CLOUD MOD START
	EV(ElectrifiedDecay, 0x200000000000000)
	EV(SomeDecay, 0x400000000000000)
	// UNUSED = 0x800000000000000
	// --- CLOUD MOD END
END_ENUM()
