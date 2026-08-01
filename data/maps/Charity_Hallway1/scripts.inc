# 1 "data/maps/Charity_Hallway1/scripts.pory"
Charity_Hallway1_MapScripts::
# 2 "data/maps/Charity_Hallway1/scripts.pory"
	.byte 0
# 3 "data/maps/Charity_Hallway1/scripts.pory"

# 4 "data/maps/Charity_Hallway1/scripts.pory"
Charity_Hallway1_EventScript_ToolBox::
# 5 "data/maps/Charity_Hallway1/scripts.pory"
	lockall
# 6 "data/maps/Charity_Hallway1/scripts.pory"
	msgbox Charity_Hallway1_Text_ToolBox, MSGBOX_DEFAULT
# 7 "data/maps/Charity_Hallway1/scripts.pory"
	releaseall
# 8 "data/maps/Charity_Hallway1/scripts.pory"
	return
# 9 "data/maps/Charity_Hallway1/scripts.pory"

# 10 "data/maps/Charity_Hallway1/scripts.pory"
Charity_Hallway1_EventScript_WarpToPokecenter::
# 11 "data/maps/Charity_Hallway1/scripts.pory"
	warp MAP_CHARITY_POKECENTER, 2, 6
# 12 "data/maps/Charity_Hallway1/scripts.pory"
	waitstate
# 13 "data/maps/Charity_Hallway1/scripts.pory"

# 14 "data/maps/Charity_Hallway1/scripts.pory"
Charity_Hallway1_EventScript_astralfritz::
# 15 "data/maps/Charity_Hallway1/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_astralfritz, Charity_Hallway1_Text_astralfritzIntro, Charity_Hallway1_Text_astralfritzDefeat
# 16 "data/maps/Charity_Hallway1/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_astralfritz
# 17 "data/maps/Charity_Hallway1/scripts.pory"
	goto_if_eq VAR_astralfritz_POST_BATTLE, 0, Charity_Hallway1_EventScript_astralfritz_POST_BATTLE_1
# 18 "data/maps/Charity_Hallway1/scripts.pory"
	goto_if_eq VAR_astralfritz_POST_BATTLE, 1, Charity_Hallway1_EventScript_astralfritz_POST_BATTLE_2
# 19 "data/maps/Charity_Hallway1/scripts.pory"
	release
# 20 "data/maps/Charity_Hallway1/scripts.pory"
	end
# 21 "data/maps/Charity_Hallway1/scripts.pory"

# 22 "data/maps/Charity_Hallway1/scripts.pory"
Charity_Hallway1_EventScript_astralfritz_POST_BATTLE_1::
# 23 "data/maps/Charity_Hallway1/scripts.pory"
	setvar VAR_astralfritz_POST_BATTLE, 1
# 24 "data/maps/Charity_Hallway1/scripts.pory"
	msgbox Charity_Hallway1_Text_astralfritzPostBattle_1, MSGBOX_NPC
# 25 "data/maps/Charity_Hallway1/scripts.pory"
	releaseall
# 26 "data/maps/Charity_Hallway1/scripts.pory"
	end
# 27 "data/maps/Charity_Hallway1/scripts.pory"

# 28 "data/maps/Charity_Hallway1/scripts.pory"
Charity_Hallway1_EventScript_astralfritz_POST_BATTLE_2::
# 29 "data/maps/Charity_Hallway1/scripts.pory"
	setvar VAR_astralfritz_POST_BATTLE, 0
# 30 "data/maps/Charity_Hallway1/scripts.pory"
	msgbox Charity_Hallway1_Text_astralfritzPostBattle_2, MSGBOX_NPC
# 31 "data/maps/Charity_Hallway1/scripts.pory"
	releaseall
# 32 "data/maps/Charity_Hallway1/scripts.pory"
	end
# 33 "data/maps/Charity_Hallway1/scripts.pory"

# 34 "data/maps/Charity_Hallway1/scripts.pory"
Chairty_Hallway1_EventScript_Ruluan::
# 35 "data/maps/Charity_Hallway1/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_Ruluan, Charity_Hallway1_Text_RuluanIntro, Charity_Hallway1_Text_RuluanDefeat
# 36 "data/maps/Charity_Hallway1/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_Ruluan
# 37 "data/maps/Charity_Hallway1/scripts.pory"
	msgbox Charity_Hallway1_Text_RuluanPostBattle, MSGBOX_DEFAULT
# 38 "data/maps/Charity_Hallway1/scripts.pory"
	release
# 39 "data/maps/Charity_Hallway1/scripts.pory"
	end
# 40 "data/maps/Charity_Hallway1/scripts.pory"

# 41 "data/maps/Charity_Hallway1/scripts.pory"
Chairty_Hallway1_EventScript_Nate::
# 42 "data/maps/Charity_Hallway1/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_Nate, Charity_Hallway1_Text_NateIntro, Charity_Hallway1_Text_NateDefeat
# 43 "data/maps/Charity_Hallway1/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_Nate
# 44 "data/maps/Charity_Hallway1/scripts.pory"
	msgbox Charity_Hallway1_Text_NatePostBattle, MSGBOX_DEFAULT
# 45 "data/maps/Charity_Hallway1/scripts.pory"
	release
# 46 "data/maps/Charity_Hallway1/scripts.pory"
	end

Charity_Hallway1_Text_astralfritzIntro::
# 48 "data/maps/Charity_Hallway1/scripts.pory"
	.string "I was told to tell you that some of\n"
	.string "these boxes might have stuff to help\l"
	.string "you!$"

Charity_Hallway1_Text_astralfritzDefeat::
# 52 "data/maps/Charity_Hallway1/scripts.pory"
	.string "Well it seems you've setup a good team!\n"
	.string "Don't forget to talk to people after\l"
	.string "you battle them!$"

Charity_Hallway1_Text_astralfritzPostBattle_1::
# 56 "data/maps/Charity_Hallway1/scripts.pory"
	.string "You have to battle everyone to\n"
	.string "succeed! Think of it as a way to thank\l"
	.string "everyone for donating!$"

Charity_Hallway1_Text_astralfritzPostBattle_2::
# 60 "data/maps/Charity_Hallway1/scripts.pory"
	.string "Don't worry if you lose! There might\n"
	.string "even be a little surprise for you if you\l"
	.string "have to restart. ;D$"

Charity_Hallway1_Text_ToolBox::
# 64 "data/maps/Charity_Hallway1/scripts.pory"
	.string "Just a bunch of tools in here. Nothing\n"
	.string "of use to you.$"

Charity_Hallway1_Text_RuluanIntro::
# 68 "data/maps/Charity_Hallway1/scripts.pory"
	.string "Not really sure what this is but I was\n"
	.string "happy to see the charity go so well!$"

Charity_Hallway1_Text_RuluanDefeat::
# 72 "data/maps/Charity_Hallway1/scripts.pory"
	.string "Thanks for putting together such a\n"
	.string "great event!$"

Charity_Hallway1_Text_RuluanPostBattle::
# 76 "data/maps/Charity_Hallway1/scripts.pory"
	.string "I'm probably just going to keep looking\n"
	.string "at this thing. Good luck!$"

Charity_Hallway1_Text_NateIntro::
# 80 "data/maps/Charity_Hallway1/scripts.pory"
	.string "You have to battle me for some awesome\n"
	.string "pro-gamer strats!$"

Charity_Hallway1_Text_NateDefeat::
# 84 "data/maps/Charity_Hallway1/scripts.pory"
	.string "See only a pro-gamer could beat this\n"
	.string "team!$"

Charity_Hallway1_Text_NatePostBattle::
# 88 "data/maps/Charity_Hallway1/scripts.pory"
	.string "I was told to tell you that some of\n"
	.string "these boxes might have stuff to help\l"
	.string "you!$"
