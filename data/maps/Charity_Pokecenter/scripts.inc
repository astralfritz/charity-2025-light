Charity_Pokecenter_MapScripts::
	.byte 0

Charity_Pokecenter_EventScript_WarpToPokecenter::
	warp MAP_Charity_Hallway1, 26, 5
	waitstate

Charity_Pokecenter_EventScript_Hannahhanz::
	trainerbattle_single TRAINER_CHARITY_Hannahhanz, Charity_Pokecenter_Text_HannahhanzIntro, Charity_Pokecenter_Text_HannahhanzDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Hannahhanz
	msgbox Charity_Pokecenter_Text_HannahhanzPostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Pokecenter_EventScript_Chris::
	trainerbattle_single TRAINER_CHARITY_Chris, Charity_Pokecenter_Text_ChrisIntro, Charity_Pokecenter_Text_ChrisDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Chris
	msgbox Charity_Pokecenter_Text_ChrisPostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Pokecenter_EventScript_Sinners::
	trainerbattle_single TRAINER_CHARITY_Sinners, Charity_Pokecenter_Text_SinnersIntro, Charity_Pokecenter_Text_SinnersDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Sinners
	msgbox Charity_Pokecenter_Text_SinnersPostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Pokecenter_EventScript_Tsuki_Rae::
	trainerbattle_single TRAINER_CHARITY_Tsuki_Rae, Charity_Pokecenter_Text_Tsuki_RaeIntro, Charity_Pokecenter_Text_Tsuki_RaeDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Tsuki_Rae
	msgbox Charity_Pokecenter_Text_Tsuki_RaePostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Pokecenter_EventScript_Healer::
	lockall
	faceplayer
	setvar VAR_0x8004, 0
	msgbox gText_WouldYouLikeToRestYourPkmn, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Charity_Pokecenter_EventScript_HealPkmn
	goto_if_eq VAR_RESULT, NO, Charity_Pokecenter_EventScript_DoNotHealPkmn
	end

Charity_Pokecenter_EventScript_HealPkmn::
	special HealPlayerParty
	msgbox Charity_Pokecenter_Text_Healed, MSGBOX_NPC
	applymovement Charity_Pokecenter_Healer, Charity_Pokecenter_Movement_Face_Right
	applymovement LOCALID_PLAYER, Charity_Pokecenter_Movement_Face_Down
	waitmovement 0
	releaseall
	end

Charity_Pokecenter_EventScript_DoNotHealPkmn::
	msgbox Charity_Pokecenter_Text_Goodbye, MSGBOX_NPC
	applymovement Charity_Pokecenter_Healer, Charity_Pokecenter_Movement_Face_Right
	applymovement LOCALID_PLAYER, Charity_Pokecenter_Movement_Face_Down
	waitmovement 0
	releaseall
	end

Charity_Pokecenter_Movement_Face_Right:
	walk_in_place_right
	step_end

Charity_Pokecenter_Movement_Face_Down:
	walk_in_place_down
	step_end

Charity_Pokecenter_Text_Healed:
	.string "Your POKéMON have been healed."
	.string "$"

Charity_Pokecenter_Text_Goodbye:
	.string "Goodbye!"
	.string "$"

Charity_Pokecenter_Text_HannahhanzIntro:
	.string "I thought being here would be a\l"
	.string "fun way to trick you!"
	.string "$"

Charity_Pokecenter_Text_HannahhanzDefeat:
	.string "Were you decieved?"
	.string "$"

Charity_Pokecenter_Text_HannahhanzPostBattle:
	.string "The older lady will heal your\l"
	.string "POKéMON for you!"
	.string "$"

Charity_Pokecenter_Text_ChrisIntro:
	.string "I was hoping they would have\l"
	.string "more books on Dragon types.\n"
	.string "$"

Charity_Pokecenter_Text_ChrisDefeat:
	.string "You beat my Dragon types anyway!"
	.string "$"

Charity_Pokecenter_Text_ChrisPostBattle:
	.string "Thanks for putting together such\l"
	.string "a helpful event! Good luck!"
	.string "$"

Charity_Pokecenter_Text_SinnersIntro:
	.string "This game is really fun!\n"
	.string "You should give it a try later."
	.string "$"

Charity_Pokecenter_Text_SinnersDefeat:
	.string "By later I meant after I'm done."
	.string "$"

Charity_Pokecenter_Text_SinnersPostBattle:
	.string "I'm done playing yet."
	.string "$"

Charity_Pokecenter_Text_Tsuki_RaeIntro:
	.string "I'm so happy I could help with\l"
	.string "your charity event!"
	.string "$"

Charity_Pokecenter_Text_Tsuki_RaeDefeat:
	.string "Thanks for caring about the pets!"
	.string "$"

Charity_Pokecenter_Text_Tsuki_RaePostBattle:
	.string "Make sure to give your cats some\l"
	.string "pets from me!"
	.string "$"
