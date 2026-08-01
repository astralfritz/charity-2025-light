# 1 "data/maps/Charity_Pokecenter/scripts.pory"
Charity_Pokecenter_MapScripts::
# 2 "data/maps/Charity_Pokecenter/scripts.pory"
	.byte 0
# 3 "data/maps/Charity_Pokecenter/scripts.pory"

# 4 "data/maps/Charity_Pokecenter/scripts.pory"
Charity_Pokecenter_EventScript_WarpToPokecenter::
# 5 "data/maps/Charity_Pokecenter/scripts.pory"
	warp MAP_Charity_Hallway1, 26, 5
# 6 "data/maps/Charity_Pokecenter/scripts.pory"
	waitstate
# 7 "data/maps/Charity_Pokecenter/scripts.pory"

# 8 "data/maps/Charity_Pokecenter/scripts.pory"
Charity_Pokecenter_EventScript_Hannahhanz::
# 9 "data/maps/Charity_Pokecenter/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_Hannahhanz, Charity_Pokecenter_Text_HannahhanzIntro, Charity_Pokecenter_Text_HannahhanzDefeat
# 10 "data/maps/Charity_Pokecenter/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_Hannahhanz
# 11 "data/maps/Charity_Pokecenter/scripts.pory"
	msgbox Charity_Pokecenter_Text_HannahhanzPostBattle, MSGBOX_DEFAULT
# 12 "data/maps/Charity_Pokecenter/scripts.pory"
	release
# 13 "data/maps/Charity_Pokecenter/scripts.pory"
	end
# 14 "data/maps/Charity_Pokecenter/scripts.pory"

# 15 "data/maps/Charity_Pokecenter/scripts.pory"
Charity_Pokecenter_EventScript_Chris::
# 16 "data/maps/Charity_Pokecenter/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_Chris, Charity_Pokecenter_Text_ChrisIntro, Charity_Pokecenter_Text_ChrisDefeat
# 17 "data/maps/Charity_Pokecenter/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_Chris
# 18 "data/maps/Charity_Pokecenter/scripts.pory"
	msgbox Charity_Pokecenter_Text_ChrisPostBattle, MSGBOX_DEFAULT
# 19 "data/maps/Charity_Pokecenter/scripts.pory"
	release
# 20 "data/maps/Charity_Pokecenter/scripts.pory"
	end
# 21 "data/maps/Charity_Pokecenter/scripts.pory"

# 22 "data/maps/Charity_Pokecenter/scripts.pory"
Charity_Pokecenter_EventScript_Sinners::
# 23 "data/maps/Charity_Pokecenter/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_Sinners, Charity_Pokecenter_Text_SinnersIntro, Charity_Pokecenter_Text_SinnersDefeat
# 24 "data/maps/Charity_Pokecenter/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_Sinners
# 25 "data/maps/Charity_Pokecenter/scripts.pory"
	msgbox Charity_Pokecenter_Text_SinnersPostBattle, MSGBOX_DEFAULT
# 26 "data/maps/Charity_Pokecenter/scripts.pory"
	release
# 27 "data/maps/Charity_Pokecenter/scripts.pory"
	end
# 28 "data/maps/Charity_Pokecenter/scripts.pory"

# 29 "data/maps/Charity_Pokecenter/scripts.pory"
Charity_Pokecenter_EventScript_Tsuki_Rae::
# 30 "data/maps/Charity_Pokecenter/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_Tsuki_Rae, Charity_Pokecenter_Text_Tsuki_RaeIntro, Charity_Pokecenter_Text_Tsuki_RaeDefeat
# 31 "data/maps/Charity_Pokecenter/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_Tsuki_Rae
# 32 "data/maps/Charity_Pokecenter/scripts.pory"
	msgbox Charity_Pokecenter_Text_Tsuki_RaePostBattle, MSGBOX_DEFAULT
# 33 "data/maps/Charity_Pokecenter/scripts.pory"
	release
# 34 "data/maps/Charity_Pokecenter/scripts.pory"
	end
# 35 "data/maps/Charity_Pokecenter/scripts.pory"

# 36 "data/maps/Charity_Pokecenter/scripts.pory"
Charity_Pokecenter_EventScript_Healer::
# 37 "data/maps/Charity_Pokecenter/scripts.pory"
	lockall
# 38 "data/maps/Charity_Pokecenter/scripts.pory"
	faceplayer
# 39 "data/maps/Charity_Pokecenter/scripts.pory"
	setvar VAR_0x8004, 0
# 40 "data/maps/Charity_Pokecenter/scripts.pory"
	msgbox gText_WouldYouLikeToRestYourPkmn, MSGBOX_YESNO
# 41 "data/maps/Charity_Pokecenter/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Charity_Pokecenter_EventScript_HealPkmn
# 42 "data/maps/Charity_Pokecenter/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Charity_Pokecenter_EventScript_DoNotHealPkmn
# 43 "data/maps/Charity_Pokecenter/scripts.pory"
	end
# 44 "data/maps/Charity_Pokecenter/scripts.pory"

# 45 "data/maps/Charity_Pokecenter/scripts.pory"
Charity_Pokecenter_EventScript_HealPkmn::
# 46 "data/maps/Charity_Pokecenter/scripts.pory"
	special HealPlayerParty
# 47 "data/maps/Charity_Pokecenter/scripts.pory"
	msgbox Charity_Pokecenter_Text_Healed, MSGBOX_NPC
# 48 "data/maps/Charity_Pokecenter/scripts.pory"
	applymovement Charity_Pokecenter_Healer, Charity_Pokecenter_Movement_Face_Right
# 49 "data/maps/Charity_Pokecenter/scripts.pory"
	applymovement LOCALID_PLAYER, Charity_Pokecenter_Movement_Face_Down
# 50 "data/maps/Charity_Pokecenter/scripts.pory"
	waitmovement 0
# 51 "data/maps/Charity_Pokecenter/scripts.pory"
	releaseall
# 52 "data/maps/Charity_Pokecenter/scripts.pory"
	end
# 53 "data/maps/Charity_Pokecenter/scripts.pory"

# 54 "data/maps/Charity_Pokecenter/scripts.pory"
Charity_Pokecenter_EventScript_DoNotHealPkmn::
# 55 "data/maps/Charity_Pokecenter/scripts.pory"
	msgbox Charity_Pokecenter_Text_Goodbye, MSGBOX_NPC
# 56 "data/maps/Charity_Pokecenter/scripts.pory"
	applymovement Charity_Pokecenter_Healer, Charity_Pokecenter_Movement_Face_Right
# 57 "data/maps/Charity_Pokecenter/scripts.pory"
	applymovement LOCALID_PLAYER, Charity_Pokecenter_Movement_Face_Down
# 58 "data/maps/Charity_Pokecenter/scripts.pory"
	waitmovement 0
# 59 "data/maps/Charity_Pokecenter/scripts.pory"
	releaseall
# 60 "data/maps/Charity_Pokecenter/scripts.pory"
	end
# 61 "data/maps/Charity_Pokecenter/scripts.pory"

# 62 "data/maps/Charity_Pokecenter/scripts.pory"
Charity_Pokecenter_Movement_Face_Right:
# 63 "data/maps/Charity_Pokecenter/scripts.pory"
	walk_in_place_right
# 64 "data/maps/Charity_Pokecenter/scripts.pory"
	step_end
# 65 "data/maps/Charity_Pokecenter/scripts.pory"

# 66 "data/maps/Charity_Pokecenter/scripts.pory"
Charity_Pokecenter_Movement_Face_Down:
# 67 "data/maps/Charity_Pokecenter/scripts.pory"
	walk_in_place_down
# 68 "data/maps/Charity_Pokecenter/scripts.pory"
	step_end

Charity_Pokecenter_Text_Healed::
# 70 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "Your POKéMON have been healed.$"

Charity_Pokecenter_Text_Goodbye::
# 74 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "Goodbye!$"

Charity_Pokecenter_Text_HannahhanzIntro::
# 78 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "I thought being here would be a fun way\n"
	.string "to trick you!$"

Charity_Pokecenter_Text_HannahhanzDefeat::
# 82 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "Were you decieved?$"

Charity_Pokecenter_Text_HannahhanzPostBattle::
# 86 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "The older lady will heal your POKéMON\n"
	.string "for you!$"

Charity_Pokecenter_Text_ChrisIntro::
# 90 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "I was hoping they would have more books\n"
	.string "on Dragon types.$"

Charity_Pokecenter_Text_ChrisDefeat::
# 94 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "You beat my Dragon types anyway!$"

Charity_Pokecenter_Text_ChrisPostBattle::
# 98 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "Thanks for putting together such a\n"
	.string "helpful event! Good luck!$"

Charity_Pokecenter_Text_SinnersIntro::
# 102 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "This game is really fun! You should give\n"
	.string "it a try later.$"

Charity_Pokecenter_Text_SinnersDefeat::
# 106 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "By later I meant after I'm done.$"

Charity_Pokecenter_Text_SinnersPostBattle::
# 110 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "I'm not done playing yet.$"

Charity_Pokecenter_Text_Tsuki_RaeIntro::
# 114 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "I'm so happy I could help with your\n"
	.string "charity event!$"

Charity_Pokecenter_Text_Tsuki_RaeDefeat::
# 118 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "Thanks for caring about the animals!$"

Charity_Pokecenter_Text_Tsuki_RaePostBattle::
# 122 "data/maps/Charity_Pokecenter/scripts.pory"
	.string "Make sure to give your cats some pets\n"
	.string "from me!$"
