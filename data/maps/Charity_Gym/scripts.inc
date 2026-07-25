Charity_Gym_MapScripts::
	.byte 0

Charity_Gym_EventScript_Light::
	goto_if_le VAR_CHARITY_BATTLES_WON, 27, Charity_Gym_EventScript_Light_ThankEveryone
	trainerbattle_single TRAINER_CHARITY_Light, Charity_Gym_Text_LightIntro, Charity_Gym_Text_LightDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Light
	msgbox Charity_Gym_Text_LightPostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Gym_EventScript_Light_ThankEveryone::
	lockall
	msgbox Charity_Gym_Text_ThankEveryone, MSGBOX_NPC
	special StartNewLoop
	release
	end

Charity_Gym_EventScript_Zelder::
	trainerbattle_single TRAINER_CHARITY_Zelder, Charity_Gym_Text_ZelderIntro, Charity_Gym_Text_ZelderDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Zelder
	msgbox Charity_Gym_Text_ZelderPostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Gym_EventScript_simquall::
	trainerbattle_single TRAINER_CHARITY_simquall, Charity_Gym_Text_simquallIntro, Charity_Gym_Text_simquallDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_simquall
	msgbox Charity_Gym_Text_simquallPostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Gym_Text_LightIntro:
	.string "$"

Charity_Gym_Text_LightDefeat:
	.string "$"

Charity_Gym_Text_LightPostBattle:
	.string "$"

Charity_Gym_Text_ThankEveryone:
	.string "You need to thank everyone before\n"
	.string "you can fight me!"
	.string "$"

Charity_Gym_Text_ZelderIntro:
	.string "$"

Charity_Gym_Text_ZelderDefeat:
	.string "$"

Charity_Gym_Text_ZelderPostBattle:
	.string "$"

Charity_Gym_Text_simquallIntro:
	.string "$"

Charity_Gym_Text_simquallDefeat:
	.string "$"

Charity_Gym_Text_simquallPostBattle:
	.string "$"
