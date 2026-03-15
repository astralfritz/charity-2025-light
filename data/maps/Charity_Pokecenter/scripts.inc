Charity_Pokecenter_MapScripts::
	.byte 0

Charity_Pokecenter_EventScript_WarpToPokecenter::
	warp MAP_CHARITY_HALLWAY1, 26, 5
	waitstate

Charity_Pokecenter_EventScript_Hannahhanz::
	trainerbattle_single TRAINER_HANNAHHANZ, Charity_Pokecenter_Text_HannahhanzIntro, Charity_Pokecenter_Text_HannahhanzDefeat
	setvar VAR_0x8004, TRAINER_HANNAHHANZ
	msgbox Charity_Pokecenter_Text_HannahhanzPostBattle, MSGBOX_DEFAULT
	release
	end
