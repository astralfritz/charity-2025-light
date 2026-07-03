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

Charity_Pokecenter_EventScript_Chris::
	trainerbattle_single TRAINER_CHARITY_Chris, Charity_Pokecenter_Text_ChrisIntro, Charity_Pokecenter_Text_ChrisDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Chris
	msgbox Charity_Pokecenter_Text_ChrisPostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Pokecenter_EventScript_Sinners::
	trainerbattle_single TRAINER_CHARITY_Sinners, Charity_Pokecenter_Text_SinnersIntro, Charity_Pokecenter_Text_SinnersDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Sinners
	msgbox Charity_Pokecenter_Text_SinnersPostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Pokecenter_EventScript_Tsuki_Rae::
	trainerbattle_single TRAINER_CHARITY_Tsuki_Rae, Charity_Pokecenter_Text_Tsuki_RaeIntro, Charity_Pokecenter_Text_Tsuki_RaeDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Tsuki_Rae
	msgbox Charity_Pokecenter_Text_Tsuki_RaePostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Pokecenter_EventScript_Healer::
	lockall
	faceplayer
	setvar VAR_0x8004, 0
	msgbox gText_WouldYouLikeToRestYourPkmn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Charity_Pokecenter_EventScript_HealPkmn
	goto_if_eq VAR_RESULT, NO, Charity_Pokecenter_EventScript_DoNotHealPkmn
	end

Charity_Pokecenter_EventScript_HealPkmn::
	special HealPlayerParty
	msgbox Charity_Pokecenter_Text_Healed, MSGBOX_NPC
	applymovement Charity_Pokecenter_Healer, Charity_Pokecenter_Movement_Face_Right
	applymovement LOCALID_PLAYER, Charity_Pokecenter_Movement_Face_Down
	waitmovement 0
	releaseall
	end

Charity_Pokecenter_EventScript_DoNotHealPkmn::
	msgbox Charity_Pokecenter_Text_Goodbye, MSGBOX_NPC
	applymovement Charity_Pokecenter_Healer, Charity_Pokecenter_Movement_Face_Right
	applymovement LOCALID_PLAYER, Charity_Pokecenter_Movement_Face_Down
	waitmovement 0
	releaseall
	end

Charity_Pokecenter_Movement_Face_Right:
	walk_in_place_right
	step_end

Charity_Pokecenter_Movement_Face_Down:
	walk_in_place_down
	step_end

Charity_Pokecenter_Text_Healed:
	.string "Your Pokemon have been healed."
	.string "$"

Charity_Pokecenter_Text_Goodbye:
	.string "Goodbye!"
	.string "$"

Charity_Pokecenter_Text_HannahhanzIntro:
	.string "Get fucked.$"

Charity_Pokecenter_Text_HannahhanzDefeat:
	.string "$"

Charity_Pokecenter_Text_HannahhanzPostBattle:
	.string "$"

Charity_Pokecenter_Text_ChrisIntro:
	.string "Get fucked.$"

Charity_Pokecenter_Text_ChrisDefeat:
	.string "$"

Charity_Pokecenter_Text_ChrisPostBattle:
	.string "$"

Charity_Pokecenter_Text_SinnersIntro:
	.string "Get fucked.$"

Charity_Pokecenter_Text_SinnersDefeat:
	.string "$"

Charity_Pokecenter_Text_SinnersPostBattle:
	.string "$"

Charity_Pokecenter_Text_Tsuki_RaeIntro:
	.string "Get fucked.$"

Charity_Pokecenter_Text_Tsuki_RaeDefeat:
	.string "$"

Charity_Pokecenter_Text_Tsuki_RaePostBattle:
	.string "$"
