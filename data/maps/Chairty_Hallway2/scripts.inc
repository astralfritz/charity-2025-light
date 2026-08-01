# 1 "data/maps/Chairty_Hallway2/scripts.pory"
Chairty_Hallway2_MapScripts::
# 2 "data/maps/Chairty_Hallway2/scripts.pory"
	.byte 0
# 3 "data/maps/Chairty_Hallway2/scripts.pory"

# 4 "data/maps/Chairty_Hallway2/scripts.pory"
Charity_Hallway1_EventScript_CupOhJoe::
# 5 "data/maps/Chairty_Hallway2/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_CupOhJoe, Charity_Hallway1_Text_CupOhJoeIntro, Charity_Hallway1_Text_CupOhJoeDefeat
# 6 "data/maps/Chairty_Hallway2/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_CupOhJoe
# 7 "data/maps/Chairty_Hallway2/scripts.pory"
	msgbox Charity_Hallway1_Text_CupOhJoePostBattle, MSGBOX_DEFAULT
# 8 "data/maps/Chairty_Hallway2/scripts.pory"
	release
# 9 "data/maps/Chairty_Hallway2/scripts.pory"
	end
# 10 "data/maps/Chairty_Hallway2/scripts.pory"

# 11 "data/maps/Chairty_Hallway2/scripts.pory"
Charity_Hallway1_EventScript_Gamekxnd::
# 12 "data/maps/Chairty_Hallway2/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_Gamekxnd, Charity_Hallway1_Text_GamekxndIntro, Charity_Hallway1_Text_GamekxndDefeat
# 13 "data/maps/Chairty_Hallway2/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_Gamekxnd
# 14 "data/maps/Chairty_Hallway2/scripts.pory"
	msgbox Charity_Hallway1_Text_GamekxndPostBattle, MSGBOX_DEFAULT
# 15 "data/maps/Chairty_Hallway2/scripts.pory"
	release
# 16 "data/maps/Chairty_Hallway2/scripts.pory"
	end
# 17 "data/maps/Chairty_Hallway2/scripts.pory"

# 18 "data/maps/Chairty_Hallway2/scripts.pory"
Charity_Hallway1_EventScript_Nicolowlow::
# 19 "data/maps/Chairty_Hallway2/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_Nicolowlow, Charity_Hallway1_Text_NicolowlowIntro, Charity_Hallway1_Text_NicolowlowDefeat
# 20 "data/maps/Chairty_Hallway2/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_Nicolowlow
# 21 "data/maps/Chairty_Hallway2/scripts.pory"
	msgbox Charity_Hallway1_Text_NicolowlowPostBattle, MSGBOX_DEFAULT
# 22 "data/maps/Chairty_Hallway2/scripts.pory"
	release
# 23 "data/maps/Chairty_Hallway2/scripts.pory"
	end
# 24 "data/maps/Chairty_Hallway2/scripts.pory"

# 25 "data/maps/Chairty_Hallway2/scripts.pory"
Charity_Hallway1_EventScript_digi::
# 26 "data/maps/Chairty_Hallway2/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_digi, Charity_Hallway1_Text_digiIntro, Charity_Hallway1_Text_digiDefeat
# 27 "data/maps/Chairty_Hallway2/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_digi
# 28 "data/maps/Chairty_Hallway2/scripts.pory"
	msgbox Charity_Hallway1_Text_digiPostBattle, MSGBOX_DEFAULT
# 29 "data/maps/Chairty_Hallway2/scripts.pory"
	release
# 30 "data/maps/Chairty_Hallway2/scripts.pory"
	end
# 31 "data/maps/Chairty_Hallway2/scripts.pory"

# 32 "data/maps/Chairty_Hallway2/scripts.pory"
Charity_Hallway1_EventScript_AxoloDyl::
# 33 "data/maps/Chairty_Hallway2/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_AxoloDyl, Charity_Hallway1_Text_AxoloDylIntro, Charity_Hallway1_Text_AxoloDylDefeat
# 34 "data/maps/Chairty_Hallway2/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_AxoloDyl
# 35 "data/maps/Chairty_Hallway2/scripts.pory"
	goto_if_eq VAR_AxoloDyl_POST_BATTLE, 0, Charity_Hallway1_EventScript_AxoloDyl_POST_BATTLE_1
# 36 "data/maps/Chairty_Hallway2/scripts.pory"
	goto_if_eq VAR_AxoloDyl_POST_BATTLE, 1, Charity_Hallway1_EventScript_AxoloDyl_POST_BATTLE_2
# 37 "data/maps/Chairty_Hallway2/scripts.pory"
	release
# 38 "data/maps/Chairty_Hallway2/scripts.pory"
	end
# 39 "data/maps/Chairty_Hallway2/scripts.pory"

# 40 "data/maps/Chairty_Hallway2/scripts.pory"
Charity_Hallway1_EventScript_AxoloDyl_POST_BATTLE_1::
# 41 "data/maps/Chairty_Hallway2/scripts.pory"
	setvar VAR_AxoloDyl_POST_BATTLE, 1
# 42 "data/maps/Chairty_Hallway2/scripts.pory"
	msgbox Charity_Hallway1_Text_AxoloDylPostBattle_1, MSGBOX_NPC
# 43 "data/maps/Chairty_Hallway2/scripts.pory"
	releaseall
# 44 "data/maps/Chairty_Hallway2/scripts.pory"
	end
# 45 "data/maps/Chairty_Hallway2/scripts.pory"

# 46 "data/maps/Chairty_Hallway2/scripts.pory"
Charity_Hallway1_EventScript_AxoloDyl_POST_BATTLE_2::
# 47 "data/maps/Chairty_Hallway2/scripts.pory"
	msgbox Charity_Hallway1_Text_AxoloDylPostBattle_2, MSGBOX_NPC
# 48 "data/maps/Chairty_Hallway2/scripts.pory"
	releaseall
# 49 "data/maps/Chairty_Hallway2/scripts.pory"
	end
# 50 "data/maps/Chairty_Hallway2/scripts.pory"

# 51 "data/maps/Chairty_Hallway2/scripts.pory"
Charity_Hallway1_EventScript_Clover::
# 52 "data/maps/Chairty_Hallway2/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_Clover, Charity_Hallway1_Text_CloverIntro, Charity_Hallway1_Text_CloverDefeat
# 53 "data/maps/Chairty_Hallway2/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_Clover
# 54 "data/maps/Chairty_Hallway2/scripts.pory"
	goto_if_eq VAR_Clover_POST_BATTLE, 0, Charity_Hallway1_EventScript_Clover_POST_BATTLE_1
# 55 "data/maps/Chairty_Hallway2/scripts.pory"
	goto_if_eq VAR_Clover_POST_BATTLE, 1, Charity_Hallway1_EventScript_Clover_POST_BATTLE_2
# 56 "data/maps/Chairty_Hallway2/scripts.pory"
	goto_if_eq VAR_Clover_POST_BATTLE, 2, Charity_Hallway1_EventScript_Clover_POST_BATTLE_3
# 57 "data/maps/Chairty_Hallway2/scripts.pory"
	release
# 58 "data/maps/Chairty_Hallway2/scripts.pory"
	end
# 59 "data/maps/Chairty_Hallway2/scripts.pory"

# 60 "data/maps/Chairty_Hallway2/scripts.pory"
Charity_Hallway1_EventScript_Clover_POST_BATTLE_1::
# 61 "data/maps/Chairty_Hallway2/scripts.pory"
	setvar VAR_Clover_POST_BATTLE, 1
# 62 "data/maps/Chairty_Hallway2/scripts.pory"
	msgbox Charity_Hallway1_Text_CloverPostBattle_1, MSGBOX_NPC
# 63 "data/maps/Chairty_Hallway2/scripts.pory"
	releaseall
# 64 "data/maps/Chairty_Hallway2/scripts.pory"
	end
# 65 "data/maps/Chairty_Hallway2/scripts.pory"

# 66 "data/maps/Chairty_Hallway2/scripts.pory"
Charity_Hallway1_EventScript_Clover_POST_BATTLE_2::
# 67 "data/maps/Chairty_Hallway2/scripts.pory"
	setvar VAR_Clover_POST_BATTLE, 2
# 68 "data/maps/Chairty_Hallway2/scripts.pory"
	msgbox Charity_Hallway1_Text_CloverPostBattle_2, MSGBOX_NPC
# 69 "data/maps/Chairty_Hallway2/scripts.pory"
	releaseall
# 70 "data/maps/Chairty_Hallway2/scripts.pory"
	end
# 71 "data/maps/Chairty_Hallway2/scripts.pory"

# 72 "data/maps/Chairty_Hallway2/scripts.pory"
Charity_Hallway1_EventScript_Clover_POST_BATTLE_3::
# 73 "data/maps/Chairty_Hallway2/scripts.pory"
	msgbox Charity_Hallway1_Text_CloverPostBattle_3, MSGBOX_NPC
# 74 "data/maps/Chairty_Hallway2/scripts.pory"
	releaseall
# 75 "data/maps/Chairty_Hallway2/scripts.pory"
	end
# 76 "data/maps/Chairty_Hallway2/scripts.pory"

# 77 "data/maps/Chairty_Hallway2/scripts.pory"
Charity_Hallway1_EventScript_Chibi::
# 78 "data/maps/Chairty_Hallway2/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_Chibi, Charity_Hallway1_Text_ChibiIntro, Charity_Hallway1_Text_ChibiDefeat
# 79 "data/maps/Chairty_Hallway2/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_Chibi
# 80 "data/maps/Chairty_Hallway2/scripts.pory"
	msgbox Charity_Hallway1_Text_ChibiPostBattle, MSGBOX_DEFAULT
# 81 "data/maps/Chairty_Hallway2/scripts.pory"
	release
# 82 "data/maps/Chairty_Hallway2/scripts.pory"
	end
# 83 "data/maps/Chairty_Hallway2/scripts.pory"

# 84 "data/maps/Chairty_Hallway2/scripts.pory"
Charity_Hallway1_EventScript_Gwen::
# 85 "data/maps/Chairty_Hallway2/scripts.pory"
	trainerbattle_single TRAINER_CHARITY_Gwen, Charity_Hallway1_Text_GwenIntro, Charity_Hallway1_Text_GwenDefeat
# 86 "data/maps/Chairty_Hallway2/scripts.pory"
	setvar VAR_0x8004, TRAINER_CHARITY_Gwen
# 87 "data/maps/Chairty_Hallway2/scripts.pory"
	msgbox Charity_Hallway1_Text_GwenPostBattle, MSGBOX_DEFAULT
# 88 "data/maps/Chairty_Hallway2/scripts.pory"
	release
# 89 "data/maps/Chairty_Hallway2/scripts.pory"
	end

Charity_Hallway1_Text_CupOhJoeIntro::
# 91 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "How cute do you think I can make\n"
	.string "Pikachu look?$"

Charity_Hallway1_Text_CupOhJoeDefeat::
# 95 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "Glad I've been able to help you with the\n"
	.string "events! Keep up the good work!$"

Charity_Hallway1_Text_CupOhJoePostBattle::
# 99 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "Pikachu really is a cutie.$"

Charity_Hallway1_Text_GamekxndIntro::
# 103 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "You always find a way to help out.$"

Charity_Hallway1_Text_GamekxndDefeat::
# 107 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "Can't wait to see what you do next!$"

Charity_Hallway1_Text_GamekxndPostBattle::
# 111 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "Make sure you thank everyone!$"

Charity_Hallway1_Text_NicolowlowIntro::
# 115 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "What do you think of my URSALUNA?$"

Charity_Hallway1_Text_NicolowlowDefeat::
# 119 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "Now I have to run to the POKéCENTER!$"

Charity_Hallway1_Text_NicolowlowPostBattle::
# 123 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "Thanks for raising money for the\n"
	.string "Humane Society!$"

Charity_Hallway1_Text_digiIntro::
# 127 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "Do you like my VICTREEBEL?$"

Charity_Hallway1_Text_digiDefeat::
# 131 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "They were helping me pick berries. They\n"
	.string "kept eating them though.$"

Charity_Hallway1_Text_digiPostBattle::
# 135 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "I was hoping to have a berry for the\n"
	.string "battle but they kept eating them all.$"

Charity_Hallway1_Text_AxoloDylIntro::
# 139 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "Don't forget to take some time for\n"
	.string "yourself. Relaxing by the water is nice.$"

Charity_Hallway1_Text_AxoloDylDefeat::
# 143 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "Now I'm going to need chill out!$"

Charity_Hallway1_Text_AxoloDylPostBattle_1::
# 147 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "Good luck!$"

Charity_Hallway1_Text_AxoloDylPostBattle_2::
# 151 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "... ... ... ...$"

Charity_Hallway1_Text_CloverIntro::
# 155 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "Moving is a great way to keep the\n"
	.string "energy flowing!$"

Charity_Hallway1_Text_CloverDefeat::
# 159 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "This won't keep me down for long!$"

Charity_Hallway1_Text_CloverPostBattle_1::
# 163 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "Gotta be quicker than that!$"

Charity_Hallway1_Text_CloverPostBattle_2::
# 167 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "Almost got me!$"

Charity_Hallway1_Text_CloverPostBattle_3::
# 171 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "Awww! You caught me.$"

Charity_Hallway1_Text_ChibiIntro::
# 175 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "Bird POKéMON are pretty great!$"

Charity_Hallway1_Text_ChibiDefeat::
# 179 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "Ah my parents bird POKéMON!$"

Charity_Hallway1_Text_ChibiPostBattle::
# 183 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "Just kidding. These were all mine. I\n"
	.string "guess I need to catch more though!$"

Charity_Hallway1_Text_GwenIntro::
# 187 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "Don't think I'll take it easy on just\n"
	.string "because you did a charity event!$"

Charity_Hallway1_Text_GwenDefeat::
# 191 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "I didn't even hold back.$"

Charity_Hallway1_Text_GwenPostBattle::
# 195 "data/maps/Chairty_Hallway2/scripts.pory"
	.string "You really are good at this! Thanks\n"
	.string "again for the event!$"
