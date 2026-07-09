Charity_Hallway1_MapScripts::
	.byte 0

Charity_Hallway1_EventScript_ToolBox::
	lockall
	msgbox Charity_Hallway1_Text_ToolBox, MSGBOX_DEFAULT
	releaseall
	return

Charity_Hallway1_EventScript_WarpToPokecenter::
	warp MAP_CHARITY_POKECENTER, 2, 6
	waitstate

Charity_Hallway1_EventScript_astralfritz::
	trainerbattle_single TRAINER_CHARITY_astralfritz, Charity_Hallway1_Text_astralfritzIntro, Charity_Hallway1_Text_astralfritzDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_astralfritz
	msgbox Charity_Hallway1_Text_astralfritzPostBattle, MSGBOX_DEFAULT
	release
	end

Chairty_Hallway1_EventScript_Ruluan::
	trainerbattle_single TRAINER_CHARITY_Ruluan, Charity_Hallway1_Text_RuluanIntro, Charity_Hallway1_Text_RuluanDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Ruluan
	msgbox Charity_Hallway1_Text_RuluanPostBattle, MSGBOX_DEFAULT
	release
	end

Chairty_Hallway1_EventScript_Nate::
	trainerbattle_single TRAINER_CHARITY_Nate, Charity_Hallway1_Text_NateIntro, Charity_Hallway1_Text_NateDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Nate
	msgbox Charity_Hallway1_Text_NatePostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Hallway1_Text_ToolBox:
	.string "Just a bunch of tools in here.\n"
	.string "Nothing of use to you.$"

Charity_Hallway1_Text_astralfritzIntro:
	.string "$"

Charity_Hallway1_Text_astralfritzDefeat:
	.string "$"

Charity_Hallway1_Text_astralfritzPostBattle:
	.string "$"

Charity_Hallway1_Text_RuluanIntro:
	.string "$"

Charity_Hallway1_Text_RuluanDefeat:
	.string "$"

Charity_Hallway1_Text_RuluanPostBattle:
	.string "$"

Charity_Hallway1_Text_NateIntro:
	.string "$"

Charity_Hallway1_Text_NateDefeat:
	.string "$"

Charity_Hallway1_Text_NatePostBattle:
	.string "$"
