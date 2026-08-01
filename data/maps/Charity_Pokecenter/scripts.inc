# 1 "data/maps/Charity_Pokecenter/scripts.pory"
Charity_Pokecenter_MapScripts::
# 2 "data/maps/Charity_Pokecenter/scripts.pory"
	.byte 0
# 3 "data/maps/Charity_Pokecenter/scripts.pory"

# 4 "data/maps/Charity_Pokecenter/scripts.pory"
Charity_Pokecenter_EventScript_Hannahhanz::
# 5 "data/maps/Charity_Pokecenter/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_Hannahhanz, Charity_Pokecenter_Text_HannahhanzIntro, Charity_Pokecenter_Text_HannahhanzDefeat
# 6 "data/maps/Charity_Pokecenter/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_Hannahhanz
# 7 "data/maps/Charity_Pokecenter/scripts.pory"
	msgbox Charity_Pokecenter_Text_HannahhanzPostBattle, MSGBOX_DEFAULT
# 8 "data/maps/Charity_Pokecenter/scripts.pory"
	release
# 9 "data/maps/Charity_Pokecenter/scripts.pory"
	end
# 10 "data/maps/Charity_Pokecenter/scripts.pory"

# 11 "data/maps/Charity_Pokecenter/scripts.pory"
Charity_Pokecenter_EventScript_Chris::
# 12 "data/maps/Charity_Pokecenter/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_Chris, Charity_Pokecenter_Text_ChrisIntro, Charity_Pokecenter_Text_ChrisDefeat
# 13 "data/maps/Charity_Pokecenter/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_Chris
# 14 "data/maps/Charity_Pokecenter/scripts.pory"
	msgbox Charity_Pokecenter_Text_ChrisPostBattle, MSGBOX_DEFAULT
# 15 "data/maps/Charity_Pokecenter/scripts.pory"
	release
# 16 "data/maps/Charity_Pokecenter/scripts.pory"
	end
# 17 "data/maps/Charity_Pokecenter/scripts.pory"

# 18 "data/maps/Charity_Pokecenter/scripts.pory"
Charity_Pokecenter_EventScript_Sinners::
# 19 "data/maps/Charity_Pokecenter/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_Sinners, Charity_Pokecenter_Text_SinnersIntro, Charity_Pokecenter_Text_SinnersDefeat
# 20 "data/maps/Charity_Pokecenter/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_Sinners
# 21 "data/maps/Charity_Pokecenter/scripts.pory"
	msgbox Charity_Pokecenter_Text_SinnersPostBattle, MSGBOX_DEFAULT
# 22 "data/maps/Charity_Pokecenter/scripts.pory"
	release
# 23 "data/maps/Charity_Pokecenter/scripts.pory"
	end
# 24 "data/maps/Charity_Pokecenter/scripts.pory"

# 25 "data/maps/Charity_Pokecenter/scripts.pory"
Charity_Pokecenter_EventScript_Tsuki_Rae::
# 26 "data/maps/Charity_Pokecenter/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_Tsuki_Rae, Charity_Pokecenter_Text_Tsuki_RaeIntro, Charity_Pokecenter_Text_Tsuki_RaeDefeat
# 27 "data/maps/Charity_Pokecenter/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_Tsuki_Rae
# 28 "data/maps/Charity_Pokecenter/scripts.pory"
	msgbox Charity_Pokecenter_Text_Tsuki_RaePostBattle, MSGBOX_DEFAULT
# 29 "data/maps/Charity_Pokecenter/scripts.pory"
	release
# 30 "data/maps/Charity_Pokecenter/scripts.pory"
	end
# 31 "data/maps/Charity_Pokecenter/scripts.pory"

# 32 "data/maps/Charity_Pokecenter/scripts.pory"
Charity_Pokecenter_EventScript_Healer::
# 33 "data/maps/Charity_Pokecenter/scripts.pory"
	lockall
# 34 "data/maps/Charity_Pokecenter/scripts.pory"
	faceplayer
# 35 "data/maps/Charity_Pokecenter/scripts.pory"
	setvar VAR_0x8004, 0
# 36 "data/maps/Charity_Pokecenter/scripts.pory"
	msgbox gText_WouldYouLikeToRestYourPkmn, MSGBOX_YESNO
# 37 "data/maps/Charity_Pokecenter/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Charity_Pokecenter_EventScript_HealPkmn
# 38 "data/maps/Charity_Pokecenter/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Charity_Pokecenter_EventScript_DoNotHealPkmn
# 39 "data/maps/Charity_Pokecenter/scripts.pory"
	end
# 40 "data/maps/Charity_Pokecenter/scripts.pory"

# 41 "data/maps/Charity_Pokecenter/scripts.pory"
Charity_Pokecenter_EventScript_HealPkmn::
# 42 "data/maps/Charity_Pokecenter/scripts.pory"
	special HealPlayerParty
# 43 "data/maps/Charity_Pokecenter/scripts.pory"
	msgbox Charity_Pokecenter_Text_Healed, MSGBOX_NPC
# 44 "data/maps/Charity_Pokecenter/scripts.pory"
	applymovement Charity_Pokecenter_Healer, Charity_Pokecenter_Movement_Face_Right
# 45 "data/maps/Charity_Pokecenter/scripts.pory"
	applymovement LOCALID_PLAYER, Charity_Pokecenter_Movement_Face_Down
# 46 "data/maps/Charity_Pokecenter/scripts.pory"
	waitmovement 0
# 47 "data/maps/Charity_Pokecenter/scripts.pory"
	releaseall
# 48 "data/maps/Charity_Pokecenter/scripts.pory"
	end
# 49 "data/maps/Charity_Pokecenter/scripts.pory"

# 50 "data/maps/Charity_Pokecenter/scripts.pory"
Charity_Pokecenter_EventScript_DoNotHealPkmn::
# 51 "data/maps/Charity_Pokecenter/scripts.pory"
	msgbox Charity_Pokecenter_Text_Goodbye, MSGBOX_NPC
# 52 "data/maps/Charity_Pokecenter/scripts.pory"
	applymovement Charity_Pokecenter_Healer, Charity_Pokecenter_Movement_Face_Right
# 53 "data/maps/Charity_Pokecenter/scripts.pory"
	applymovement LOCALID_PLAYER, Charity_Pokecenter_Movement_Face_Down
# 54 "data/maps/Charity_Pokecenter/scripts.pory"
	waitmovement 0
# 55 "data/maps/Charity_Pokecenter/scripts.pory"
	releaseall
# 56 "data/maps/Charity_Pokecenter/scripts.pory"
	end
# 57 "data/maps/Charity_Pokecenter/scripts.pory"

# 58 "data/maps/Charity_Pokecenter/scripts.pory"
Charity_Pokecenter_Movement_Face_Right:
# 59 "data/maps/Charity_Pokecenter/scripts.pory"
	walk_in_place_right
# 60 "data/maps/Charity_Pokecenter/scripts.pory"
	step_end
# 61 "data/maps/Charity_Pokecenter/scripts.pory"

# 62 "data/maps/Charity_Pokecenter/scripts.pory"
Charity_Pokecenter_Movement_Face_Down:
# 63 "data/maps/Charity_Pokecenter/scripts.pory"
	walk_in_place_down
# 64 "data/maps/Charity_Pokecenter/scripts.pory"
	step_end

Charity_Pokecenter_EventScript_Book::
# 67 "data/maps/Charity_Pokecenter/scripts.pory"
	lockall
# 68 "data/maps/Charity_Pokecenter/scripts.pory"
	msgbox Charity_Pokecenter_Text_Book, MSGBOX_DEFAULT
# 69 "data/maps/Charity_Pokecenter/scripts.pory"
	releaseall
	return


Charity_Pokecenter_Text_Healed::
# 73 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "Your POKéMON have been healed.$"

Charity_Pokecenter_Text_Goodbye::
# 77 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "Goodbye!$"

Charity_Pokecenter_Text_HannahhanzIntro::
# 81 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "I thought being here would be a fun way\n"
	.string "to trick you!$"

Charity_Pokecenter_Text_HannahhanzDefeat::
# 85 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "Were you decieved?$"

Charity_Pokecenter_Text_HannahhanzPostBattle::
# 89 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "The older lady will heal your POKéMON\n"
	.string "for you!$"

Charity_Pokecenter_Text_ChrisIntro::
# 93 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "I was hoping they would have more books\n"
	.string "on Dragon types.$"

Charity_Pokecenter_Text_ChrisDefeat::
# 97 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "You beat my Dragon types anyway!$"

Charity_Pokecenter_Text_ChrisPostBattle::
# 101 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "Thanks for putting together such a\n"
	.string "helpful event! Good luck!$"

Charity_Pokecenter_Text_SinnersIntro::
# 105 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "This game is really fun! You should give\n"
	.string "it a try later.$"

Charity_Pokecenter_Text_SinnersDefeat::
# 109 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "By later I meant after I'm done.$"

Charity_Pokecenter_Text_SinnersPostBattle::
# 113 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "I'm not done playing yet.$"

Charity_Pokecenter_Text_Tsuki_RaeIntro::
# 117 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "I'm so happy I could help with your\n"
	.string "charity event!$"

Charity_Pokecenter_Text_Tsuki_RaeDefeat::
# 121 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "Thanks for caring about the animals!$"

Charity_Pokecenter_Text_Tsuki_RaePostBattle::
# 125 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "Make sure to give your cats some pets\n"
	.string "from me!$"

Charity_Pokecenter_Text_Book::
# 129 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "You find a book about how to draw\n"
	.string "dragons. Seems like an odd choice for a\l"
	.string "POKéCENTER though.$"
