Chairty_Hallway2_MapScripts::
	.byte 0

Charity_Hallway1_EventScript_CupOhJoe::
	trainerbattle_single TRAINER_CHARITY_CupOhJoe, Charity_Hallway1_Text_CupOhJoeIntro, Charity_Hallway1_Text_CupOhJoeDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_CupOhJoe
	msgbox Charity_Hallway1_Text_CupOhJoePostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Hallway1_EventScript_Gamekxnd::
	trainerbattle_single TRAINER_CHARITY_Gamekxnd, Charity_Hallway1_Text_GamekxndIntro, Charity_Hallway1_Text_GamekxndDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Gamekxnd
	msgbox Charity_Hallway1_Text_GamekxndPostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Hallway1_EventScript_Nicolowlow::
	trainerbattle_single TRAINER_CHARITY_Nicolowlow, Charity_Hallway1_Text_NicolowlowIntro, Charity_Hallway1_Text_NicolowlowDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Nicolowlow
	msgbox Charity_Hallway1_Text_NicolowlowPostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Hallway1_EventScript_digi::
	trainerbattle_single TRAINER_CHARITY_digi, Charity_Hallway1_Text_digiIntro, Charity_Hallway1_Text_digiDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_digi
	msgbox Charity_Hallway1_Text_digiPostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Hallway1_EventScript_AxoloDyl::
	trainerbattle_single TRAINER_CHARITY_AxoloDyl, Charity_Hallway1_Text_AxoloDylIntro, Charity_Hallway1_Text_AxoloDylDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_AxoloDyl
	msgbox Charity_Hallway1_Text_AxoloDylPostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Hallway1_EventScript_Clover::
	trainerbattle_single TRAINER_CHARITY_Clover, Charity_Hallway1_Text_CloverIntro, Charity_Hallway1_Text_CloverDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Clover
	msgbox Charity_Hallway1_Text_CloverPostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Hallway1_Text_CupOhJoeIntro:
	.string "$"

Charity_Hallway1_Text_CupOhJoeDefeat:
	.string "$"

Charity_Hallway1_Text_CupOhJoePostBattle:
	.string "$"

Charity_Hallway1_Text_GamekxndIntro:
	.string "$"

Charity_Hallway1_Text_GamekxndDefeat:
	.string "$"

Charity_Hallway1_Text_GamekxndPostBattle:
	.string "$"

Charity_Hallway1_Text_NicolowlowIntro:
	.string "$"

Charity_Hallway1_Text_NicolowlowDefeat:
	.string "$"

Charity_Hallway1_Text_NicolowlowPostBattle:
	.string "$"

Charity_Hallway1_Text_digiIntro:
	.string "$"

Charity_Hallway1_Text_digiDefeat:
	.string "$"

Charity_Hallway1_Text_digiPostBattle:
	.string "$"

Charity_Hallway1_Text_AxoloDylIntro:
	.string "$"

Charity_Hallway1_Text_AxoloDylDefeat:
	.string "$"

Charity_Hallway1_Text_AxoloDylPostBattle:
	.string "$"

Charity_Hallway1_Text_CloverIntro:
	.string "$"

Charity_Hallway1_Text_CloverDefeat:
	.string "$"

Charity_Hallway1_Text_CloverPostBattle:
	.string "$"
