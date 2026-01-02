StartingZone_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, StartingZone_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, StartingZone_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, StartingZone_OnWarp
	.byte 0

StartingZone_OnTransition::
	end

StartingZone_EventScript_GivePokemon::
	lock
	fadescreen FADE_TO_BLACK
	setvar VAR_CHARITY_STATE, 1
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_BADGE01_GET
	setflag FLAG_BADGE02_GET
	setflag FLAG_BADGE03_GET
	setflag FLAG_BADGE04_GET
	setflag FLAG_BADGE05_GET
	setflag FLAG_BADGE06_GET
	setflag FLAG_BADGE07_GET
	setflag FLAG_BADGE08_GET
	setflag FLAG_NURSE_UNION_ROOM_REMINDER
	removeobject LOCALID_STARTINGZONE_BIRCH_BAG
	setflag FLAG_HIDE_STARTING_ZONE_BIRCH_BAG
	waitmovement 0
	special ChooseStarter
	waitstate
	applymovement LOCALID_PICK_A_MON, StartingZone_Movement_Away_From_Door
	waitmovement 0
	release
	end

StartingZone_OnFrame::
	.2byte 0

StartingZone_OnWarp::
	.2byte 0

StartingZone_EventScript_Start_Adventure::
	lockall
	goto_if_set FLAG_SYS_POKEMON_GET, StartingZone_EventScript_ChangeMoves
	goto StartingZone_EventScript_Pick_A_Mon
	releaseall
	end

StartingZone_EventScript_Pick_A_Mon::
	msgbox StartingZone_Text_Pick_A_Mon, MSGBOX_NPC
	goto StartingZone_EventScript_Start_Adventure_End
	releaseall
	end

StartingZone_EventScript_ChangeMoves::
	msgbox StartingZone_Text_ChangeMoves, MSGBOX_NPC
	goto StartingZone_EventScript_Start_Adventure_End
	releaseall
	end

StartingZone_EventScript_Start_Adventure_End::
	applymovement LOCALID_PICK_A_MON, StartingZone_Movement_Face_Down
	waitmovement 0
	releaseall
	end

StartingZone_EventScript_Warp_To_Charity_Battle_Hall::
	warp MAP_CHARITY_BATTLE_HALL, 4, 10
	waitstate

StartingZone_Movement_Away_From_Door:
	walk_right
	walk_in_place_down
	step_end

StartingZone_Movement_Face_Down:
	walk_in_place_down
	step_end

StartingZone_Text_Pick_A_Mon:
	.string "You must select your first POKéMON\n"
	.string "before you can proceed.$"

StartingZone_Text_ChangeMoves:
	.string "Congrats on your first POKéMON!\p"
	.string "Make sure to check the summary.\n"
	.string "You can change the moveset in\p"
	.string "the menu using the start button.$"
