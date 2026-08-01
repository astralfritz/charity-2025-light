# 1 "data/maps/Charity_Hallway1/scripts.pory"
Charity_Hallway1_MapScripts::
# 2 "data/maps/Charity_Hallway1/scripts.pory"
	.byte 0
# 3 "data/maps/Charity_Hallway1/scripts.pory"

# 4 "data/maps/Charity_Hallway1/scripts.pory"
Chairty_Hallway1_EventScript_Ruluan::
# 5 "data/maps/Charity_Hallway1/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_Ruluan, Charity_Hallway1_Text_RuluanIntro, Charity_Hallway1_Text_RuluanDefeat
# 6 "data/maps/Charity_Hallway1/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_Ruluan
# 7 "data/maps/Charity_Hallway1/scripts.pory"
	msgbox Charity_Hallway1_Text_RuluanPostBattle, MSGBOX_DEFAULT
# 8 "data/maps/Charity_Hallway1/scripts.pory"
	release
# 9 "data/maps/Charity_Hallway1/scripts.pory"
	end
# 10 "data/maps/Charity_Hallway1/scripts.pory"

# 11 "data/maps/Charity_Hallway1/scripts.pory"
Chairty_Hallway1_EventScript_Nate::
# 12 "data/maps/Charity_Hallway1/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_Nate, Charity_Hallway1_Text_NateIntro, Charity_Hallway1_Text_NateDefeat
# 13 "data/maps/Charity_Hallway1/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_Nate
# 14 "data/maps/Charity_Hallway1/scripts.pory"
	msgbox Charity_Hallway1_Text_NatePostBattle, MSGBOX_DEFAULT
# 15 "data/maps/Charity_Hallway1/scripts.pory"
	release
# 16 "data/maps/Charity_Hallway1/scripts.pory"
	end

Charity_Hallway1_EventScript_Book::
# 19 "data/maps/Charity_Hallway1/scripts.pory"
	lockall
# 20 "data/maps/Charity_Hallway1/scripts.pory"
	msgbox Charity_Hallway1_Text_Book, MSGBOX_DEFAULT
# 21 "data/maps/Charity_Hallway1/scripts.pory"
	releaseall
	return


Charity_Hallway1_EventScript_astralfritz::
# 26 "data/maps/Charity_Hallway1/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_astralfritz, Charity_Hallway1_Text_astralfritzIntro, Charity_Hallway1_Text_astralfritzDefeat
# 27 "data/maps/Charity_Hallway1/scripts.pory"
	goto_if_eq VAR_astralfritz_POST_BATTLE, 0, Charity_Hallway1_EventScript_astralfritz_POST_BATTLE_1
# 28 "data/maps/Charity_Hallway1/scripts.pory"
	goto_if_eq VAR_astralfritz_POST_BATTLE, 1, Charity_Hallway1_EventScript_astralfritz_POST_BATTLE_2
# 29 "data/maps/Charity_Hallway1/scripts.pory"
	release
	end


Charity_Hallway1_EventScript_astralfritz_POST_BATTLE_1::
# 34 "data/maps/Charity_Hallway1/scripts.pory"
	setvar VAR_astralfritz_POST_BATTLE, 1
# 35 "data/maps/Charity_Hallway1/scripts.pory"
	msgbox Charity_Hallway1_Text_astralfritzPostBattle_1, MSGBOX_NPC
# 36 "data/maps/Charity_Hallway1/scripts.pory"
	releaseall
	end


Charity_Hallway1_EventScript_astralfritz_POST_BATTLE_2::
# 41 "data/maps/Charity_Hallway1/scripts.pory"
	setvar VAR_astralfritz_POST_BATTLE, 0
# 42 "data/maps/Charity_Hallway1/scripts.pory"
	msgbox Charity_Hallway1_Text_astralfritzPostBattle_2, MSGBOX_NPC
# 43 "data/maps/Charity_Hallway1/scripts.pory"
	releaseall
	end


Charity_Hallway1_Text_astralfritzIntro::
# 47 "data/maps/Charity_Hallway1/scripts.pory"
	.string "Welcome to the battles! If you have\n"
	.string "questions then you can talk to me.\l"
	.string "First though, why don't we start with a\l"
	.string "battle of our own?$"

Charity_Hallway1_Text_astralfritzDefeat::
# 51 "data/maps/Charity_Hallway1/scripts.pory"
	.string "Well it seems you've setup a good team!\n"
	.string "Don't forget to talk to people after\l"
	.string "you battle them!$"

Charity_Hallway1_Text_astralfritzPostBattle_1::
# 55 "data/maps/Charity_Hallway1/scripts.pory"
	.string "You have to battle everyone to\n"
	.string "succeed! Think of it as a way to thank\l"
	.string "everyone for donating!$"

Charity_Hallway1_Text_astralfritzPostBattle_2::
# 59 "data/maps/Charity_Hallway1/scripts.pory"
	.string "Don't worry if you lose! There might\n"
	.string "even be a little surprise for you if you\l"
	.string "have to restart. ;D$"

Charity_Hallway1_Text_Book::
# 63 "data/maps/Charity_Hallway1/scripts.pory"
	.string "You find an interesting looking book.\p"
	.string "“There seem to hidden items throughout\n"
	.string "this little village area.”$"

Charity_Hallway1_Text_RuluanIntro::
# 67 "data/maps/Charity_Hallway1/scripts.pory"
	.string "Not really sure what this is but I was\n"
	.string "happy to see the charity go so well!$"

Charity_Hallway1_Text_RuluanDefeat::
# 71 "data/maps/Charity_Hallway1/scripts.pory"
	.string "Thanks for putting together such a\n"
	.string "great event!$"

Charity_Hallway1_Text_RuluanPostBattle::
# 75 "data/maps/Charity_Hallway1/scripts.pory"
	.string "I'm probably just going to keep looking\n"
	.string "at this thing. Good luck!$"

Charity_Hallway1_Text_NateIntro::
# 79 "data/maps/Charity_Hallway1/scripts.pory"
	.string "You have to battle me for some awesome\n"
	.string "pro-gamer strats!$"

Charity_Hallway1_Text_NateDefeat::
# 83 "data/maps/Charity_Hallway1/scripts.pory"
	.string "See only a pro-gamer could beat this\n"
	.string "team!$"

Charity_Hallway1_Text_NatePostBattle::
# 87 "data/maps/Charity_Hallway1/scripts.pory"
	.string "Thanks for setting up the event and\n"
	.string "raising so much money for the Humane\l"
	.string "Society!$"
