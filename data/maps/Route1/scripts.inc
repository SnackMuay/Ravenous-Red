# 1 "data/maps/Route1/scripts.pory"

# 2 "data/maps/Route1/scripts.pory"

# 3 "data/maps/Route1/scripts.pory"
Route1_MapScripts::
# 4 "data/maps/Route1/scripts.pory"
	.byte 0
# 5 "data/maps/Route1/scripts.pory"

# 6 "data/maps/Route1/scripts.pory"
Route1_EventScript_MartClerk::
# 7 "data/maps/Route1/scripts.pory"
	lock
# 8 "data/maps/Route1/scripts.pory"
	faceplayer
# 9 "data/maps/Route1/scripts.pory"
	goto_if_set FLAG_GOT_POTION_ON_ROUTE_1, Route1_EventScript_AlreadyGotPotion
# 10 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_WorkAtPokeMartTakeSample
# 11 "data/maps/Route1/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 12 "data/maps/Route1/scripts.pory"
	checkitemspace ITEM_POTION
# 13 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 14 "data/maps/Route1/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_POTION
# 15 "data/maps/Route1/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 16 "data/maps/Route1/scripts.pory"
	message Text_ObtainedTheX
# 17 "data/maps/Route1/scripts.pory"
	waitmessage
# 18 "data/maps/Route1/scripts.pory"
	waitfanfare
# 19 "data/maps/Route1/scripts.pory"
	additem ITEM_POTION
# 20 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_PutPotionAway
# 21 "data/maps/Route1/scripts.pory"
	call EventScript_RestorePrevTextColor
# 22 "data/maps/Route1/scripts.pory"
	setflag FLAG_GOT_POTION_ON_ROUTE_1
# 23 "data/maps/Route1/scripts.pory"
	release
# 24 "data/maps/Route1/scripts.pory"
	end
# 25 "data/maps/Route1/scripts.pory"

# 26 "data/maps/Route1/scripts.pory"
Route1_EventScript_AlreadyGotPotion::
# 27 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_ComeSeeUsIfYouNeedPokeBalls
# 28 "data/maps/Route1/scripts.pory"
	release
# 29 "data/maps/Route1/scripts.pory"
	end
# 30 "data/maps/Route1/scripts.pory"

# 31 "data/maps/Route1/scripts.pory"
Route1_EventScript_Boy::
# 32 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_CanJumpFromLedges, MSGBOX_NPC
# 33 "data/maps/Route1/scripts.pory"
	end
# 34 "data/maps/Route1/scripts.pory"

# 35 "data/maps/Route1/scripts.pory"
Route1_EventScript_RouteSign::
# 36 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_RouteSign, MSGBOX_SIGN
# 37 "data/maps/Route1/scripts.pory"
	end

Universal_Eventscript_HeadbuttTree::
# 42 "data/maps/Route1/scripts.pory"
	lockall
# 43 "data/maps/Route1/scripts.pory"
	goto_if_set FLAG_LEARNED_TO_HEADBUTT, Universal_EventScript_HeadbuttEncounter
# 44 "data/maps/Route1/scripts.pory"
	goto_if_unset FLAG_LEARNED_TO_HEADBUTT, Universal_EventScript_CantHeadbutt
# 45 "data/maps/Route1/scripts.pory"
	releaseall
	return


Universal_EventScript_CantHeadbutt::
# 49 "data/maps/Route1/scripts.pory"
	lockall
# 50 "data/maps/Route1/scripts.pory"
	msgbox Universal_EventScript_CantHeadbutt_Text_0
# 51 "data/maps/Route1/scripts.pory"
	releaseall
	return


Universal_EventScript_HeadbuttEncounter::
# 55 "data/maps/Route1/scripts.pory"
	lockall
# 56 "data/maps/Route1/scripts.pory"
	msgbox Universal_EventScript_HeadbuttEncounter_Text_0, MSGBOX_YESNO
# 57 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Universal_EventScript_HeadbuttEncounterProceed
# 58 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, NO, Universal_EventScript_HeadbuttEncounterAbort
# 59 "data/maps/Route1/scripts.pory"
	releaseall
	return


Universal_EventScript_HeadbuttEncounterAbort::
# 63 "data/maps/Route1/scripts.pory"
	lockall
# 64 "data/maps/Route1/scripts.pory"
	msgbox Universal_EventScript_HeadbuttEncounterAbort_Text_0
# 65 "data/maps/Route1/scripts.pory"
	releaseall
	return


Universal_EventScript_HeadbuttEncounterProceed::
# 69 "data/maps/Route1/scripts.pory"
	lockall
# 70 "data/maps/Route1/scripts.pory"
	msgbox Universal_EventScript_HeadbuttEncounterProceed_Text_0
# 71 "data/maps/Route1/scripts.pory"
	waitmessage
# 72 "data/maps/Route1/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, Universal_EventScript_HeadbuttNorthward
# 73 "data/maps/Route1/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, Universal_EventScript_HeadbuttSouthward
# 74 "data/maps/Route1/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, Universal_EventScript_HeadbuttEastward
# 75 "data/maps/Route1/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, Universal_EventScript_HeadbuttWestward
# 76 "data/maps/Route1/scripts.pory"
	releaseall
	return


Universal_EventScript_HeadbuttNorthward::
# 80 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, HeadbuttNorth
# 81 "data/maps/Route1/scripts.pory"
	goto Universal_EventScript_HeadbuttEncounterFinish
# 82 "data/maps/Route1/scripts.pory"
	releaseall
	return


Universal_EventScript_HeadbuttSouthward::
# 86 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, HeadbuttSouth
# 87 "data/maps/Route1/scripts.pory"
	goto Universal_EventScript_HeadbuttEncounterFinish
# 88 "data/maps/Route1/scripts.pory"
	releaseall
	return


Universal_EventScript_HeadbuttEastward::
# 92 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, HeadbuttEast
# 93 "data/maps/Route1/scripts.pory"
	goto Universal_EventScript_HeadbuttEncounterFinish
# 94 "data/maps/Route1/scripts.pory"
	releaseall
	return


Universal_EventScript_HeadbuttWestward::
# 98 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, HeadbuttWest
# 99 "data/maps/Route1/scripts.pory"
	goto Universal_EventScript_HeadbuttEncounterFinish
# 100 "data/maps/Route1/scripts.pory"
	releaseall
	return


Universal_EventScript_HeadbuttEncounterFinish::
# 104 "data/maps/Route1/scripts.pory"
	lockall
# 105 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 106 "data/maps/Route1/scripts.pory"
	msgbox Universal_EventScript_HeadbuttEncounterFinish_Text_0
# 107 "data/maps/Route1/scripts.pory"
	headbutt
# 108 "data/maps/Route1/scripts.pory"
	release
	end


# 112 "data/maps/Route1/scripts.pory"
HeadbuttNorth:
# 113 "data/maps/Route1/scripts.pory"
	jump_in_place_up
	step_end

# 116 "data/maps/Route1/scripts.pory"
HeadbuttSouth:
# 117 "data/maps/Route1/scripts.pory"
	jump_in_place_down
	step_end

# 120 "data/maps/Route1/scripts.pory"
HeadbuttEast:
# 121 "data/maps/Route1/scripts.pory"
	jump_in_place_right
	step_end

# 124 "data/maps/Route1/scripts.pory"
HeadbuttWest:
# 125 "data/maps/Route1/scripts.pory"
	jump_in_place_left
	step_end

Universal_EventScript_CantHeadbutt_Text_0:
# 50 "data/maps/Route1/scripts.pory"
	.string "The bark on this tree looks\n"
	.string "scuffed.$"

Universal_EventScript_HeadbuttEncounter_Text_0:
# 56 "data/maps/Route1/scripts.pory"
	.string "Headbutt the tree?$"

Universal_EventScript_HeadbuttEncounterAbort_Text_0:
# 64 "data/maps/Route1/scripts.pory"
	.string "The tree looks almost... relieved?$"

Universal_EventScript_HeadbuttEncounterProceed_Text_0:
# 70 "data/maps/Route1/scripts.pory"
	.string "{PLAYER} headbutted the tree.$"

Universal_EventScript_HeadbuttEncounterFinish_Text_0:
# 106 "data/maps/Route1/scripts.pory"
	.string "A POKéMON sprang down from the\n"
	.string "tree!$"
