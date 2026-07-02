Charity_Pokecenter_MapScripts::
	.byte 0

Charity_Pokecenter_EventScript_WarpToPokecenter::
	warp MAP_Charity_Hallway1, 26, 5
	waitstate

Charity_Pokecenter_EventScript_Hannahhanz::
	trainerbattle_single TRAINER_CHARITY_Hannahhanz, Charity_Pokecenter_Text_HannahhanzIntro, Charity_Pokecenter_Text_HannahhanzDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Hannahhanz
	msgbox Charity_Pokecenter_Text_HannahhanzPostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Pokecenter_EventScript_Healer::
	lock
	faceplayer
	setvar VAR_0x8004, 0
	msgbox gText_WouldYouLikeToRestYourPkmn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Charity_Pokecenter_EventScript_HealPkmn
	goto_if_eq VAR_RESULT, NO, EventScript_PkmnCenterNurse_Goodbye
	end

Charity_Pokecenter_EventScript_HealPkmn::
	special HealPlayerParty
	return
