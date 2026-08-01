# 1 "data/maps/Charity_House_1/scripts.pory"
Charity_House_1_MapScripts::
# 2 "data/maps/Charity_House_1/scripts.pory"
	.byte 0
# 3 "data/maps/Charity_House_1/scripts.pory"

# 4 "data/maps/Charity_House_1/scripts.pory"
Charity_House_1_EventScript_bambijoe::
# 5 "data/maps/Charity_House_1/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_bambijoe, Charity_House_1_Text_bambijoeIntro, Charity_House_1_Text_bambijoeDefeat
# 6 "data/maps/Charity_House_1/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_bambijoe
# 7 "data/maps/Charity_House_1/scripts.pory"
	msgbox Charity_House_1_Text_bambijoePostBattle, MSGBOX_DEFAULT
# 8 "data/maps/Charity_House_1/scripts.pory"
	release
# 9 "data/maps/Charity_House_1/scripts.pory"
	end
# 10 "data/maps/Charity_House_1/scripts.pory"

# 11 "data/maps/Charity_House_1/scripts.pory"
Charity_House_1_EventScript_Sean::
# 12 "data/maps/Charity_House_1/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_Sean, Charity_House_1_Text_SeanIntro, Charity_House_1_Text_SeanDefeat
# 13 "data/maps/Charity_House_1/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_Sean
# 14 "data/maps/Charity_House_1/scripts.pory"
	msgbox Charity_House_1_Text_SeanPostBattle, MSGBOX_DEFAULT
# 15 "data/maps/Charity_House_1/scripts.pory"
	release
# 16 "data/maps/Charity_House_1/scripts.pory"
	end

Charity_House_1_Text_bambijoeIntro::
# 18 "data/maps/Charity_House_1/scripts.pory"
	.string "Raising money for animals AND working\n"
	.string "alongside GDQ? What can't you do?$"

Charity_House_1_Text_bambijoeDefeat::
# 22 "data/maps/Charity_House_1/scripts.pory"
	.string "Lose to me apparently.$"

Charity_House_1_Text_bambijoePostBattle::
# 26 "data/maps/Charity_House_1/scripts.pory"
	.string "Thanks for all your support! It means a\n"
	.string "lot to everyone.$"

Charity_House_1_Text_SeanIntro::
# 30 "data/maps/Charity_House_1/scripts.pory"
	.string "I hope you're ready for this!$"

Charity_House_1_Text_SeanDefeat::
# 34 "data/maps/Charity_House_1/scripts.pory"
	.string "Man, that went worse than I thought it\n"
	.string "would.$"

Charity_House_1_Text_SeanPostBattle::
# 38 "data/maps/Charity_House_1/scripts.pory"
	.string "You really are doing amazing stuff!\n"
	.string "Thanks again!$"
