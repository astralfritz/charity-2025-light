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
	setobjectxyperm LOCALID_PICK_A_MON, 5, 2
# 11 "data/maps/Charity_StartingZone/scripts.pory"
	return
# 12 "data/maps/Charity_StartingZone/scripts.pory"

# 13 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_GivePokemon::
# 14 "data/maps/Charity_StartingZone/scripts.pory"
	lock
# 15 "data/maps/Charity_StartingZone/scripts.pory"
	fadescreen FADE_TO_BLACK
# 16 "data/maps/Charity_StartingZone/scripts.pory"
	setvar VAR_CHARITY_STATE, 1
# 17 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 18 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_BADGE01_GET
# 19 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_BADGE02_GET
# 20 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_BADGE03_GET
# 21 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_BADGE04_GET
# 22 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_BADGE05_GET
# 23 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_BADGE06_GET
# 24 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_BADGE07_GET
# 25 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_BADGE08_GET
# 26 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_NURSE_UNION_ROOM_REMINDER
# 27 "data/maps/Charity_StartingZone/scripts.pory"
	removeobject LOCALID_CHARITY_STARTING_ZONE_BIRCH_BAG
# 28 "data/maps/Charity_StartingZone/scripts.pory"
	removeobject LOCALID_CHARITY_STARTING_ZONE_PC
# 29 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_HIDE_CHARITY_STARTING_ZONE_BIRCH_BAG
# 30 "data/maps/Charity_StartingZone/scripts.pory"
	waitmovement 0
# 31 "data/maps/Charity_StartingZone/scripts.pory"
	special ChooseStarter
# 32 "data/maps/Charity_StartingZone/scripts.pory"
	waitstate
# 33 "data/maps/Charity_StartingZone/scripts.pory"
	applymovement LOCALID_PICK_A_MON, Charity_StartingZone_Movement_Away_From_Door
# 34 "data/maps/Charity_StartingZone/scripts.pory"
	waitmovement 0
# 35 "data/maps/Charity_StartingZone/scripts.pory"
	release
# 36 "data/maps/Charity_StartingZone/scripts.pory"
	end
# 37 "data/maps/Charity_StartingZone/scripts.pory"

# 38 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_BattlesWonSign::
# 39 "data/maps/Charity_StartingZone/scripts.pory"
	goto_if_eq VAR_CHARITY_BATTLES_WON, 0, Charity_StartingZone_EventScript_BattlesWonSign_Zero
# 40 "data/maps/Charity_StartingZone/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_CHARITY_BATTLES_WON
# 41 "data/maps/Charity_StartingZone/scripts.pory"
	lockall
# 42 "data/maps/Charity_StartingZone/scripts.pory"
	msgbox Charity_StartingZone_Text_BattlesWon, MSGBOX_NPC
# 43 "data/maps/Charity_StartingZone/scripts.pory"
	releaseall
# 44 "data/maps/Charity_StartingZone/scripts.pory"
	end
# 45 "data/maps/Charity_StartingZone/scripts.pory"

# 46 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_BattlesWonSign_Zero::
# 47 "data/maps/Charity_StartingZone/scripts.pory"
	lockall
# 48 "data/maps/Charity_StartingZone/scripts.pory"
	msgbox Charity_StartingZone_Text_BattlesWon_Zero, MSGBOX_NPC
# 49 "data/maps/Charity_StartingZone/scripts.pory"
	releaseall
# 50 "data/maps/Charity_StartingZone/scripts.pory"
	end
# 51 "data/maps/Charity_StartingZone/scripts.pory"

# 52 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_StartAdventure::
# 53 "data/maps/Charity_StartingZone/scripts.pory"
	goto_if_set FLAG_OPENED_LOOP_DIALOG, Charity_StartingZone_EventScript_StartAdventureSkip
# 54 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_OPENED_LOOP_DIALOG
# 55 "data/maps/Charity_StartingZone/scripts.pory"
	goto_if_eq VAR_CHARITY_LOOP, 1, Charity_StartingZone_EventScript_StartAdventure_1
# 56 "data/maps/Charity_StartingZone/scripts.pory"
	end
# 57 "data/maps/Charity_StartingZone/scripts.pory"

# 58 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_StartAdventureSkip::
# 59 "data/maps/Charity_StartingZone/scripts.pory"
	end
# 60 "data/maps/Charity_StartingZone/scripts.pory"

# 61 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_StartAdventure_1::
# 62 "data/maps/Charity_StartingZone/scripts.pory"
	lockall
# 63 "data/maps/Charity_StartingZone/scripts.pory"
	msgbox Charity_StartingZone_Text_Welcome_Back_1, MSGBOX_NPC
# 64 "data/maps/Charity_StartingZone/scripts.pory"
	releaseall
# 65 "data/maps/Charity_StartingZone/scripts.pory"
	end
# 66 "data/maps/Charity_StartingZone/scripts.pory"

# 67 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_BirchChat::
# 68 "data/maps/Charity_StartingZone/scripts.pory"
	lockall
# 69 "data/maps/Charity_StartingZone/scripts.pory"
	goto_if_unset FLAG_SYS_POKEMON_GET, Charity_StartingZone_EventScript_Pick_A_Mon
# 70 "data/maps/Charity_StartingZone/scripts.pory"
	goto_if_unset FLAG_CONGRATS_ON_FIRST_MON, Charity_StartingZone_EventScript_Congrats
# 71 "data/maps/Charity_StartingZone/scripts.pory"
	goto_if_eq VAR_TIPS_FROM_BIRCH, 0, Charity_StartingZone_EventScript_MultipleDialog
# 72 "data/maps/Charity_StartingZone/scripts.pory"
	goto_if_eq VAR_TIPS_FROM_BIRCH, 1, Charity_StartingZone_EventScript_ChangeMoves
# 73 "data/maps/Charity_StartingZone/scripts.pory"
	goto_if_eq VAR_TIPS_FROM_BIRCH, 2, Charity_StartingZone_EventScript_MoreMons
# 74 "data/maps/Charity_StartingZone/scripts.pory"
	goto_if_eq VAR_TIPS_FROM_BIRCH, 3, Charity_StartingZone_EventScript_TryAgain
# 75 "data/maps/Charity_StartingZone/scripts.pory"
	releaseall
# 76 "data/maps/Charity_StartingZone/scripts.pory"
	end
# 77 "data/maps/Charity_StartingZone/scripts.pory"

# 78 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_Pick_A_Mon::
# 79 "data/maps/Charity_StartingZone/scripts.pory"
	msgbox Charity_StartingZone_Text_Pick_A_Mon, MSGBOX_NPC
# 80 "data/maps/Charity_StartingZone/scripts.pory"
	goto Charity_StartingZone_EventScript_BirchChatEnd
# 81 "data/maps/Charity_StartingZone/scripts.pory"
	releaseall
# 82 "data/maps/Charity_StartingZone/scripts.pory"
	end
# 83 "data/maps/Charity_StartingZone/scripts.pory"

# 84 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_Congrats::
# 85 "data/maps/Charity_StartingZone/scripts.pory"
	setflag FLAG_CONGRATS_ON_FIRST_MON
# 86 "data/maps/Charity_StartingZone/scripts.pory"
	setvar VAR_TIPS_FROM_BIRCH, 1
# 87 "data/maps/Charity_StartingZone/scripts.pory"
	msgbox Charity_StartingZone_Text_Congrats, MSGBOX_NPC
# 88 "data/maps/Charity_StartingZone/scripts.pory"
	goto Charity_StartingZone_EventScript_BirchChatEnd
# 89 "data/maps/Charity_StartingZone/scripts.pory"
	releaseall
# 90 "data/maps/Charity_StartingZone/scripts.pory"
	end
# 91 "data/maps/Charity_StartingZone/scripts.pory"

# 92 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_MultipleDialog::
# 93 "data/maps/Charity_StartingZone/scripts.pory"
	setvar VAR_TIPS_FROM_BIRCH, 1
# 94 "data/maps/Charity_StartingZone/scripts.pory"
	msgbox Charity_StartingZone_Text_MultipleDialog, MSGBOX_NPC
# 95 "data/maps/Charity_StartingZone/scripts.pory"
	goto Charity_StartingZone_EventScript_BirchChatEnd
# 96 "data/maps/Charity_StartingZone/scripts.pory"
	releaseall
# 97 "data/maps/Charity_StartingZone/scripts.pory"
	end
# 98 "data/maps/Charity_StartingZone/scripts.pory"

# 99 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_ChangeMoves::
# 100 "data/maps/Charity_StartingZone/scripts.pory"
	setvar VAR_TIPS_FROM_BIRCH, 2
# 101 "data/maps/Charity_StartingZone/scripts.pory"
	msgbox Charity_StartingZone_Text_ChangeMoves, MSGBOX_NPC
# 102 "data/maps/Charity_StartingZone/scripts.pory"
	goto Charity_StartingZone_EventScript_BirchChatEnd
# 103 "data/maps/Charity_StartingZone/scripts.pory"
	releaseall
# 104 "data/maps/Charity_StartingZone/scripts.pory"
	end
# 105 "data/maps/Charity_StartingZone/scripts.pory"

# 106 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_MoreMons::
# 107 "data/maps/Charity_StartingZone/scripts.pory"
	setvar VAR_TIPS_FROM_BIRCH, 3
# 108 "data/maps/Charity_StartingZone/scripts.pory"
	msgbox Charity_StartingZone_Text_MoreMons, MSGBOX_NPC
# 109 "data/maps/Charity_StartingZone/scripts.pory"
	goto Charity_StartingZone_EventScript_BirchChatEnd
# 110 "data/maps/Charity_StartingZone/scripts.pory"
	releaseall
# 111 "data/maps/Charity_StartingZone/scripts.pory"
	end
# 112 "data/maps/Charity_StartingZone/scripts.pory"

# 113 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_TryAgain::
# 114 "data/maps/Charity_StartingZone/scripts.pory"
	setvar VAR_TIPS_FROM_BIRCH, 0
# 115 "data/maps/Charity_StartingZone/scripts.pory"
	msgbox Charity_StartingZone_Text_TryAgain, MSGBOX_NPC
# 116 "data/maps/Charity_StartingZone/scripts.pory"
	goto Charity_StartingZone_EventScript_BirchChatEnd
# 117 "data/maps/Charity_StartingZone/scripts.pory"
	releaseall
# 118 "data/maps/Charity_StartingZone/scripts.pory"
	end
# 119 "data/maps/Charity_StartingZone/scripts.pory"

# 120 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_BirchChatEnd::
# 121 "data/maps/Charity_StartingZone/scripts.pory"
	applymovement LOCALID_PICK_A_MON, Charity_StartingZone_Movement_Face_Down
# 122 "data/maps/Charity_StartingZone/scripts.pory"
	waitmovement 0
# 123 "data/maps/Charity_StartingZone/scripts.pory"
	releaseall
# 124 "data/maps/Charity_StartingZone/scripts.pory"
	end
# 125 "data/maps/Charity_StartingZone/scripts.pory"

# 126 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_EventScript_Pick_A_Mon_Sign::
# 127 "data/maps/Charity_StartingZone/scripts.pory"
	lockall
# 128 "data/maps/Charity_StartingZone/scripts.pory"
	msgbox Charity_StartingZone_Text_Pick_A_Mon_Sign, MSGBOX_DEFAULT
# 129 "data/maps/Charity_StartingZone/scripts.pory"
	releaseall
# 130 "data/maps/Charity_StartingZone/scripts.pory"
	return
# 131 "data/maps/Charity_StartingZone/scripts.pory"

# 132 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_Movement_Away_From_Door:
# 133 "data/maps/Charity_StartingZone/scripts.pory"
	walk_right
# 134 "data/maps/Charity_StartingZone/scripts.pory"
	walk_in_place_down
# 135 "data/maps/Charity_StartingZone/scripts.pory"
	step_end
# 136 "data/maps/Charity_StartingZone/scripts.pory"

# 137 "data/maps/Charity_StartingZone/scripts.pory"
Charity_StartingZone_Movement_Face_Down:
# 138 "data/maps/Charity_StartingZone/scripts.pory"
	walk_in_place_down
# 139 "data/maps/Charity_StartingZone/scripts.pory"
	step_end

Charity_StartingZone_Text_BattlesWon::
# 141 "data/maps/Charity_StartingZone/scripts.pory"
	.string "Number of battles won : {STR_VAR_1}\n"
	.string "of 27$"

Charity_StartingZone_Text_BattlesWon_Zero::
# 145 "data/maps/Charity_StartingZone/scripts.pory"
	.string "Number of battles won : 0 of 27$"

Charity_StartingZone_Text_Pick_A_Mon::
# 149 "data/maps/Charity_StartingZone/scripts.pory"
	.string "You must select your first POKéMON\n"
	.string "before you can proceed.$"

Charity_StartingZone_Text_Congrats::
# 153 "data/maps/Charity_StartingZone/scripts.pory"
	.string "Congrats on your first POKéMON! Some\n"
	.string "people might have multiple dialogs if\l"
	.string "you talk to them more.$"

Charity_StartingZone_Text_MultipleDialog::
# 157 "data/maps/Charity_StartingZone/scripts.pory"
	.string "Some people might have multiple dialogs\n"
	.string "if you talk to them more.$"

Charity_StartingZone_Text_ChangeMoves::
# 161 "data/maps/Charity_StartingZone/scripts.pory"
	.string "Make sure to check the summary. You can\n"
	.string "change the moveset in the menu using\l"
	.string "the start button.$"

Charity_StartingZone_Text_MoreMons::
# 165 "data/maps/Charity_StartingZone/scripts.pory"
	.string "Check out the PC for more random\n"
	.string "POKéMON to help you!$"

Charity_StartingZone_Text_TryAgain::
# 169 "data/maps/Charity_StartingZone/scripts.pory"
	.string "If you lose, you'll come back here to\n"
	.string "pick a new team. Don't feel bad if you\l"
	.string "don't like the ones available now.$"

Charity_StartingZone_Text_Pick_A_Mon_Sign::
# 173 "data/maps/Charity_StartingZone/scripts.pory"
	.string "You cannot access your PC until you\n"
	.string "pick your first POKéMON from the bag!$"

Charity_StartingZone_Text_Welcome_Back_1::
# 177 "data/maps/Charity_StartingZone/scripts.pory"
	.string "Welcome back! You'll find battles to be\n"
	.string "a bit easier this time I believe.$"

Charity_StartingZone_Text_Welcome_Back_2::
# 181 "data/maps/Charity_StartingZone/scripts.pory"
	.string "Back again huh? Make sure to find\n"
	.string "everyone! A lot of people donated!$"
