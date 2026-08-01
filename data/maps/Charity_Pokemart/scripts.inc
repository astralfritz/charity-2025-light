# 1 "data/maps/Charity_Pokemart/scripts.pory"
Charity_Pokemart_MapScripts::
# 2 "data/maps/Charity_Pokemart/scripts.pory"
	.byte 0
# 3 "data/maps/Charity_Pokemart/scripts.pory"

# 4 "data/maps/Charity_Pokemart/scripts.pory"
Charity_Pokemart_EventScript_Ozlaine::
# 5 "data/maps/Charity_Pokemart/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_Ozlaine, Charity_Pokemart_Text_OzlaineIntro, Charity_Pokemart_Text_OzlaineDefeat
# 6 "data/maps/Charity_Pokemart/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_Ozlaine
# 7 "data/maps/Charity_Pokemart/scripts.pory"
	msgbox Charity_Pokemart_Text_OzlainePostBattle, MSGBOX_DEFAULT
# 8 "data/maps/Charity_Pokemart/scripts.pory"
	release
# 9 "data/maps/Charity_Pokemart/scripts.pory"
	end
# 10 "data/maps/Charity_Pokemart/scripts.pory"

# 11 "data/maps/Charity_Pokemart/scripts.pory"
Charity_Pokemart_EventScript_ImpGirlee::
# 12 "data/maps/Charity_Pokemart/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_ImpGirlee, Charity_Pokemart_Text_ImpGirleeIntro, Charity_Pokemart_Text_ImpGirleeDefeat
# 13 "data/maps/Charity_Pokemart/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_ImpGirlee
# 14 "data/maps/Charity_Pokemart/scripts.pory"
	msgbox Charity_Pokemart_Text_ImpGirleePostBattle, MSGBOX_DEFAULT
# 15 "data/maps/Charity_Pokemart/scripts.pory"
	release
# 16 "data/maps/Charity_Pokemart/scripts.pory"
	end
# 17 "data/maps/Charity_Pokemart/scripts.pory"

# 18 "data/maps/Charity_Pokemart/scripts.pory"
Charity_Pokemart_EventScript_Lobo::
# 19 "data/maps/Charity_Pokemart/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_Lobo, Charity_Pokemart_Text_LoboIntro, Charity_Pokemart_Text_LoboDefeat
# 20 "data/maps/Charity_Pokemart/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_Lobo
# 21 "data/maps/Charity_Pokemart/scripts.pory"
	msgbox Charity_Pokemart_Text_LoboPostBattle, MSGBOX_DEFAULT
# 22 "data/maps/Charity_Pokemart/scripts.pory"
	release
# 23 "data/maps/Charity_Pokemart/scripts.pory"
	end
# 24 "data/maps/Charity_Pokemart/scripts.pory"

# 25 "data/maps/Charity_Pokemart/scripts.pory"
    .align 2
# 26 "data/maps/Charity_Pokemart/scripts.pory"
Charity_Pokemart:
# 27 "data/maps/Charity_Pokemart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 28 "data/maps/Charity_Pokemart/scripts.pory"
    .2byte ITEM_REVIVE
# 29 "data/maps/Charity_Pokemart/scripts.pory"
    .2byte ITEM_MAX_REVIVE
# 30 "data/maps/Charity_Pokemart/scripts.pory"
    .2byte ITEM_MASTER_BALL
# 31 "data/maps/Charity_Pokemart/scripts.pory"
	pokemartlistend

Charity_Pokemart_EventScript_Prue::
# 34 "data/maps/Charity_Pokemart/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_Prue, Charity_Pokemart_Text_PrueIntro, Charity_Pokemart_Text_PrueDefeat
# 35 "data/maps/Charity_Pokemart/scripts.pory"
	msgbox Charity_Pokemart_Text_PruePostBattle, MSGBOX_DEFAULT
# 36 "data/maps/Charity_Pokemart/scripts.pory"
	pokemart Charity_Pokemart
# 37 "data/maps/Charity_Pokemart/scripts.pory"
	msgbox Charity_Pokemart_Text_Thanks, MSGBOX_DEFAULT
# 38 "data/maps/Charity_Pokemart/scripts.pory"
	release
	end


Charity_Pokemart_Text_OzlaineIntro::
# 42 "data/maps/Charity_Pokemart/scripts.pory"
	.string "I was hoping Potions would be cheap!$"

Charity_Pokemart_Text_OzlaineDefeat::
# 46 "data/maps/Charity_Pokemart/scripts.pory"
	.string "They wouldn't sell me anything!$"

Charity_Pokemart_Text_OzlainePostBattle::
# 50 "data/maps/Charity_Pokemart/scripts.pory"
	.string "I heard they will give you the items for\n"
	.string "free if you beat them.$"

Charity_Pokemart_Text_ImpGirleeIntro::
# 54 "data/maps/Charity_Pokemart/scripts.pory"
	.string "I wonder what kind of stuff they have\n"
	.string "in these fridges?$"

Charity_Pokemart_Text_ImpGirleeDefeat::
# 58 "data/maps/Charity_Pokemart/scripts.pory"
	.string "You think they have Dr. Pepper?$"

Charity_Pokemart_Text_ImpGirleePostBattle::
# 62 "data/maps/Charity_Pokemart/scripts.pory"
	.string "I can't find any Dr. Pepper here!$"

Charity_Pokemart_Text_LoboIntro::
# 66 "data/maps/Charity_Pokemart/scripts.pory"
	.string "You better watch it! I'm ready to take\n"
	.string "you down!$"

Charity_Pokemart_Text_LoboDefeat::
# 70 "data/maps/Charity_Pokemart/scripts.pory"
	.string "I guess I was the one taken down!$"

Charity_Pokemart_Text_LoboPostBattle::
# 74 "data/maps/Charity_Pokemart/scripts.pory"
	.string "Good luck with the rest of this! It's\n"
	.string "been really fun helping out!$"

Charity_Pokemart_Text_PrueIntro::
# 78 "data/maps/Charity_Pokemart/scripts.pory"
	.string "If you want to shop you have to win!$"

Charity_Pokemart_Text_PrueDefeat::
# 82 "data/maps/Charity_Pokemart/scripts.pory"
	.string "Okay okay! You can have the items!$"

Charity_Pokemart_Text_PruePostBattle::
# 86 "data/maps/Charity_Pokemart/scripts.pory"
	.string "Don't worry about the cost today!$"

Charity_Pokemart_Text_Thanks::
# 90 "data/maps/Charity_Pokemart/scripts.pory"
	.string "Thanks again for hosting the charity\n"
	.string "event!$"
