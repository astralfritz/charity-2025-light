Charity_Gym_MapScripts::
	.byte 0

Charity_Hallway1_EventScript_Light::
	trainerbattle_single TRAINER_CHARITY_Light, Charity_Hallway1_Text_LightIntro, Charity_Hallway1_Text_LightDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Light
	msgbox Charity_Hallway1_Text_LightPostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Hallway1_EventScript_Zelder::
	trainerbattle_single TRAINER_CHARITY_Zelder, Charity_Hallway1_Text_ZelderIntro, Charity_Hallway1_Text_ZelderDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Zelder
	msgbox Charity_Hallway1_Text_ZelderPostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Hallway1_EventScript_simquall::
	trainerbattle_single TRAINER_CHARITY_simquall, Charity_Hallway1_Text_simquallIntro, Charity_Hallway1_Text_simquallDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_simquall
	msgbox Charity_Hallway1_Text_simquallPostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Hallway1_Text_LightIntro:
	.string "$"

Charity_Hallway1_Text_LightDefeat:
	.string "$"

Charity_Hallway1_Text_LightPostBattle:
	.string "$"

Charity_Hallway1_Text_ZelderIntro:
	.string "$"

Charity_Hallway1_Text_ZelderDefeat:
	.string "$"

Charity_Hallway1_Text_ZelderPostBattle:
	.string "$"

Charity_Hallway1_Text_simquallIntro:
	.string "$"

Charity_Hallway1_Text_simquallDefeat:
	.string "$"

Charity_Hallway1_Text_simquallPostBattle:
	.string "$"
