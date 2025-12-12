# 1 "data/maps/ViridianCity_School/scripts.pory"

# 2 "data/maps/ViridianCity_School/scripts.pory"

# 3 "data/maps/ViridianCity_School/scripts.pory"
ViridianCity_School_MapScripts::
# 4 "data/maps/ViridianCity_School/scripts.pory"
	.byte 0
# 5 "data/maps/ViridianCity_School/scripts.pory"

# 6 "data/maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_Lass::
# 7 "data/maps/ViridianCity_School/scripts.pory"
	lock
# 8 "data/maps/ViridianCity_School/scripts.pory"
	faceplayer
# 9 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_TryingToMemorizeNotes
# 10 "data/maps/ViridianCity_School/scripts.pory"
	closemessage
# 11 "data/maps/ViridianCity_School/scripts.pory"
	applymovement LOCALID_SCHOOL_LASS, Common_Movement_WalkInPlaceFasterUp
# 12 "data/maps/ViridianCity_School/scripts.pory"
	waitmovement 0
# 13 "data/maps/ViridianCity_School/scripts.pory"
	release
# 14 "data/maps/ViridianCity_School/scripts.pory"
	end
# 15 "data/maps/ViridianCity_School/scripts.pory"

# 16 "data/maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_Woman::
# 17 "data/maps/ViridianCity_School/scripts.pory"
	lock
# 18 "data/maps/ViridianCity_School/scripts.pory"
	faceplayer
# 19 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ReadBlackboardCarefully
# 20 "data/maps/ViridianCity_School/scripts.pory"
	closemessage
# 21 "data/maps/ViridianCity_School/scripts.pory"
	applymovement LOCALID_SCHOOL_WOMAN, Common_Movement_FaceOriginalDirection
# 22 "data/maps/ViridianCity_School/scripts.pory"
	waitmovement 0
# 23 "data/maps/ViridianCity_School/scripts.pory"
	release
# 24 "data/maps/ViridianCity_School/scripts.pory"
	end
# 25 "data/maps/ViridianCity_School/scripts.pory"

# 26 "data/maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_Notebook::
# 27 "data/maps/ViridianCity_School/scripts.pory"
	lockall
# 28 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookFirstPage
# 29 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
# 30 "data/maps/ViridianCity_School/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_School_EventScript_StopReadingNotebook
# 31 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookSecondPage
# 32 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
# 33 "data/maps/ViridianCity_School/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_School_EventScript_StopReadingNotebook
# 34 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookThirdPage
# 35 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_TurnThePage, MSGBOX_YESNO
# 36 "data/maps/ViridianCity_School/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_School_EventScript_StopReadingNotebook
# 37 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_NotebookFourthPage
# 38 "data/maps/ViridianCity_School/scripts.pory"
	applymovement LOCALID_SCHOOL_LASS, Common_Movement_WalkInPlaceFasterUp
# 39 "data/maps/ViridianCity_School/scripts.pory"
	waitmovement 0
# 40 "data/maps/ViridianCity_School/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 41 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_HeyDontLookAtMyNotes
# 42 "data/maps/ViridianCity_School/scripts.pory"
	releaseall
# 43 "data/maps/ViridianCity_School/scripts.pory"
	end
# 44 "data/maps/ViridianCity_School/scripts.pory"

# 45 "data/maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_StopReadingNotebook::
# 46 "data/maps/ViridianCity_School/scripts.pory"
	releaseall
# 47 "data/maps/ViridianCity_School/scripts.pory"
	end
# 48 "data/maps/ViridianCity_School/scripts.pory"

# 49 "data/maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_Blackboard::
# 50 "data/maps/ViridianCity_School/scripts.pory"
	lockall
# 51 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_BlackboardListsStatusProblems
# 52 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 53 "data/maps/ViridianCity_School/scripts.pory"
	end
# 54 "data/maps/ViridianCity_School/scripts.pory"

# 55 "data/maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_ChooseBlackboardTopic::
# 56 "data/maps/ViridianCity_School/scripts.pory"
	message ViridianCity_School_Text_ReadWhichTopic
# 57 "data/maps/ViridianCity_School/scripts.pory"
	waitmessage
# 58 "data/maps/ViridianCity_School/scripts.pory"
	multichoicegrid 7, 1, MULTICHOICE_TRAINER_SCHOOL_WHITEBOARD, 3, FALSE
# 59 "data/maps/ViridianCity_School/scripts.pory"
	switch VAR_RESULT
# 60 "data/maps/ViridianCity_School/scripts.pory"
	case 0, ViridianCity_School_EventScript_ReadSleep
# 61 "data/maps/ViridianCity_School/scripts.pory"
	case 1, ViridianCity_School_EventScript_ReadPoison
# 62 "data/maps/ViridianCity_School/scripts.pory"
	case 2, ViridianCity_School_EventScript_ReadParalysis
# 63 "data/maps/ViridianCity_School/scripts.pory"
	case 3, ViridianCity_School_EventScript_ReadBurn
# 64 "data/maps/ViridianCity_School/scripts.pory"
	case 4, ViridianCity_School_EventScript_ReadFreeze
# 65 "data/maps/ViridianCity_School/scripts.pory"
	case 5, ViridianCity_School_EventScript_ExitBlackboard
# 66 "data/maps/ViridianCity_School/scripts.pory"
	case 127, ViridianCity_School_EventScript_ExitBlackboard
# 67 "data/maps/ViridianCity_School/scripts.pory"
	end
# 68 "data/maps/ViridianCity_School/scripts.pory"

# 69 "data/maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_ReadSleep::
# 70 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainSleep
# 71 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 72 "data/maps/ViridianCity_School/scripts.pory"
	end
# 73 "data/maps/ViridianCity_School/scripts.pory"

# 74 "data/maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_ReadBurn::
# 75 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainBurn
# 76 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 77 "data/maps/ViridianCity_School/scripts.pory"
	end
# 78 "data/maps/ViridianCity_School/scripts.pory"

# 79 "data/maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_ReadPoison::
# 80 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainPoison
# 81 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 82 "data/maps/ViridianCity_School/scripts.pory"
	end
# 83 "data/maps/ViridianCity_School/scripts.pory"

# 84 "data/maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_ReadFreeze::
# 85 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainFreeze
# 86 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 87 "data/maps/ViridianCity_School/scripts.pory"
	end
# 88 "data/maps/ViridianCity_School/scripts.pory"

# 89 "data/maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_ReadParalysis::
# 90 "data/maps/ViridianCity_School/scripts.pory"
	msgbox ViridianCity_School_Text_ExplainParalysis
# 91 "data/maps/ViridianCity_School/scripts.pory"
	goto ViridianCity_School_EventScript_ChooseBlackboardTopic
# 92 "data/maps/ViridianCity_School/scripts.pory"
	end
# 93 "data/maps/ViridianCity_School/scripts.pory"

# 94 "data/maps/ViridianCity_School/scripts.pory"
ViridianCity_School_EventScript_ExitBlackboard::
# 95 "data/maps/ViridianCity_School/scripts.pory"
	releaseall
# 96 "data/maps/ViridianCity_School/scripts.pory"
	end

Viridian_Berry_Mart_Lady::
# 101 "data/maps/ViridianCity_School/scripts.pory"
	lock
# 102 "data/maps/ViridianCity_School/scripts.pory"
	faceplayer
# 103 "data/maps/ViridianCity_School/scripts.pory"
	message Viridian_Berry_Mart_Lady_Text_0
# 104 "data/maps/ViridianCity_School/scripts.pory"
	waitmessage
# 105 "data/maps/ViridianCity_School/scripts.pory"
	pokemart Viridian_Berry_Mart
# 106 "data/maps/ViridianCity_School/scripts.pory"
	msgbox Viridian_Berry_Mart_Lady_Text_1
# 107 "data/maps/ViridianCity_School/scripts.pory"
	release
	end


# 111 "data/maps/ViridianCity_School/scripts.pory"

# 112 "data/maps/ViridianCity_School/scripts.pory"

# 113 "data/maps/ViridianCity_School/scripts.pory"
.align 2
# 114 "data/maps/ViridianCity_School/scripts.pory"
Viridian_Berry_Mart::
# 115 "data/maps/ViridianCity_School/scripts.pory"
    .2byte ITEM_CHERI_BERRY
# 116 "data/maps/ViridianCity_School/scripts.pory"
    .2byte ITEM_CHESTO_BERRY
# 117 "data/maps/ViridianCity_School/scripts.pory"
    .2byte ITEM_PECHA_BERRY
# 118 "data/maps/ViridianCity_School/scripts.pory"
    .2byte ITEM_RAWST_BERRY
# 119 "data/maps/ViridianCity_School/scripts.pory"
    .2byte ITEM_ASPEAR_BERRY
# 120 "data/maps/ViridianCity_School/scripts.pory"
    .2byte ITEM_PERSIM_BERRY
# 121 "data/maps/ViridianCity_School/scripts.pory"
    .2byte ITEM_ORAN_BERRY
# 122 "data/maps/ViridianCity_School/scripts.pory"
    .2byte ITEM_NONE
# 123 "data/maps/ViridianCity_School/scripts.pory"
    release
# 124 "data/maps/ViridianCity_School/scripts.pory"
    end

Viridian_Berry_Mart_Lady_Text_0:
# 103 "data/maps/ViridianCity_School/scripts.pory"
	.string "What would you like to buy?$"

Viridian_Berry_Mart_Lady_Text_1:
# 106 "data/maps/ViridianCity_School/scripts.pory"
	.string "Please come again.$"
