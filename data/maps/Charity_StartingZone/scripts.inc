# 1 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_MapScripts::
# 2 "data/maps/Charity_StartingZone/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Charity_StartingZone_OnTransition
# 3 "data/maps/Charity_StartingZone/scripts.pory"
	.byte 0
# 4 "data/maps/Charity_StartingZone/scripts.pory"

# 5 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_OnTransition:
# 6 "data/maps/Charity_StartingZone/scripts.pory"
	goto_if_eq VAR_CHARITY_STATE, 0, Charity_StartingZone_EventScript_BirchBlock
# 7 "data/maps/Charity_StartingZone/scripts.pory"
	end
# 8 "data/maps/Charity_StartingZone/scripts.pory"

# 9 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_BirchBlock::
# 10 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_RECEIVED_RUNNING_SHOES
# 11 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 12 "data/maps/Charity_StartingZone/scripts.pory"
	setobjectxyperm LOCALID_PICK_A_MON, 5, 2
# 13 "data/maps/Charity_StartingZone/scripts.pory"
	return
# 14 "data/maps/Charity_StartingZone/scripts.pory"

# 15 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_GivePokemon::
# 16 "data/maps/Charity_StartingZone/scripts.pory"
	lock
# 17 "data/maps/Charity_StartingZone/scripts.pory"
	fadescreen FADE_TO_BLACK
# 18 "data/maps/Charity_StartingZone/scripts.pory"
	setvar VAR_CHARITY_STATE, 1
# 19 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 20 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_BADGE01_GET
# 21 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_BADGE02_GET
# 22 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_BADGE03_GET
# 23 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_BADGE04_GET
# 24 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_BADGE05_GET
# 25 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_BADGE06_GET
# 26 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_BADGE07_GET
# 27 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_BADGE08_GET
# 28 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_NURSE_UNION_ROOM_REMINDER
# 29 "data/maps/Charity_StartingZone/scripts.pory"
	removeobject LOCALID_CHARITY_STARTING_ZONE_BIRCH_BAG
# 30 "data/maps/Charity_StartingZone/scripts.pory"
	removeobject LOCALID_CHARITY_STARTING_ZONE_PC
# 31 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_HIDE_CHARITY_STARTING_ZONE_BIRCH_BAG
# 32 "data/maps/Charity_StartingZone/scripts.pory"
	waitmovement 0
# 33 "data/maps/Charity_StartingZone/scripts.pory"
	special ChooseStarter
# 34 "data/maps/Charity_StartingZone/scripts.pory"
	waitstate
# 35 "data/maps/Charity_StartingZone/scripts.pory"
	applymovement LOCALID_PICK_A_MON, Charity_StartingZone_Movement_Away_From_Door
# 36 "data/maps/Charity_StartingZone/scripts.pory"
	waitmovement 0
# 37 "data/maps/Charity_StartingZone/scripts.pory"
	release
# 38 "data/maps/Charity_StartingZone/scripts.pory"
	end
# 39 "data/maps/Charity_StartingZone/scripts.pory"

# 40 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_BattlesWonSign::
# 41 "data/maps/Charity_StartingZone/scripts.pory"
	goto_if_eq VAR_CHARITY_BATTLES_WON, 0, Charity_StartingZone_EventScript_BattlesWonSign_Zero
# 42 "data/maps/Charity_StartingZone/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_CHARITY_BATTLES_WON
# 43 "data/maps/Charity_StartingZone/scripts.pory"
	lockall
# 44 "data/maps/Charity_StartingZone/scripts.pory"
	msgbox Charity_StartingZone_Text_BattlesWon, MSGBOX_NPC
# 45 "data/maps/Charity_StartingZone/scripts.pory"
	releaseall
# 46 "data/maps/Charity_StartingZone/scripts.pory"
	end
# 47 "data/maps/Charity_StartingZone/scripts.pory"

# 48 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_BattlesWonSign_Zero::
# 49 "data/maps/Charity_StartingZone/scripts.pory"
	lockall
# 50 "data/maps/Charity_StartingZone/scripts.pory"
	msgbox Charity_StartingZone_Text_BattlesWon_Zero, MSGBOX_NPC
# 51 "data/maps/Charity_StartingZone/scripts.pory"
	releaseall
# 52 "data/maps/Charity_StartingZone/scripts.pory"
	end
# 53 "data/maps/Charity_StartingZone/scripts.pory"

# 54 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_BirchChat::
# 55 "data/maps/Charity_StartingZone/scripts.pory"
	lockall
# 56 "data/maps/Charity_StartingZone/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Charity_StartingZone_EventScript_Pick_A_Mon
# 57 "data/maps/Charity_StartingZone/scripts.pory"
	goto_if_unset FLAG_CONGRATS_ON_FIRST_MON, Charity_StartingZone_EventScript_Congrats
# 58 "data/maps/Charity_StartingZone/scripts.pory"
	goto_if_eq VAR_TIPS_FROM_BIRCH, 0, Charity_StartingZone_EventScript_MultipleDialog
# 59 "data/maps/Charity_StartingZone/scripts.pory"
	goto_if_eq VAR_TIPS_FROM_BIRCH, 1, Charity_StartingZone_EventScript_ChangeMoves
# 60 "data/maps/Charity_StartingZone/scripts.pory"
	goto_if_eq VAR_TIPS_FROM_BIRCH, 2, Charity_StartingZone_EventScript_MoreMons
# 61 "data/maps/Charity_StartingZone/scripts.pory"
	goto_if_eq VAR_TIPS_FROM_BIRCH, 3, Charity_StartingZone_EventScript_TryAgain
# 62 "data/maps/Charity_StartingZone/scripts.pory"
	releaseall
# 63 "data/maps/Charity_StartingZone/scripts.pory"
	end
# 64 "data/maps/Charity_StartingZone/scripts.pory"

# 65 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_Pick_A_Mon::
# 66 "data/maps/Charity_StartingZone/scripts.pory"
	msgbox Charity_StartingZone_Text_Pick_A_Mon, MSGBOX_NPC
# 67 "data/maps/Charity_StartingZone/scripts.pory"
	goto Charity_StartingZone_EventScript_BirchChatEnd
# 68 "data/maps/Charity_StartingZone/scripts.pory"
	releaseall
# 69 "data/maps/Charity_StartingZone/scripts.pory"
	end
# 70 "data/maps/Charity_StartingZone/scripts.pory"

# 71 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_Congrats::
# 72 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_CONGRATS_ON_FIRST_MON
# 73 "data/maps/Charity_StartingZone/scripts.pory"
	setvar VAR_TIPS_FROM_BIRCH, 1
# 74 "data/maps/Charity_StartingZone/scripts.pory"
	msgbox Charity_StartingZone_Text_Congrats, MSGBOX_NPC
# 75 "data/maps/Charity_StartingZone/scripts.pory"
	goto Charity_StartingZone_EventScript_BirchChatEnd
# 76 "data/maps/Charity_StartingZone/scripts.pory"
	releaseall
# 77 "data/maps/Charity_StartingZone/scripts.pory"
	end
# 78 "data/maps/Charity_StartingZone/scripts.pory"

# 79 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_MultipleDialog::
# 80 "data/maps/Charity_StartingZone/scripts.pory"
	setvar VAR_TIPS_FROM_BIRCH, 1
# 81 "data/maps/Charity_StartingZone/scripts.pory"
	msgbox Charity_StartingZone_Text_MultipleDialog, MSGBOX_NPC
# 82 "data/maps/Charity_StartingZone/scripts.pory"
	goto Charity_StartingZone_EventScript_BirchChatEnd
# 83 "data/maps/Charity_StartingZone/scripts.pory"
	releaseall
# 84 "data/maps/Charity_StartingZone/scripts.pory"
	end
# 85 "data/maps/Charity_StartingZone/scripts.pory"

# 86 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_ChangeMoves::
# 87 "data/maps/Charity_StartingZone/scripts.pory"
	setvar VAR_TIPS_FROM_BIRCH, 2
# 88 "data/maps/Charity_StartingZone/scripts.pory"
	msgbox Charity_StartingZone_Text_ChangeMoves, MSGBOX_NPC
# 89 "data/maps/Charity_StartingZone/scripts.pory"
	goto Charity_StartingZone_EventScript_BirchChatEnd
# 90 "data/maps/Charity_StartingZone/scripts.pory"
	releaseall
# 91 "data/maps/Charity_StartingZone/scripts.pory"
	end
# 92 "data/maps/Charity_StartingZone/scripts.pory"

# 93 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_MoreMons::
# 94 "data/maps/Charity_StartingZone/scripts.pory"
	setvar VAR_TIPS_FROM_BIRCH, 3
# 95 "data/maps/Charity_StartingZone/scripts.pory"
	msgbox Charity_StartingZone_Text_MoreMons, MSGBOX_NPC
# 96 "data/maps/Charity_StartingZone/scripts.pory"
	goto Charity_StartingZone_EventScript_BirchChatEnd
# 97 "data/maps/Charity_StartingZone/scripts.pory"
	releaseall
# 98 "data/maps/Charity_StartingZone/scripts.pory"
	end
# 99 "data/maps/Charity_StartingZone/scripts.pory"

# 100 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_TryAgain::
# 101 "data/maps/Charity_StartingZone/scripts.pory"
	setvar VAR_TIPS_FROM_BIRCH, 0
# 102 "data/maps/Charity_StartingZone/scripts.pory"
	msgbox Charity_StartingZone_Text_TryAgain, MSGBOX_NPC
# 103 "data/maps/Charity_StartingZone/scripts.pory"
	goto Charity_StartingZone_EventScript_BirchChatEnd
# 104 "data/maps/Charity_StartingZone/scripts.pory"
	releaseall
# 105 "data/maps/Charity_StartingZone/scripts.pory"
	end
# 106 "data/maps/Charity_StartingZone/scripts.pory"

# 107 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_BirchChatEnd::
# 108 "data/maps/Charity_StartingZone/scripts.pory"
	applymovement LOCALID_PICK_A_MON, Charity_StartingZone_Movement_Face_Down
# 109 "data/maps/Charity_StartingZone/scripts.pory"
	waitmovement 0
# 110 "data/maps/Charity_StartingZone/scripts.pory"
	releaseall
# 111 "data/maps/Charity_StartingZone/scripts.pory"
	end
# 112 "data/maps/Charity_StartingZone/scripts.pory"

# 113 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_Pick_A_Mon_Sign::
# 114 "data/maps/Charity_StartingZone/scripts.pory"
	lockall
# 115 "data/maps/Charity_StartingZone/scripts.pory"
	msgbox Charity_StartingZone_Text_Pick_A_Mon_Sign, MSGBOX_DEFAULT
# 116 "data/maps/Charity_StartingZone/scripts.pory"
	releaseall
# 117 "data/maps/Charity_StartingZone/scripts.pory"
	return
# 118 "data/maps/Charity_StartingZone/scripts.pory"

# 119 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_Movement_Away_From_Door:
# 120 "data/maps/Charity_StartingZone/scripts.pory"
	walk_right
# 121 "data/maps/Charity_StartingZone/scripts.pory"
	walk_in_place_down
# 122 "data/maps/Charity_StartingZone/scripts.pory"
	step_end
# 123 "data/maps/Charity_StartingZone/scripts.pory"

# 124 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_Movement_Face_Down:
# 125 "data/maps/Charity_StartingZone/scripts.pory"
	walk_in_place_down
# 126 "data/maps/Charity_StartingZone/scripts.pory"
	step_end

Charity_StartingZone_EventScript_StartAdventure::
# 129 "data/maps/Charity_StartingZone/scripts.pory"
	goto_if_set FLAG_OPENED_LOOP_DIALOG, Charity_StartingZone_EventScript_StartAdventureSkip
# 130 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_OPENED_LOOP_DIALOG
# 131 "data/maps/Charity_StartingZone/scripts.pory"
	goto_if_eq VAR_CHARITY_LOOP, 1, Charity_StartingZone_EventScript_StartAdventure_1
# 132 "data/maps/Charity_StartingZone/scripts.pory"
	goto_if_eq VAR_CHARITY_LOOP, 2, Charity_StartingZone_EventScript_StartAdventure_2
	end


Charity_StartingZone_EventScript_StartAdventureSkip::
	end


Charity_StartingZone_EventScript_StartAdventure_1::
# 141 "data/maps/Charity_StartingZone/scripts.pory"
	lockall
# 142 "data/maps/Charity_StartingZone/scripts.pory"
	msgbox Charity_StartingZone_Text_Welcome_Back_1, MSGBOX_NPC
# 143 "data/maps/Charity_StartingZone/scripts.pory"
	releaseall
	end


Charity_StartingZone_EventScript_StartAdventure_2::
# 148 "data/maps/Charity_StartingZone/scripts.pory"
	lockall
# 149 "data/maps/Charity_StartingZone/scripts.pory"
	msgbox Charity_StartingZone_Text_Welcome_Back_2, MSGBOX_NPC
# 150 "data/maps/Charity_StartingZone/scripts.pory"
	releaseall
	end


Charity_StartingZone_Text_BattlesWon::
# 154 "data/maps/Charity_StartingZone/scripts.pory"
	.string "Number of battles won : {STR_VAR_1}\n"
	.string "of 27$"

Charity_StartingZone_Text_BattlesWon_Zero::
# 158 "data/maps/Charity_StartingZone/scripts.pory"
	.string "Number of battles won : 0 of 27$"

Charity_StartingZone_Text_Pick_A_Mon::
# 162 "data/maps/Charity_StartingZone/scripts.pory"
	.string "You must select your first POKéMON\n"
	.string "before you can proceed.$"

Charity_StartingZone_Text_Congrats::
# 166 "data/maps/Charity_StartingZone/scripts.pory"
	.string "Congrats on your first POKéMON! Some\n"
	.string "people might have multiple dialogs if\l"
	.string "you talk to them more.$"

Charity_StartingZone_Text_MultipleDialog::
# 170 "data/maps/Charity_StartingZone/scripts.pory"
	.string "Some people might have multiple dialogs\n"
	.string "if you talk to them more.$"

Charity_StartingZone_Text_ChangeMoves::
# 174 "data/maps/Charity_StartingZone/scripts.pory"
	.string "Make sure to check the summary. You can\n"
	.string "change the moveset in the menu using\l"
	.string "the start button.$"

Charity_StartingZone_Text_MoreMons::
# 178 "data/maps/Charity_StartingZone/scripts.pory"
	.string "Check out the PC for more random\n"
	.string "POKéMON to help you!$"

Charity_StartingZone_Text_TryAgain::
# 182 "data/maps/Charity_StartingZone/scripts.pory"
	.string "If you lose, you'll come back here to\n"
	.string "pick a new team. Don't feel bad if you\l"
	.string "don't like the ones available now.$"

Charity_StartingZone_Text_Pick_A_Mon_Sign::
# 186 "data/maps/Charity_StartingZone/scripts.pory"
	.string "You cannot access your PC until you\n"
	.string "pick your first POKéMON from the bag!$"

Charity_StartingZone_Text_Welcome_Back_1::
# 190 "data/maps/Charity_StartingZone/scripts.pory"
	.string "Welcome back! You'll find you have a\n"
	.string "small advantage now.$"

Charity_StartingZone_Text_Welcome_Back_2::
# 194 "data/maps/Charity_StartingZone/scripts.pory"
	.string "Back again huh? Make sure to find\n"
	.string "everyone! A lot of people donated!$"
