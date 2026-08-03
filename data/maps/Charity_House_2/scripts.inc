# 1 "data/maps/Charity_House_2/scripts.pory"
Charity_House_2_MapScripts::
# 2 "data/maps/Charity_House_2/scripts.pory"
	.byte 0
# 3 "data/maps/Charity_House_2/scripts.pory"

# 4 "data/maps/Charity_House_2/scripts.pory"
Charity_House_2_EventScript_MelodySera::
# 5 "data/maps/Charity_House_2/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_MelodySera, Charity_House_2_Text_MelodySeraIntro, Charity_House_2_Text_MelodySeraDefeat
# 6 "data/maps/Charity_House_2/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_MelodySera
# 7 "data/maps/Charity_House_2/scripts.pory"
	msgbox Charity_House_2_Text_MelodySeraPostBattle, MSGBOX_DEFAULT
# 8 "data/maps/Charity_House_2/scripts.pory"
	release
# 9 "data/maps/Charity_House_2/scripts.pory"
	end
# 10 "data/maps/Charity_House_2/scripts.pory"

# 11 "data/maps/Charity_House_2/scripts.pory"
Charity_House_2_EventScript_Enomorie::
# 12 "data/maps/Charity_House_2/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_Enomorie, Charity_House_2_Text_EnomorieIntro, Charity_House_2_Text_EnomorieDefeat
# 13 "data/maps/Charity_House_2/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_Enomorie
# 14 "data/maps/Charity_House_2/scripts.pory"
	msgbox Charity_House_2_Text_EnomoriePostBattle, MSGBOX_DEFAULT
# 15 "data/maps/Charity_House_2/scripts.pory"
	release
# 16 "data/maps/Charity_House_2/scripts.pory"
	end
# 17 "data/maps/Charity_House_2/scripts.pory"

# 18 "data/maps/Charity_House_2/scripts.pory"
Charity_House_2_EventScript_Maddy::
# 19 "data/maps/Charity_House_2/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_Maddy, Charity_House_2_Text_MaddyIntro, Charity_House_2_Text_MaddyDefeat
# 20 "data/maps/Charity_House_2/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_Maddy
# 21 "data/maps/Charity_House_2/scripts.pory"
	msgbox Charity_House_2_Text_MaddyPostBattle, MSGBOX_DEFAULT
# 22 "data/maps/Charity_House_2/scripts.pory"
	release
# 23 "data/maps/Charity_House_2/scripts.pory"
	end

Charity_House_2_EventScript_Fridge::
# 26 "data/maps/Charity_House_2/scripts.pory"
	lockall
# 27 "data/maps/Charity_House_2/scripts.pory"
	msgbox Charity_House_2_EventScript_Fridge_Text_0
# 28 "data/maps/Charity_House_2/scripts.pory"
	applymovement Charity_House_2_MelodySera, LookLeft
# 29 "data/maps/Charity_House_2/scripts.pory"
	waitmovement 0
# 30 "data/maps/Charity_House_2/scripts.pory"
	msgbox Charity_House_2_EventScript_Fridge_Text_1
# 31 "data/maps/Charity_House_2/scripts.pory"
	applymovement LOCALID_PLAYER, LookRight
# 32 "data/maps/Charity_House_2/scripts.pory"
	waitmovement 0
# 33 "data/maps/Charity_House_2/scripts.pory"
	msgbox Charity_House_2_EventScript_Fridge_Text_2
# 34 "data/maps/Charity_House_2/scripts.pory"
	applymovement Charity_House_2_MelodySera, LookDown
# 35 "data/maps/Charity_House_2/scripts.pory"
	waitmovement 0
# 36 "data/maps/Charity_House_2/scripts.pory"
	releaseall
	end


# 40 "data/maps/Charity_House_2/scripts.pory"
LookLeft:
# 41 "data/maps/Charity_House_2/scripts.pory"
	walk_in_place_fast_left
	step_end

# 44 "data/maps/Charity_House_2/scripts.pory"
LookDown:
# 45 "data/maps/Charity_House_2/scripts.pory"
	walk_in_place_fast_down
	step_end

# 48 "data/maps/Charity_House_2/scripts.pory"
LookRight:
# 49 "data/maps/Charity_House_2/scripts.pory"
	walk_in_place_fast_right
	step_end

Charity_House_2_EventScript_Fridge_Text_0:
# 27 "data/maps/Charity_House_2/scripts.pory"
	.string "You open the fridge to see a nice cold\n"
	.string "Dr. Pepper.$"

Charity_House_2_EventScript_Fridge_Text_1:
# 30 "data/maps/Charity_House_2/scripts.pory"
	.string "Hey$"

Charity_House_2_EventScript_Fridge_Text_2:
# 33 "data/maps/Charity_House_2/scripts.pory"
	.string "That's not for you. You're supposed to\n"
	.string "battle us.$"

Charity_House_2_Text_MelodySeraIntro::
# 52 "data/maps/Charity_House_2/scripts.pory"
	.string "You already know what you're in for.\n"
	.string "Let's go!$"

Charity_House_2_Text_MelodySeraDefeat::
# 56 "data/maps/Charity_House_2/scripts.pory"
	.string "My SABELEYES!$"

Charity_House_2_Text_MelodySeraPostBattle::
# 60 "data/maps/Charity_House_2/scripts.pory"
	.string "They were really cute though right?$"

Charity_House_2_Text_EnomorieIntro::
# 64 "data/maps/Charity_House_2/scripts.pory"
	.string "My beautiful POKéMON will take you out!$"

Charity_House_2_Text_EnomorieDefeat::
# 68 "data/maps/Charity_House_2/scripts.pory"
	.string "That was an Alolan one too!$"

Charity_House_2_Text_EnomoriePostBattle::
# 72 "data/maps/Charity_House_2/scripts.pory"
	.string "You are always prepped for battle.\n"
	.string "Ready to fight for any cause!$"

Charity_House_2_Text_MaddyIntro::
# 76 "data/maps/Charity_House_2/scripts.pory"
	.string "You did a great job running the charity!$"

Charity_House_2_Text_MaddyDefeat::
# 80 "data/maps/Charity_House_2/scripts.pory"
	.string "This was fun! We should do it again!$"

Charity_House_2_Text_MaddyPostBattle::
# 84 "data/maps/Charity_House_2/scripts.pory"
	.string "Keep being fantastic!$"
