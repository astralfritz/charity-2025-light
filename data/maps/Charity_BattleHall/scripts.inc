Charity_BattleHall_MapScripts::
	.byte 0

Charity_BattleHall_Entrance_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_CHARITY_BATTLE_HALL_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

Charity_BattleHall_Entrance_EventScript_Nurse_2::
	setvar VAR_0x800B, LOCALID_CHARITY_BATTLE_HALL_NURSE_2
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

Charity_BattleHall_EventScript_Fritz::
	trainerbattle_single TRAINER_FRITZ, Charity_BattleHall_Text_FritzIntro, Charity_BattleHall_Text_FritzDefeated
	msgbox Charity_BattleHall_Text_FritzPostBattle, MSGBOX_AUTOCLOSE
	end
