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

Charity_Hallway1_EventScript_Fritz::
	trainerbattle_single TRAINER_FRITZ, Charity_Hallway1_Text_FritzIntro, Charity_Hallway1_Text_FritzDefeat
	setvar VAR_0x8004, TRAINER_FRITZ
	msgbox Charity_Hallway1_Text_FritzPostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Hallway1_Text_ToolBox:
	.string "Just a bunch of tools in here.\n"
	.string "Nothing of use to you.$"
