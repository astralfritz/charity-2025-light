Charity_House_2_MapScripts::
	.byte 0

Charity_Hallway1_EventScript_MelodySera::
	trainerbattle_single TRAINER_CHARITY_MelodySera, Charity_Hallway1_Text_MelodySeraIntro, Charity_Hallway1_Text_MelodySeraDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_MelodySera
	msgbox Charity_Hallway1_Text_MelodySeraPostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Hallway1_EventScript_Enomorie::
	trainerbattle_single TRAINER_CHARITY_Enomorie, Charity_Hallway1_Text_EnomorieIntro, Charity_Hallway1_Text_EnomorieDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Enomorie
	msgbox Charity_Hallway1_Text_EnomoriePostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Hallway1_EventScript_Maddy::
	trainerbattle_single TRAINER_CHARITY_Maddy, Charity_Hallway1_Text_MaddyIntro, Charity_Hallway1_Text_MaddyDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Maddy
	msgbox Charity_Hallway1_Text_MaddyPostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Hallway1_Text_MelodySeraIntro:
	.string "$"

Charity_Hallway1_Text_MelodySeraDefeat:
	.string "$"

Charity_Hallway1_Text_MelodySeraPostBattle:
	.string "$"

Charity_Hallway1_Text_EnomorieIntro:
	.string "$"

Charity_Hallway1_Text_EnomorieDefeat:
	.string "$"

Charity_Hallway1_Text_EnomoriePostBattle:
	.string "$"

Charity_Hallway1_Text_MaddyIntro:
	.string "$"

Charity_Hallway1_Text_MaddyDefeat:
	.string "$"

Charity_Hallway1_Text_MaddyPostBattle:
	.string "$"
