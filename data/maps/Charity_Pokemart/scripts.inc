Charity_Pokemart_MapScripts::
	.byte 0

Charity_Hallway1_EventScript_Ozlaine::
	trainerbattle_single TRAINER_CHARITY_Ozlaine, Charity_Hallway1_Text_OzlaineIntro, Charity_Hallway1_Text_OzlaineDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Ozlaine
	msgbox Charity_Hallway1_Text_OzlainePostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Hallway1_EventScript_ImpGirlee::
	trainerbattle_single TRAINER_CHARITY_ImpGirlee, Charity_Hallway1_Text_ImpGirleeIntro, Charity_Hallway1_Text_ImpGirleeDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_ImpGirlee
	msgbox Charity_Hallway1_Text_ImpGirleePostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Hallway1_EventScript_Lobo::
	trainerbattle_single TRAINER_CHARITY_Lobo, Charity_Hallway1_Text_LoboIntro, Charity_Hallway1_Text_LoboDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Lobo
	msgbox Charity_Hallway1_Text_LoboPostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Hallway1_EventScript_Prue::
	trainerbattle_single TRAINER_CHARITY_Prue, Charity_Hallway1_Text_PrueIntro, Charity_Hallway1_Text_PrueDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Prue
	msgbox Charity_Hallway1_Text_PruePostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Hallway1_Text_OzlaineIntro:
	.string "$"

Charity_Hallway1_Text_OzlaineDefeat:
	.string "$"

Charity_Hallway1_Text_OzlainePostBattle:
	.string "$"

Charity_Hallway1_Text_ImpGirleeIntro:
	.string "$"

Charity_Hallway1_Text_ImpGirleeDefeat:
	.string "$"

Charity_Hallway1_Text_ImpGirleePostBattle:
	.string "$"

Charity_Hallway1_Text_LoboIntro:
	.string "$"

Charity_Hallway1_Text_LoboDefeat:
	.string "$"

Charity_Hallway1_Text_LoboPostBattle:
	.string "$"

Charity_Hallway1_Text_PrueIntro:
	.string "$"

Charity_Hallway1_Text_PrueDefeat:
	.string "$"

Charity_Hallway1_Text_PruePostBattle:
	.string "$"
