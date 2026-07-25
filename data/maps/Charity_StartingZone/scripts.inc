Charity_StartingZone_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Charity_StartingZone_OnTransition
	.byte 0

Charity_StartingZone_OnTransition:
	goto_if_eq VAR_CHARITY_STATE, 0, Charity_StartingZone_EventScript_BirchBlock
	end

Charity_StartingZone_EventScript_BirchBlock::
	setobjectxyperm LOCALID_PICK_A_MON, 5, 2
	return

Charity_StartingZone_EventScript_GivePokemon::
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
	applymovement LOCALID_PICK_A_MON, Charity_StartingZone_Movement_Away_From_Door
	waitmovement 0
	release
	end

Charity_StartingZone_EventScript_BattlesWonSign::
	goto_if_eq VAR_CHARITY_BATTLES_WON, 0, Charity_StartingZone_EventScript_BattlesWonSign_Zero
	buffernumberstring STR_VAR_1, VAR_CHARITY_BATTLES_WON
	lockall
	msgbox Charity_StartingZone_Text_BattlesWon, MSGBOX_NPC
	releaseall
	end

Charity_StartingZone_EventScript_BattlesWonSign_Zero::
	lockall
	msgbox Charity_StartingZone_Text_BattlesWon_Zero, MSGBOX_NPC
	releaseall
	end

Charity_StartingZone_EventScript_StartAdventure::
	goto_if_set FLAG_OPENED_LOOP_DIALOG, Charity_StartingZone_EventScript_StartAdventureSkip
	setflag FLAG_OPENED_LOOP_DIALOG
	goto_if_eq VAR_CHARITY_LOOP, 1, Charity_StartingZone_EventScript_StartAdventure_1
	end

Charity_StartingZone_EventScript_StartAdventureSkip::
	end

Charity_StartingZone_EventScript_StartAdventure_1::
	lockall
	msgbox Charity_StartingZone_Text_Welcome_Back_1, MSGBOX_NPC
	releaseall
	end

Charity_StartingZone_EventScript_BirchChat::
	lockall
	goto_if_unset FLAG_SYS_POKEMON_GET, Charity_StartingZone_EventScript_Pick_A_Mon
	goto_if_unset FLAG_CONGRATS_ON_FIRST_MON, Charity_StartingZone_EventScript_Congrats
	goto_if_eq VAR_TIPS_FROM_BIRCH, 0, Charity_StartingZone_EventScript_MultipleDialog
	goto_if_eq VAR_TIPS_FROM_BIRCH, 1, Charity_StartingZone_EventScript_ChangeMoves
	goto_if_eq VAR_TIPS_FROM_BIRCH, 2, Charity_StartingZone_EventScript_MoreMons
	goto_if_eq VAR_TIPS_FROM_BIRCH, 3, Charity_StartingZone_EventScript_TryAgain
	releaseall
	end

Charity_StartingZone_EventScript_Pick_A_Mon::
	msgbox Charity_StartingZone_Text_Pick_A_Mon, MSGBOX_NPC
	goto Charity_StartingZone_EventScript_BirchChatEnd
	releaseall
	end

Charity_StartingZone_EventScript_Congrats::
	setflag FLAG_CONGRATS_ON_FIRST_MON
	setvar VAR_TIPS_FROM_BIRCH, 1
	msgbox Charity_StartingZone_Text_Congrats, MSGBOX_NPC
	goto Charity_StartingZone_EventScript_BirchChatEnd
	releaseall
	end

Charity_StartingZone_EventScript_MultipleDialog::
	setvar VAR_TIPS_FROM_BIRCH, 1
	msgbox Charity_StartingZone_Text_MultipleDialog, MSGBOX_NPC
	goto Charity_StartingZone_EventScript_BirchChatEnd
	releaseall
	end

Charity_StartingZone_EventScript_ChangeMoves::
	setvar VAR_TIPS_FROM_BIRCH, 2
	msgbox Charity_StartingZone_Text_ChangeMoves, MSGBOX_NPC
	goto Charity_StartingZone_EventScript_BirchChatEnd
	releaseall
	end

Charity_StartingZone_EventScript_MoreMons::
	setvar VAR_TIPS_FROM_BIRCH, 3
	msgbox Charity_StartingZone_Text_MoreMons, MSGBOX_NPC
	goto Charity_StartingZone_EventScript_BirchChatEnd
	releaseall
	end

Charity_StartingZone_EventScript_TryAgain::
	setvar VAR_TIPS_FROM_BIRCH, 0
	msgbox Charity_StartingZone_Text_TryAgain, MSGBOX_NPC
	goto Charity_StartingZone_EventScript_BirchChatEnd
	releaseall
	end

Charity_StartingZone_EventScript_BirchChatEnd::
	applymovement LOCALID_PICK_A_MON, Charity_StartingZone_Movement_Face_Down
	waitmovement 0
	releaseall
	end

Charity_StartingZone_EventScript_Pick_A_Mon_Sign::
	lockall
	msgbox Charity_StartingZone_Text_Pick_A_Mon_Sign, MSGBOX_DEFAULT
	releaseall
	return

Charity_StartingZone_Movement_Away_From_Door:
	walk_right
	walk_in_place_down
	step_end

Charity_StartingZone_Movement_Face_Down:
	walk_in_place_down
	step_end

Charity_StartingZone_Text_BattlesWon:
	.string "Number of battles won: {STR_VAR_1} of 27"
	.string "$"

Charity_StartingZone_Text_BattlesWon_Zero:
	.string "Number of battles won: 0 of 27"
	.string "$"

Charity_StartingZone_Text_Pick_A_Mon:
	.string "You must select your first POKéMON\n"
	.string "before you can proceed."
	.string "$"

Charity_StartingZone_Text_Congrats:
	.string "Congrats on your first POKéMON!\p"
	.string "Some people might have multiple\n"
	.string "dialogs if you talk to them more."
	.string "$"

Charity_StartingZone_Text_MultipleDialog:
	.string "Some people might have multiple\n"
	.string "dialogs if you talk to them more."
	.string "$"

Charity_StartingZone_Text_ChangeMoves:
	.string "Make sure to check the summary.\n"
	.string "You can change the moveset in\l"
	.string "the menu using the start button."
	.string "$"

Charity_StartingZone_Text_MoreMons:
	.string "Check out the PC for more random\n"
	.string "POKéMON to help you!"
	.string "$"

Charity_StartingZone_Text_TryAgain:
	.string "If you lose, you'll come back here to\n"
	.string "pick a new team.\p"
	.string "Don't feel bad if you don't like the\n"
	.string "ones available now."
	.string "$"

Charity_StartingZone_Text_Pick_A_Mon_Sign:
	.string "You cannot access your PC until\n"
	.string "you pick your first POKéMON from\l"
	.string "the bag!"
	.string "$"

Charity_StartingZone_Text_Welcome_Back_1:
	.string "Welcome back! You'll find battles\n"
	.string "to be a bit easier this time I\l"
	.string "believe."
	.string "$"

Charity_StartingZone_Text_Welcome_Back_2:
	.string "Back again huh? Make sure to find\n"
	.string "everyone! A lot of people donated!"
	.string "$"
