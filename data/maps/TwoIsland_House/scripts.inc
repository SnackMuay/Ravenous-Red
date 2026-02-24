# 1 "data/maps/TwoIsland_House/scripts.pory"

# 2 "data/maps/TwoIsland_House/scripts.pory"

# 3 "data/maps/TwoIsland_House/scripts.pory"
.equ CHECKED_CURRENCY,  FLAG_TEMP_1
# 4 "data/maps/TwoIsland_House/scripts.pory"
.equ HAS_HEART_SCALE,   FLAG_TEMP_2
# 5 "data/maps/TwoIsland_House/scripts.pory"
.equ HAS_STARDUST,      FLAG_TEMP_3
# 6 "data/maps/TwoIsland_House/scripts.pory"
.equ HAS_BOTH_ITEMS,    FLAG_TEMP_4
# 7 "data/maps/TwoIsland_House/scripts.pory"

# 8 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_House_MapScripts::
# 9 "data/maps/TwoIsland_House/scripts.pory"
	.byte 0
# 10 "data/maps/TwoIsland_House/scripts.pory"

# 11 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_House_EventScript_MoveManiac::
# 12 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 13 "data/maps/TwoIsland_House/scripts.pory"
	special QuestLog_CutRecording
# 14 "data/maps/TwoIsland_House/scripts.pory"
	lock
# 15 "data/maps/TwoIsland_House/scripts.pory"
	faceplayer
# 16 "data/maps/TwoIsland_House/scripts.pory"
	clearflag HAS_HEART_SCALE
# 17 "data/maps/TwoIsland_House/scripts.pory"
	clearflag HAS_STARDUST
# 18 "data/maps/TwoIsland_House/scripts.pory"
	clearflag HAS_BOTH_ITEMS
# 19 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_set CHECKED_CURRENCY, TwoIsland_House_EventScript_CheckPlayerHasMushrooms
# 20 "data/maps/TwoIsland_House/scripts.pory"
	msgbox TwoIsland_House_Text_TeachMonMoveForMushroom
# 21 "data/maps/TwoIsland_House/scripts.pory"
	setflag CHECKED_CURRENCY
# 22 "data/maps/TwoIsland_House/scripts.pory"
	goto TwoIsland_House_EventScript_CheckPlayerHasMushrooms
# 23 "data/maps/TwoIsland_House/scripts.pory"
	end
# 24 "data/maps/TwoIsland_House/scripts.pory"

# 25 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_House_EventScript_CheckPlayerHasMushrooms::
# 26 "data/maps/TwoIsland_House/scripts.pory"
	checkitem ITEM_HEART_SCALE, 3
# 27 "data/maps/TwoIsland_House/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, TwoIsland_House_EventScript_SetHasBigMushroom
# 28 "data/maps/TwoIsland_House/scripts.pory"
	checkitem ITEM_STARDUST, 15
# 29 "data/maps/TwoIsland_House/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, TwoIsland_House_EventScript_SetHasTinyMushrooms
# 30 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_set HAS_HEART_SCALE, TwoIsland_House_EventScript_CheckAlsoHasTinyMushrooms
# 31 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_set HAS_STARDUST, TwoIsland_House_EventScript_CheckAlsoHasBigMushroom
# 32 "data/maps/TwoIsland_House/scripts.pory"
	goto TwoIsland_House_EventScript_EndTutorMove
# 33 "data/maps/TwoIsland_House/scripts.pory"
	end
# 34 "data/maps/TwoIsland_House/scripts.pory"

# 35 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_House_EventScript_CheckAlsoHasTinyMushrooms::
# 36 "data/maps/TwoIsland_House/scripts.pory"
	call_if_set HAS_STARDUST, TwoIsland_House_EventScript_SetHasBothMushrooms
# 37 "data/maps/TwoIsland_House/scripts.pory"
	goto TwoIsland_House_EventScript_AskTutorMon
# 38 "data/maps/TwoIsland_House/scripts.pory"
	end
# 39 "data/maps/TwoIsland_House/scripts.pory"

# 40 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_House_EventScript_CheckAlsoHasBigMushroom::
# 41 "data/maps/TwoIsland_House/scripts.pory"
	call_if_set HAS_HEART_SCALE, TwoIsland_House_EventScript_SetHasBothMushrooms
# 42 "data/maps/TwoIsland_House/scripts.pory"
	goto TwoIsland_House_EventScript_AskTutorMon
# 43 "data/maps/TwoIsland_House/scripts.pory"
	end
# 44 "data/maps/TwoIsland_House/scripts.pory"

# 45 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_House_EventScript_AskTutorMon::
# 46 "data/maps/TwoIsland_House/scripts.pory"
	msgbox TwoIsland_House_Text_WantMeToTeachMove, MSGBOX_YESNO
# 47 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_RESULT, NO, TwoIsland_House_EventScript_EndTutorMove
# 48 "data/maps/TwoIsland_House/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor
# 49 "data/maps/TwoIsland_House/scripts.pory"
	end
# 50 "data/maps/TwoIsland_House/scripts.pory"

# 51 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_House_EventScript_ChooseMonToTutor::
# 52 "data/maps/TwoIsland_House/scripts.pory"
	msgbox TwoIsland_House_Text_TutorWhichMon
# 53 "data/maps/TwoIsland_House/scripts.pory"
	special ChooseMonForMoveRelearner
# 54 "data/maps/TwoIsland_House/scripts.pory"
	waitstate
# 55 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, TwoIsland_House_EventScript_EndTutorMove
# 56 "data/maps/TwoIsland_House/scripts.pory"
	special IsSelectedMonEgg
# 57 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TwoIsland_House_EventScript_CantTutorEgg
# 58 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_0x8005, 0, TwoIsland_House_EventScript_NoMoveToTutorMon
# 59 "data/maps/TwoIsland_House/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMoveToTeach
# 60 "data/maps/TwoIsland_House/scripts.pory"
	end
# 61 "data/maps/TwoIsland_House/scripts.pory"

# 62 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_House_EventScript_ChooseMoveToTeach::
# 63 "data/maps/TwoIsland_House/scripts.pory"
	msgbox TwoIsland_House_Text_TeachWhichMove
# 64 "data/maps/TwoIsland_House/scripts.pory"
	special TeachMoveRelearnerMove
# 65 "data/maps/TwoIsland_House/scripts.pory"
	waitstate
# 66 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_0x8004, 0, TwoIsland_House_EventScript_ChooseMonToTutor
# 67 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_set HAS_BOTH_ITEMS, TwoIsland_House_EventScript_ChooseMushroom
# 68 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_set HAS_HEART_SCALE, TwoIsland_House_EventScript_GiveBigMushroom
# 69 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_set HAS_STARDUST, TwoIsland_House_EventScript_GiveTinyMushrooms
# 70 "data/maps/TwoIsland_House/scripts.pory"
	end
# 71 "data/maps/TwoIsland_House/scripts.pory"

# 72 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_House_EventScript_GiveBigMushroom::
# 73 "data/maps/TwoIsland_House/scripts.pory"
	removeitem ITEM_HEART_SCALE, 3
# 74 "data/maps/TwoIsland_House/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 75 "data/maps/TwoIsland_House/scripts.pory"
	msgbox TwoIsland_House_Text_HandedOverOneBigMushroom
# 76 "data/maps/TwoIsland_House/scripts.pory"
	call EventScript_RestorePrevTextColor
# 77 "data/maps/TwoIsland_House/scripts.pory"
	goto TwoIsland_House_EventScript_EndTutorMove
# 78 "data/maps/TwoIsland_House/scripts.pory"
	end
# 79 "data/maps/TwoIsland_House/scripts.pory"

# 80 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_House_EventScript_GiveTinyMushrooms::
# 81 "data/maps/TwoIsland_House/scripts.pory"
	removeitem ITEM_STARDUST, 15
# 82 "data/maps/TwoIsland_House/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 83 "data/maps/TwoIsland_House/scripts.pory"
	msgbox TwoIsland_House_Text_HandedOverTwoTinyMushrooms
# 84 "data/maps/TwoIsland_House/scripts.pory"
	call EventScript_RestorePrevTextColor
# 85 "data/maps/TwoIsland_House/scripts.pory"
	goto TwoIsland_House_EventScript_EndTutorMove
# 86 "data/maps/TwoIsland_House/scripts.pory"
	end
# 87 "data/maps/TwoIsland_House/scripts.pory"

# 88 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_House_EventScript_ChooseMushroom::
# 89 "data/maps/TwoIsland_House/scripts.pory"
	message TwoIsland_House_Text_IllNeedMushroomOrTwo
# 90 "data/maps/TwoIsland_House/scripts.pory"
	waitmessage
# 91 "data/maps/TwoIsland_House/scripts.pory"
	multichoice 0, 0, MULTICHOICE_MUSHROOMS, TRUE
# 92 "data/maps/TwoIsland_House/scripts.pory"
	switch VAR_RESULT
# 93 "data/maps/TwoIsland_House/scripts.pory"
	case 0, TwoIsland_House_EventScript_GiveTinyMushrooms
# 94 "data/maps/TwoIsland_House/scripts.pory"
	case 1, TwoIsland_House_EventScript_GiveBigMushroom
# 95 "data/maps/TwoIsland_House/scripts.pory"
	end
# 96 "data/maps/TwoIsland_House/scripts.pory"

# 97 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_House_EventScript_NoMoveToTutorMon::
# 98 "data/maps/TwoIsland_House/scripts.pory"
	msgbox TwoIsland_House_Text_NoMoveICanTeachThatMon
# 99 "data/maps/TwoIsland_House/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor
# 100 "data/maps/TwoIsland_House/scripts.pory"
	end
# 101 "data/maps/TwoIsland_House/scripts.pory"

# 102 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_House_EventScript_CantTutorEgg::
# 103 "data/maps/TwoIsland_House/scripts.pory"
	msgbox TwoIsland_House_Text_CantTeachAnEgg
# 104 "data/maps/TwoIsland_House/scripts.pory"
	goto TwoIsland_House_EventScript_ChooseMonToTutor
# 105 "data/maps/TwoIsland_House/scripts.pory"
	end
# 106 "data/maps/TwoIsland_House/scripts.pory"

# 107 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_House_EventScript_EndTutorMove::
# 108 "data/maps/TwoIsland_House/scripts.pory"
	msgbox TwoIsland_House_Text_NeedMushroomOrTwoToLearnMove
# 109 "data/maps/TwoIsland_House/scripts.pory"
	release
# 110 "data/maps/TwoIsland_House/scripts.pory"
	end
# 111 "data/maps/TwoIsland_House/scripts.pory"

# 112 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_House_EventScript_SetHasBigMushroom::
# 113 "data/maps/TwoIsland_House/scripts.pory"
	setflag HAS_HEART_SCALE
# 114 "data/maps/TwoIsland_House/scripts.pory"
	return
# 115 "data/maps/TwoIsland_House/scripts.pory"

# 116 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_House_EventScript_SetHasTinyMushrooms::
# 117 "data/maps/TwoIsland_House/scripts.pory"
	setflag HAS_STARDUST
# 118 "data/maps/TwoIsland_House/scripts.pory"
	return
# 119 "data/maps/TwoIsland_House/scripts.pory"

# 120 "data/maps/TwoIsland_House/scripts.pory"
TwoIsland_House_EventScript_SetHasBothMushrooms::
# 121 "data/maps/TwoIsland_House/scripts.pory"
	setflag HAS_BOTH_ITEMS
# 122 "data/maps/TwoIsland_House/scripts.pory"
	return

Universal_EventScript_HypoTrainer::
# 127 "data/maps/TwoIsland_House/scripts.pory"
	lockall
# 128 "data/maps/TwoIsland_House/scripts.pory"
	faceplayer
# 129 "data/maps/TwoIsland_House/scripts.pory"
	msgbox Universal_EventScript_HypoTrainer_Text_0, MSGBOX_YESNO
# 131 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Universal_EventScript_HypoTraining_Decline
# 132 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Universal_EventScript_HypoTraining_Check_Scales
	return


Universal_EventScript_HypoTraining_Decline::
# 136 "data/maps/TwoIsland_House/scripts.pory"
	msgbox Universal_EventScript_HypoTraining_Decline_Text_0
# 137 "data/maps/TwoIsland_House/scripts.pory"
	releaseall
	return


Universal_EventScript_HypoTraining_Check_Scales::
# 141 "data/maps/TwoIsland_House/scripts.pory"
	checkitem ITEM_HEART_SCALE, 2
# 142 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Universal_EventScript_HypoTraining_NoScales
# 143 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Universal_EventScript_HypoTraining_Check
	return


Universal_EventScript_HypoTraining_NoScales::
# 147 "data/maps/TwoIsland_House/scripts.pory"
	msgbox Universal_EventScript_HypoTraining_NoScales_Text_0
# 148 "data/maps/TwoIsland_House/scripts.pory"
	releaseall
	return


Universal_EventScript_HypoTraining_Check::
# 152 "data/maps/TwoIsland_House/scripts.pory"
	special ChoosePartyMon
# 153 "data/maps/TwoIsland_House/scripts.pory"
	waitstate
# 154 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_0x8004, 0xFF, Universal_EventScript_HypoTraining_Decline
# 155 "data/maps/TwoIsland_House/scripts.pory"
	special IsSelectedMonEgg
# 156 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Universal_EventScript_CantTrainEgg
# 157 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Universal_EventScript_HypoTraining_Proceed
# 158 "data/maps/TwoIsland_House/scripts.pory"
	releaseall
	return


Universal_EventScript_HypoTraining_Proceed::
# 162 "data/maps/TwoIsland_House/scripts.pory"
	msgbox Universal_EventScript_HypoTraining_Proceed_Text_0
# 163 "data/maps/TwoIsland_House/scripts.pory"
	waitmessage
# 164 "data/maps/TwoIsland_House/scripts.pory"
	multichoice 19, 0, MULTICHOICE_HYPOTRAIN_STATS, FALSE
# 165 "data/maps/TwoIsland_House/scripts.pory"
	copyvar VAR_0x8005, VAR_RESULT
# 166 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_0x8005, 0, Universal_EventScript_HypoTraining_DoHP
# 167 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_0x8005, 1, Universal_EventScript_HypoTraining_DoAttack
# 168 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_0x8005, 2, Universal_EventScript_HypoTraining_DoDefense
# 169 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_0x8005, 3, Universal_EventScript_HypoTraining_DoSpAtk
# 170 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_0x8005, 4, Universal_EventScript_HypoTraining_DoSpDef
# 171 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_0x8005, 5, Universal_EventScript_HypoTraining_DoSpeed
# 172 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_0x8005, 6, Universal_EventScript_HypoTraining_Decline
# 173 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_0x8005, 127, Universal_EventScript_HypoTraining_Decline
	return


Universal_EventScript_HypoTraining_DoHP::
# 177 "data/maps/TwoIsland_House/scripts.pory"
	setvar VAR_0x8005, 0
# 178 "data/maps/TwoIsland_House/scripts.pory"
	goto Universal_EventScript_HypoTraining_Apply
	return


Universal_EventScript_HypoTraining_DoAttack::
# 182 "data/maps/TwoIsland_House/scripts.pory"
	setvar VAR_0x8005, 1
# 183 "data/maps/TwoIsland_House/scripts.pory"
	goto Universal_EventScript_HypoTraining_Apply
	return


Universal_EventScript_HypoTraining_DoDefense::
# 187 "data/maps/TwoIsland_House/scripts.pory"
	setvar VAR_0x8005, 2
# 188 "data/maps/TwoIsland_House/scripts.pory"
	goto Universal_EventScript_HypoTraining_Apply
	return


Universal_EventScript_HypoTraining_DoSpAtk::
# 192 "data/maps/TwoIsland_House/scripts.pory"
	setvar VAR_0x8005, 3
# 193 "data/maps/TwoIsland_House/scripts.pory"
	goto Universal_EventScript_HypoTraining_Apply
	return


Universal_EventScript_HypoTraining_DoSpDef::
# 197 "data/maps/TwoIsland_House/scripts.pory"
	setvar VAR_0x8005, 4
# 198 "data/maps/TwoIsland_House/scripts.pory"
	goto Universal_EventScript_HypoTraining_Apply
	return


Universal_EventScript_HypoTraining_DoSpeed::
# 202 "data/maps/TwoIsland_House/scripts.pory"
	setvar VAR_0x8005, 5
# 203 "data/maps/TwoIsland_House/scripts.pory"
	goto Universal_EventScript_HypoTraining_Apply
	return


Universal_EventScript_HypoTraining_Apply::
# 207 "data/maps/TwoIsland_House/scripts.pory"
	hypotrain VAR_0x8004, VAR_0x8005
# 208 "data/maps/TwoIsland_House/scripts.pory"
	copyvar VAR_0x8006, VAR_RESULT
# 209 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_0x8006, FALSE, Universal_EventScript_IV_TooHigh
# 210 "data/maps/TwoIsland_House/scripts.pory"
	removeitem ITEM_HEART_SCALE, 2
# 211 "data/maps/TwoIsland_House/scripts.pory"
	msgbox Universal_EventScript_HypoTraining_Apply_Text_0
# 212 "data/maps/TwoIsland_House/scripts.pory"
	releaseall
	return


Universal_EventScript_IV_TooHigh::
# 216 "data/maps/TwoIsland_House/scripts.pory"
	msgbox Universal_EventScript_IV_TooHigh_Text_0, MSGBOX_YESNO
# 219 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Universal_EventScript_HypoTraining_Proceed
# 220 "data/maps/TwoIsland_House/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Universal_EventScript_HypoTraining_Decline
	return


Universal_EventScript_CantTrainEgg::
# 224 "data/maps/TwoIsland_House/scripts.pory"
	msgbox Universal_EventScript_CantTrainEgg_Text_0
# 225 "data/maps/TwoIsland_House/scripts.pory"
	releaseall
	return


Universal_EventScript_HypoTrainer_Text_0:
# 129 "data/maps/TwoIsland_House/scripts.pory"
	.string "I can boost a POKéMON's potential\n"
	.string "in a given stat, provided they are\l"
	.string "struggling to reach it. my effort\l"
	.string "will only cost you 2 HEART SCALES.\l"
	.string "Would you like to boost an IV on\l"
	.string "one of your POKéMON?$"

Universal_EventScript_HypoTraining_Decline_Text_0:
# 136 "data/maps/TwoIsland_House/scripts.pory"
	.string "Come back any time!$"

Universal_EventScript_HypoTraining_NoScales_Text_0:
# 147 "data/maps/TwoIsland_House/scripts.pory"
	.string "You don't have enough HEART SCALES.$"

Universal_EventScript_HypoTraining_Proceed_Text_0:
# 162 "data/maps/TwoIsland_House/scripts.pory"
	.string "Which stat should be boosted?$"

Universal_EventScript_HypoTraining_Apply_Text_0:
# 211 "data/maps/TwoIsland_House/scripts.pory"
	.string "Your POKéMON's stat was boosted!$"

Universal_EventScript_IV_TooHigh_Text_0:
# 216 "data/maps/TwoIsland_House/scripts.pory"
	.string "I'm unable to boost this stat.\n"
	.string "Your POKéMON has already reached\l"
	.string "its potential in this regard. Would\l"
	.string "you like to boost a different\l"
	.string "stat?$"

Universal_EventScript_CantTrainEgg_Text_0:
# 224 "data/maps/TwoIsland_House/scripts.pory"
	.string "I'm unable to boost the IVs of an EGG.$"
