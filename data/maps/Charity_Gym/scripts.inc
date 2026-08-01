# 1 "data/maps/Charity_Gym/scripts.pory"
Charity_Gym_MapScripts::
# 2 "data/maps/Charity_Gym/scripts.pory"
	.byte 0
# 3 "data/maps/Charity_Gym/scripts.pory"

# 4 "data/maps/Charity_Gym/scripts.pory"
Charity_Gym_EventScript_Light::
# 5 "data/maps/Charity_Gym/scripts.pory"
	goto_if_le VAR_CHARITY_BATTLES_WON, 27, Charity_Gym_EventScript_Light_ThankEveryone
# 6 "data/maps/Charity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_Light, Charity_Gym_Text_LightIntro, Charity_Gym_Text_LightDefeat
# 7 "data/maps/Charity_Gym/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_Light
# 8 "data/maps/Charity_Gym/scripts.pory"
	msgbox Charity_Gym_Text_LightPostBattle, MSGBOX_DEFAULT
# 9 "data/maps/Charity_Gym/scripts.pory"
	release
# 10 "data/maps/Charity_Gym/scripts.pory"
	end
# 11 "data/maps/Charity_Gym/scripts.pory"

# 12 "data/maps/Charity_Gym/scripts.pory"
Charity_Gym_EventScript_Light_ThankEveryone::
# 13 "data/maps/Charity_Gym/scripts.pory"
	lockall
# 14 "data/maps/Charity_Gym/scripts.pory"
	msgbox Charity_Gym_Text_ThankEveryone, MSGBOX_NPC
# 15 "data/maps/Charity_Gym/scripts.pory"
	special StartNewLoop
# 16 "data/maps/Charity_Gym/scripts.pory"
	release
# 17 "data/maps/Charity_Gym/scripts.pory"
	end
# 18 "data/maps/Charity_Gym/scripts.pory"

# 19 "data/maps/Charity_Gym/scripts.pory"
Charity_Gym_EventScript_Zelder::
# 20 "data/maps/Charity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_Zelder, Charity_Gym_Text_ZelderIntro, Charity_Gym_Text_ZelderDefeat
# 21 "data/maps/Charity_Gym/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_Zelder
# 22 "data/maps/Charity_Gym/scripts.pory"
	msgbox Charity_Gym_Text_ZelderPostBattle, MSGBOX_DEFAULT
# 23 "data/maps/Charity_Gym/scripts.pory"
	release
# 24 "data/maps/Charity_Gym/scripts.pory"
	end
# 25 "data/maps/Charity_Gym/scripts.pory"

# 26 "data/maps/Charity_Gym/scripts.pory"
Charity_Gym_EventScript_simquall::
# 27 "data/maps/Charity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_simquall, Charity_Gym_Text_simquallIntro, Charity_Gym_Text_simquallDefeat
# 28 "data/maps/Charity_Gym/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_simquall
# 29 "data/maps/Charity_Gym/scripts.pory"
	msgbox Charity_Gym_Text_simquallPostBattle, MSGBOX_DEFAULT
# 30 "data/maps/Charity_Gym/scripts.pory"
	release
# 31 "data/maps/Charity_Gym/scripts.pory"
	end

Charity_Gym_Text_LightIntro::
# 33 "data/maps/Charity_Gym/scripts.pory"
	.string "Thanks for thanking everyone. It meant\n"
	.string "a lot to have all the support from\l"
	.string "everyone for this. Now let's get this\l"
	.string "battle started!$"

Charity_Gym_Text_LightDefeat::
# 37 "data/maps/Charity_Gym/scripts.pory"
	.string "Congrats on winning all the battles!$"

Charity_Gym_Text_LightPostBattle::
# 41 "data/maps/Charity_Gym/scripts.pory"
	.string "You did it! Thanks for playing and let's\n"
	.string "do this again soon!$"

Charity_Gym_Text_ThankEveryone::
# 45 "data/maps/Charity_Gym/scripts.pory"
	.string "You need to thank everyone before you\n"
	.string "can fight me! Come back when you've\l"
	.string "beaten everyone!$"

Charity_Gym_Text_ZelderIntro::
# 49 "data/maps/Charity_Gym/scripts.pory"
	.string "To fight the leader you'll have to get\n"
	.string "through me!$"

Charity_Gym_Text_ZelderDefeat::
# 53 "data/maps/Charity_Gym/scripts.pory"
	.string "You better have liked my team though!$"

Charity_Gym_Text_ZelderPostBattle::
# 57 "data/maps/Charity_Gym/scripts.pory"
	.string "This was a good time! Hopefully we can\n"
	.string "do another one!$"

Charity_Gym_Text_simquallIntro::
# 61 "data/maps/Charity_Gym/scripts.pory"
	.string "You're getting close to the end! Have\n"
	.string "you figured out the ending yet?$"

Charity_Gym_Text_simquallDefeat::
# 65 "data/maps/Charity_Gym/scripts.pory"
	.string "The leader awaits!$"

Charity_Gym_Text_simquallPostBattle::
# 69 "data/maps/Charity_Gym/scripts.pory"
	.string "So glad the event went how it did! Did\n"
	.string "you see how scary my TYPHLOSION was?$"
