Charity_Gym_MapScripts::
	.byte 0

Charity_Hallway1_EventScript_Zelder::
	trainerbattle_single TRAINER_CHARITY_Zelder, Charity_Hallway1_Text_ZelderIntro, Charity_Hallway1_Text_ZelderDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Zelder
	msgbox Charity_Hallway1_Text_ZelderPostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Hallway1_Text_ZelderIntro:
	.string "$"

Charity_Hallway1_Text_ZelderDefeat:
	.string "$"

Charity_Hallway1_Text_ZelderPostBattle:
	.string "$"
