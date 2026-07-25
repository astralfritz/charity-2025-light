Charity_House_3_MapScripts::
	.byte 0

Charity_Hallway1_EventScript_Pastrieman::
	trainerbattle_single TRAINER_CHARITY_Pastrieman, Charity_Hallway1_Text_PastriemanIntro, Charity_Hallway1_Text_PastriemanDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Pastrieman
	goto_if_eq VAR_Pastrieman_POST_BATTLE, 0, Charity_Hallway1_EventScript_Pastrieman_POST_BATTLE_1
	goto_if_eq VAR_Pastrieman_POST_BATTLE, 1, Charity_Hallway1_EventScript_Pastrieman_POST_BATTLE_2
	goto_if_eq VAR_Pastrieman_POST_BATTLE, 2, Charity_Hallway1_EventScript_Pastrieman_POST_BATTLE_3
	release
	end

Charity_Hallway1_EventScript_Pastrieman_POST_BATTLE_1::
	setvar VAR_Pastrieman_POST_BATTLE, 1
	msgbox Charity_Hallway1_Text_PastriemanPostBattle_1, MSGBOX_NPC
	releaseall
	end

Charity_Hallway1_EventScript_Pastrieman_POST_BATTLE_2::
	setvar VAR_Pastrieman_POST_BATTLE, 2
	msgbox Charity_Hallway1_Text_PastriemanPostBattle_2, MSGBOX_NPC
	releaseall
	end
	
Charity_Hallway1_EventScript_Pastrieman_POST_BATTLE_3::
	setvar VAR_Pastrieman_POST_BATTLE, 0
	msgbox Charity_Hallway1_Text_PastriemanPostBattle_3, MSGBOX_NPC
	releaseall
	end

Charity_Hallway1_Text_PastriemanIntro:
	.string "I'm sure you'll be impressed\n"
	.string "with my team."
	.string "$"

Charity_Hallway1_Text_PastriemanDefeat:
	.string "Aren't you curious how I picked\n"
	.string "them?"
	.string "$"

Charity_Hallway1_Text_PastriemanPostBattle_1:
	.string "I made a playlist that was the\n"
	.string "peanuts christmas album, zombie\p"
	.string "from the cranberries and a lot of\n"
	.string "Eminem, it's my Trail Mix."
	.string "$"

Charity_Hallway1_Text_PastriemanPostBattle_2:
	.string "I got the Yakuza and a jacuzzi mixed\n"
	.string "up and now I'm in hot water with the\p"
	.string "Japanese mafia."
	.string "$"

Charity_Hallway1_Text_PastriemanPostBattle_3:
	.string "Working all day to make custard,\n"
	.string "I love it when a flan comes together."
	.string "$"
