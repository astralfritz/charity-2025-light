Charity_House_1_MapScripts::
	.byte 0

Charity_Hallway1_EventScript_bambijoe::
	trainerbattle_single TRAINER_CHARITY_bambijoe, Charity_Hallway1_Text_bambijoeIntro, Charity_Hallway1_Text_bambijoeDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_bambijoe
	msgbox Charity_Hallway1_Text_bambijoePostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Hallway1_EventScript_Sean::
	trainerbattle_single TRAINER_CHARITY_Sean, Charity_Hallway1_Text_SeanIntro, Charity_Hallway1_Text_SeanDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Sean
	msgbox Charity_Hallway1_Text_SeanPostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Hallway1_Text_bambijoeIntro:
	.string "Raising money for animals AND\l"
	.string "working alongside GDQ?\p"
	.string "What can't you do?"
	.string "$"

Charity_Hallway1_Text_bambijoeDefeat:
	.string "Lose to me apparently."
	.string "$"

Charity_Hallway1_Text_bambijoePostBattle:
	.string "Thanks for all your support!\n"
	.string "It means a lot to everyone."
	.string "$"

Charity_Hallway1_Text_SeanIntro:
	.string ""
	.string "$"

Charity_Hallway1_Text_SeanDefeat:
	.string "$"

Charity_Hallway1_Text_SeanPostBattle:
	.string "$"
