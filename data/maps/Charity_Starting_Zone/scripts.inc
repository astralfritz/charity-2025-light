Charity_Starting_Zone_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Charity_Starting_Zone_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Charity_Starting_Zone_OnFrame
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Charity_Starting_Zone_OnWarp
	.byte 0

Charity_Starting_Zone_OnTransition::
	end

Charity_Starting_Zone_EventScript_GivePokemon::
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
	removeobject LOCALID_CHARITY_STARTING_ZONE_BIRCH_BAG
	removeobject LOCALID_CHARITY_STARTING_ZONE_PC
	setflag FLAG_HIDE_CHARITY_STARTING_ZONE_BIRCH_BAG
	waitmovement 0
	special ChooseStarter
	waitstate
	applymovement LOCALID_PICK_A_MON, Charity_Starting_Zone_Movement_Away_From_Door
	waitmovement 0
	release
	end

Charity_Starting_Zone_OnFrame::
	.2byte 0

Charity_Starting_Zone_OnWarp::
	.2byte 0

Charity_Starting_Zone_EventScript_Start_Adventure::
	lockall
	goto_if_set FLAG_SYS_POKEMON_GET, Charity_Starting_Zone_EventScript_ChangeMoves
	goto Charity_Starting_Zone_EventScript_Pick_A_Mon
	releaseall
	end

Charity_Starting_Zone_EventScript_Pick_A_Mon::
	msgbox Charity_Starting_Zone_Text_Pick_A_Mon, MSGBOX_NPC
	goto Charity_Starting_Zone_EventScript_Start_Adventure_End
	releaseall
	end

Charity_Starting_Zone_EventScript_ChangeMoves::
	msgbox Charity_Starting_Zone_Text_ChangeMoves, MSGBOX_NPC
	goto Charity_Starting_Zone_EventScript_Start_Adventure_End
	releaseall
	end

Charity_Starting_Zone_EventScript_Start_Adventure_End::
	applymovement LOCALID_PICK_A_MON, Charity_Starting_Zone_Movement_Face_Down
	waitmovement 0
	releaseall
	end

Charity_Starting_Zone_EventScript_Warp_To_Charity_Battle_Hall::
	warp MAP_CHARITY_BATTLE_HALL, 4, 10
	waitstate

Charity_Starting_Zone_EventScript_Pick_A_Mon_Sign::
	lockall
	msgbox Charity_Starting_Zone_Text_Pick_A_Mon_Sign, MSGBOX_DEFAULT
	releaseall
	return

Charity_Starting_Zone_Movement_Away_From_Door:
	walk_right
	walk_in_place_down
	step_end

Charity_Starting_Zone_Movement_Face_Down:
	walk_in_place_down
	step_end

Charity_Starting_Zone_Text_Pick_A_Mon:
	.string "You must select your first POKéMON\n"
	.string "before you can proceed."
	.string "$"

Charity_Starting_Zone_Text_ChangeMoves:
	.string "Congrats on your first POKéMON!\p"
	.string "Make sure to check the summary.\n"
	.string "You can change the moveset in\p"
	.string "the menu using the start button."
	.string "$"

Charity_Starting_Zone_Text_Pick_A_Mon_Sign:
	.string "You cannot access your PC until\n"
	.string "you pick your first POKéMON from\l"
	.string "the bag!"
	.string "$"
