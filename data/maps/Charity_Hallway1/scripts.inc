Charity_Hallway1_MapScripts::
	.byte 0

Charity_Hallway1_EventScript_ToolBox::
	lockall
	msgbox Charity_Hallway1_Text_ToolBox, MSGBOX_DEFAULT
	releaseall
	return

Charity_Hallway1_EventScript_WarpToPokecenter::
	warp MAP_CHARITY_POKECENTER, 2, 6
	waitstate

Charity_Hallway1_EventScript_astralfritz::
	trainerbattle_single TRAINER_CHARITY_astralfritz, Charity_Hallway1_Text_astralfritzIntro, Charity_Hallway1_Text_astralfritzDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_astralfritz
	goto_if_eq VAR_astralfritz_POST_BATTLE, 0, Charity_Hallway1_EventScript_astralfritz_POST_BATTLE_1
	goto_if_eq VAR_astralfritz_POST_BATTLE, 1, Charity_Hallway1_EventScript_astralfritz_POST_BATTLE_2
	release
	end

Charity_Hallway1_EventScript_astralfritz_POST_BATTLE_1::
	setvar VAR_astralfritz_POST_BATTLE, 1
	msgbox Charity_Hallway1_Text_astralfritzPostBattle_1, MSGBOX_NPC
	releaseall
	end

Charity_Hallway1_EventScript_astralfritz_POST_BATTLE_2::
	setvar VAR_astralfritz_POST_BATTLE, 0
	msgbox Charity_Hallway1_Text_astralfritzPostBattle_2, MSGBOX_NPC
	releaseall
	end

Chairty_Hallway1_EventScript_Ruluan::
	trainerbattle_single TRAINER_CHARITY_Ruluan, Charity_Hallway1_Text_RuluanIntro, Charity_Hallway1_Text_RuluanDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Ruluan
	msgbox Charity_Hallway1_Text_RuluanPostBattle, MSGBOX_DEFAULT
	release
	end

Chairty_Hallway1_EventScript_Nate::
	trainerbattle_single TRAINER_CHARITY_Nate, Charity_Hallway1_Text_NateIntro, Charity_Hallway1_Text_NateDefeat
	setvar VAR_0x8004, TRAINER_CHARITY_Nate
	msgbox Charity_Hallway1_Text_NatePostBattle, MSGBOX_DEFAULT
	release
	end

Charity_Hallway1_Text_ToolBox:
	.string "Just a bunch of tools in here.\n"
	.string "Nothing of use to you.$"

Charity_Hallway1_Text_astralfritzIntro:
	.string "Welcome to the battles!\n"
	.string "I put myself first to help guide you\l"
	.string "through. Why don't we start with a\p"
	.string "battle of our own?"
	.string "$"

Charity_Hallway1_Text_astralfritzDefeat:
	.string "Well it seems you've setup a good team!\l"
	.string "Don't forget to talk to people after\p"
	.string "you battle them!"
	.string "$"

Charity_Hallway1_Text_astralfritzPostBattle_1:
	.string "You have to battle everyone to succeed!\n"
	.string "Think of it as a way to thank everyone\l"
	.string "for donating!"
	.string "$"

Charity_Hallway1_Text_astralfritzPostBattle_2:
	.string "Don't worry if you lose!\n"
	.string "There might even be a little surprise\l"
	.string "for you if you have to restart. ;D"
	.string "$"

Charity_Hallway1_Text_RuluanIntro:
	.string "Not really sure what this is\l"
	.string "but I was happy to see the charity\p"
	.string "go so well!"
	.string "$"

Charity_Hallway1_Text_RuluanDefeat:
	.string "Thanks for putting together such a\l"
	.string "great event!"
	.string "$"

Charity_Hallway1_Text_RuluanPostBattle:
	.string "I'm probably just going to keep\l"
	.string "looking at this thing. Good luck!"
	.string "$"

Charity_Hallway1_Text_NateIntro:
	.string "You have to battle me for\l"
	.string "some awesome pro-gamer strats!"
	.string "$"

Charity_Hallway1_Text_NateDefeat:
	.string "See only a pro-gamer could\l"
	.string "beat this team!"
	.string "$"

Charity_Hallway1_Text_NatePostBattle:
	.string "I was told to tell you that\l"
	.string "some of these boxes might\p"
	.string "have stuff to help you!"
	.string "$"
