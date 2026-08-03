# 1 "data/maps/Charity_House_3/scripts.pory"
Charity_House_3_MapScripts::
# 2 "data/maps/Charity_House_3/scripts.pory"
	.byte 0
# 3 "data/maps/Charity_House_3/scripts.pory"

# 4 "data/maps/Charity_House_3/scripts.pory"
Charity_House_3_EventScript_Pastrieman::
# 5 "data/maps/Charity_House_3/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_Pastrieman, Charity_House_3_Text_PastriemanIntro, Charity_House_3_Text_PastriemanDefeat
# 6 "data/maps/Charity_House_3/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_Pastrieman
# 7 "data/maps/Charity_House_3/scripts.pory"
	goto_if_eq VAR_Pastrieman_POST_BATTLE, 0, Charity_House_3_EventScript_Pastrieman_POST_BATTLE_1
# 8 "data/maps/Charity_House_3/scripts.pory"
	goto_if_eq VAR_Pastrieman_POST_BATTLE, 1, Charity_House_3_EventScript_Pastrieman_POST_BATTLE_2
# 9 "data/maps/Charity_House_3/scripts.pory"
	goto_if_eq VAR_Pastrieman_POST_BATTLE, 2, Charity_House_3_EventScript_Pastrieman_POST_BATTLE_3
# 10 "data/maps/Charity_House_3/scripts.pory"
	release
# 11 "data/maps/Charity_House_3/scripts.pory"
	end
# 12 "data/maps/Charity_House_3/scripts.pory"

# 13 "data/maps/Charity_House_3/scripts.pory"
Charity_House_3_EventScript_Pastrieman_POST_BATTLE_1::
# 14 "data/maps/Charity_House_3/scripts.pory"
	setvar VAR_Pastrieman_POST_BATTLE, 1
# 15 "data/maps/Charity_House_3/scripts.pory"
	msgbox Charity_House_3_Text_PastriemanPostBattle_1, MSGBOX_NPC
# 16 "data/maps/Charity_House_3/scripts.pory"
	releaseall
# 17 "data/maps/Charity_House_3/scripts.pory"
	end
# 18 "data/maps/Charity_House_3/scripts.pory"

# 19 "data/maps/Charity_House_3/scripts.pory"
Charity_House_3_EventScript_Pastrieman_POST_BATTLE_2::
# 20 "data/maps/Charity_House_3/scripts.pory"
	setvar VAR_Pastrieman_POST_BATTLE, 2
# 21 "data/maps/Charity_House_3/scripts.pory"
	msgbox Charity_House_3_Text_PastriemanPostBattle_2, MSGBOX_NPC
# 22 "data/maps/Charity_House_3/scripts.pory"
	releaseall
# 23 "data/maps/Charity_House_3/scripts.pory"
	end
# 24 "data/maps/Charity_House_3/scripts.pory"
	
# 25 "data/maps/Charity_House_3/scripts.pory"
Charity_House_3_EventScript_Pastrieman_POST_BATTLE_3::
# 26 "data/maps/Charity_House_3/scripts.pory"
	setvar VAR_Pastrieman_POST_BATTLE, 0
# 27 "data/maps/Charity_House_3/scripts.pory"
	msgbox Charity_House_3_Text_PastriemanPostBattle_3, MSGBOX_NPC
# 28 "data/maps/Charity_House_3/scripts.pory"
	releaseall
# 29 "data/maps/Charity_House_3/scripts.pory"
	end

Charity_House_3_EventScript_Sink::
# 32 "data/maps/Charity_House_3/scripts.pory"
	lockall
# 33 "data/maps/Charity_House_3/scripts.pory"
	msgbox Charity_House_3_EventScript_Sink_Text_0
# 34 "data/maps/Charity_House_3/scripts.pory"
	releaseall
	end


Charity_House_3_EventScript_GlassCase::
# 39 "data/maps/Charity_House_3/scripts.pory"
	lockall
# 40 "data/maps/Charity_House_3/scripts.pory"
	msgbox Charity_House_3_EventScript_GlassCase_Text_0
# 41 "data/maps/Charity_House_3/scripts.pory"
	goto_if_unset FLAG_HIDDEN_ITEM_CHARITY_HOUSE_3_FULL_RESTORE, Charity_House_3_EventScript_Get_Hidden_Item
# 42 "data/maps/Charity_House_3/scripts.pory"
	msgbox Charity_House_3_EventScript_GlassCase_Text_1
# 43 "data/maps/Charity_House_3/scripts.pory"
	releaseall
	end


Charity_House_3_EventScript_Get_Hidden_Item::
# 48 "data/maps/Charity_House_3/scripts.pory"
	msgbox Charity_House_3_EventScript_Get_Hidden_Item_Text_0
# 49 "data/maps/Charity_House_3/scripts.pory"
	giveitem ITEM_FULL_RESTORE
# 50 "data/maps/Charity_House_3/scripts.pory"
	setflag FLAG_HIDDEN_ITEM_CHARITY_HOUSE_3_FULL_RESTORE
# 51 "data/maps/Charity_House_3/scripts.pory"
	releaseall
	end


Charity_House_3_EventScript_Sink_Text_0:
# 33 "data/maps/Charity_House_3/scripts.pory"
	.string "You get the sense that running the sink\n"
	.string "would be rude.$"

Charity_House_3_EventScript_GlassCase_Text_0:
# 40 "data/maps/Charity_House_3/scripts.pory"
	.string "You see something inside...$"

Charity_House_3_EventScript_GlassCase_Text_1:
# 42 "data/maps/Charity_House_3/scripts.pory"
	.string "Looks kind of like an egg but this isn't\n"
	.string "the best looking glass.$"

Charity_House_3_EventScript_Get_Hidden_Item_Text_0:
# 48 "data/maps/Charity_House_3/scripts.pory"
	.string "You get distracted by the FULL RESTORE\n"
	.string "on the ground!$"

Charity_House_3_Text_PastriemanIntro::
# 55 "data/maps/Charity_House_3/scripts.pory"
	.string "I'm sure you'll be impressed with my\n"
	.string "team.$"

Charity_House_3_Text_PastriemanDefeat::
# 59 "data/maps/Charity_House_3/scripts.pory"
	.string "Aren't you curious how I picked them?$"

Charity_House_3_Text_PastriemanPostBattle_1::
# 63 "data/maps/Charity_House_3/scripts.pory"
	.string "I made a playlist that was the peanuts\n"
	.string "christmas album, zombie from the\l"
	.string "cranberries and a lot of Eminem, it's my\l"
	.string "Trail Mix.$"

Charity_House_3_Text_PastriemanPostBattle_2::
# 67 "data/maps/Charity_House_3/scripts.pory"
	.string "I got the Yakuza and a jacuzzi mixed up\n"
	.string "and now I'm in hot water with the\l"
	.string "Japanese mafia.$"

Charity_House_3_Text_PastriemanPostBattle_3::
# 71 "data/maps/Charity_House_3/scripts.pory"
	.string "Working all day to make custard, I love\n"
	.string "it when a flan comes together.$"
