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
	.string "$"

Charity_Hallway1_Text_bambijoeDefeat:
	.string "$"

Charity_Hallway1_Text_bambijoePostBattle:
	.string "$"

Charity_Hallway1_Text_SeanIntro:
	.string "$"

Charity_Hallway1_Text_SeanDefeat:
	.string "$"

Charity_Hallway1_Text_SeanPostBattle:
	.string "$"
