# 1 "data/maps/CeruleanCity/scripts.pory"

# 2 "data/maps/CeruleanCity/scripts.pory"

# 3 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_MapScripts::
# 4 "data/maps/CeruleanCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_OnTransition
# 5 "data/maps/CeruleanCity/scripts.pory"
	.byte 0
# 6 "data/maps/CeruleanCity/scripts.pory"

# 7 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_OnTransition::
# 8 "data/maps/CeruleanCity/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CERULEAN_CITY
# 9 "data/maps/CeruleanCity/scripts.pory"
	call_if_unset FLAG_BADGE02_GET, CeruleanCity_EventScript_BlockExits
# 10 "data/maps/CeruleanCity/scripts.pory"
	call_if_unset FLAG_GOT_TM28_FROM_ROCKET, CeruleanCity_EventScript_BlockTree
# 11 "data/maps/CeruleanCity/scripts.pory"
	end
# 12 "data/maps/CeruleanCity/scripts.pory"

# 13 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_BlockExits::
# 14 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_POLICEMAN, 30, 12
# 15 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_SLOWBRO, 26, 31
# 16 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_LASS, 27, 31
# 17 "data/maps/CeruleanCity/scripts.pory"
	return
# 18 "data/maps/CeruleanCity/scripts.pory"

# 19 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_BlockTree::
# 20 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_SLOWBRO, 26, 31
# 21 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_LASS, 27, 31
# 22 "data/maps/CeruleanCity/scripts.pory"
	return
# 23 "data/maps/CeruleanCity/scripts.pory"

# 24 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalTriggerLeft::
# 25 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 26 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 27 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_Rival
# 28 "data/maps/CeruleanCity/scripts.pory"
	end
# 29 "data/maps/CeruleanCity/scripts.pory"

# 30 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalTriggerMid::
# 31 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 32 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 33 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_RIVAL, 23, 0
# 34 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_Rival
# 35 "data/maps/CeruleanCity/scripts.pory"
	end
# 36 "data/maps/CeruleanCity/scripts.pory"

# 37 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalTriggerRight::
# 38 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 39 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 40 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_RIVAL, 24, 0
# 41 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_Rival
# 42 "data/maps/CeruleanCity/scripts.pory"
	end
# 43 "data/maps/CeruleanCity/scripts.pory"

# 44 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Rival::
# 45 "data/maps/CeruleanCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 46 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 2
# 47 "data/maps/CeruleanCity/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 48 "data/maps/CeruleanCity/scripts.pory"
	addobject LOCALID_CERULEAN_RIVAL
# 49 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalEnter
# 50 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 51 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_RivalIntro
# 52 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_CERULEAN_RIVAL
# 53 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, CeruleanCity_EventScript_RivalSquirtle
# 54 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, CeruleanCity_EventScript_RivalBulbasaur
# 55 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, CeruleanCity_EventScript_RivalCharmander
# 56 "data/maps/CeruleanCity/scripts.pory"
	famechecker FAMECHECKER_BILL, 0
# 57 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_RivalPostBattle
# 58 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 59 "data/maps/CeruleanCity/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 60 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CeruleanCity_EventScript_RivalStartExit
# 61 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CeruleanCity_EventScript_RivalStartExit
# 62 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, CeruleanCity_EventScript_RivalStartExitRight
# 63 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_OhRightLittlePresentAsFavor
# 64 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1
# 65 "data/maps/CeruleanCity/scripts.pory"
	setflag FLAG_GOT_FAME_CHECKER
# 66 "data/maps/CeruleanCity/scripts.pory"
	giveitem ITEM_FAME_CHECKER
# 67 "data/maps/CeruleanCity/scripts.pory"
	setflag FLAG_RIVAL_DEFEATED_CERULEAN
# 68 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_ExplainFameCheckerSmellYa
# 69 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 70 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalExit
# 71 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 72 "data/maps/CeruleanCity/scripts.pory"
	fadedefaultbgm
# 73 "data/maps/CeruleanCity/scripts.pory"
	removeobject LOCALID_CERULEAN_RIVAL
# 74 "data/maps/CeruleanCity/scripts.pory"
	releaseall
# 75 "data/maps/CeruleanCity/scripts.pory"
	end
# 76 "data/maps/CeruleanCity/scripts.pory"

# 77 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalSquirtle::
# 78 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_SQUIRTLE, CeruleanCity_Text_RivalDefeat
# 79 "data/maps/CeruleanCity/scripts.pory"
	return
# 80 "data/maps/CeruleanCity/scripts.pory"

# 81 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalBulbasaur::
# 82 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_BULBASAUR, CeruleanCity_Text_RivalDefeat
# 83 "data/maps/CeruleanCity/scripts.pory"
	return
# 84 "data/maps/CeruleanCity/scripts.pory"

# 85 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalCharmander::
# 86 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_CHARMANDER, CeruleanCity_Text_RivalDefeat
# 87 "data/maps/CeruleanCity/scripts.pory"
	return
# 88 "data/maps/CeruleanCity/scripts.pory"

# 89 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalStartExit::
# 90 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_PLAYER, CeruleanCity_Movement_PlayerWatchRivalExit
# 91 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalStartExit
# 92 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 93 "data/maps/CeruleanCity/scripts.pory"
	return
# 94 "data/maps/CeruleanCity/scripts.pory"

# 95 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalStartExitRight::
# 96 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_PLAYER, CeruleanCity_Movement_PlayerWatchRivalExitRight
# 97 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalStartExitRight
# 98 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 99 "data/maps/CeruleanCity/scripts.pory"
	return
# 100 "data/maps/CeruleanCity/scripts.pory"

# 101 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_PlayerWatchRivalExit::
# 102 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 103 "data/maps/CeruleanCity/scripts.pory"
	delay_8
# 104 "data/maps/CeruleanCity/scripts.pory"
	walk_in_place_faster_right
# 105 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 106 "data/maps/CeruleanCity/scripts.pory"
	walk_in_place_faster_down
# 107 "data/maps/CeruleanCity/scripts.pory"
	step_end
# 108 "data/maps/CeruleanCity/scripts.pory"

# 109 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_PlayerWatchRivalExitRight::
# 110 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 111 "data/maps/CeruleanCity/scripts.pory"
	delay_8
# 112 "data/maps/CeruleanCity/scripts.pory"
	walk_in_place_faster_left
# 113 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 114 "data/maps/CeruleanCity/scripts.pory"
	walk_in_place_faster_down
# 115 "data/maps/CeruleanCity/scripts.pory"
	step_end
# 116 "data/maps/CeruleanCity/scripts.pory"

# 117 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_RivalEnter::
# 118 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 119 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 120 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 121 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 122 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 123 "data/maps/CeruleanCity/scripts.pory"
	step_end
# 124 "data/maps/CeruleanCity/scripts.pory"

# 125 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_RivalStartExit::
# 126 "data/maps/CeruleanCity/scripts.pory"
	walk_right
# 127 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 128 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 129 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 130 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 131 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 132 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 133 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 134 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 135 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 136 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 137 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 138 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 139 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 140 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 141 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 142 "data/maps/CeruleanCity/scripts.pory"
	step_end
# 143 "data/maps/CeruleanCity/scripts.pory"

# 144 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_RivalStartExitRight::
# 145 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 146 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 147 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 148 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 149 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 150 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 151 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 152 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 153 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 154 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 155 "data/maps/CeruleanCity/scripts.pory"
	walk_right
# 156 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 157 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 158 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 159 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 160 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 161 "data/maps/CeruleanCity/scripts.pory"
	step_end
# 162 "data/maps/CeruleanCity/scripts.pory"

# 163 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_RivalExit::
# 164 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 165 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 166 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 167 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 168 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 169 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 170 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 171 "data/maps/CeruleanCity/scripts.pory"
	step_end
# 172 "data/maps/CeruleanCity/scripts.pory"

# 173 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Grunt::
# 174 "data/maps/CeruleanCity/scripts.pory"
	lock
# 175 "data/maps/CeruleanCity/scripts.pory"
	faceplayer
# 176 "data/maps/CeruleanCity/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_EventScript_GruntDefeated
# 177 "data/maps/CeruleanCity/scripts.pory"
	message CeruleanCity_Text_GruntIntro
# 178 "data/maps/CeruleanCity/scripts.pory"
	waitmessage
# 179 "data/maps/CeruleanCity/scripts.pory"
	playbgm MUS_ENCOUNTER_ROCKET, 0
# 180 "data/maps/CeruleanCity/scripts.pory"
	waitbuttonpress
# 181 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_Text_GruntDefeat
# 182 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_ROCKET, 1
# 183 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_GruntDefeated
# 184 "data/maps/CeruleanCity/scripts.pory"
	end
# 185 "data/maps/CeruleanCity/scripts.pory"

# 186 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_GruntDefeated::
# 187 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_OkayIllReturnStolenTM
# 188 "data/maps/CeruleanCity/scripts.pory"
	checkitemspace ITEM_TM28
# 189 "data/maps/CeruleanCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_EventScript_NoRoomForTM28
# 190 "data/maps/CeruleanCity/scripts.pory"
	giveitem_msg CeruleanCity_Text_RecoveredTM28FromGrunt, ITEM_TM28
# 191 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_BetterGetMovingBye
# 192 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 193 "data/maps/CeruleanCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 194 "data/maps/CeruleanCity/scripts.pory"
	removeobject LOCALID_CERULEAN_GRUNT
# 195 "data/maps/CeruleanCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 196 "data/maps/CeruleanCity/scripts.pory"
	setflag FLAG_GOT_TM28_FROM_ROCKET
# 197 "data/maps/CeruleanCity/scripts.pory"
	release
# 198 "data/maps/CeruleanCity/scripts.pory"
	end
# 199 "data/maps/CeruleanCity/scripts.pory"

# 200 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_NoRoomForTM28::
# 201 "data/maps/CeruleanCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 202 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_MakeRoomForThisCantRun
# 203 "data/maps/CeruleanCity/scripts.pory"
	release
# 204 "data/maps/CeruleanCity/scripts.pory"
	end
# 205 "data/maps/CeruleanCity/scripts.pory"

# 206 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_GruntTriggerTop::
# 207 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 208 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 209 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_GRUNT, Common_Movement_WalkInPlaceFasterUp
# 210 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 211 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 212 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 213 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_GruntTrigger
# 214 "data/maps/CeruleanCity/scripts.pory"
	end
# 215 "data/maps/CeruleanCity/scripts.pory"

# 216 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_GruntTriggerBottom::
# 217 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 218 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 219 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_GRUNT, Common_Movement_WalkInPlaceFasterDown
# 220 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 221 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 222 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 223 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_GruntTrigger
# 224 "data/maps/CeruleanCity/scripts.pory"
	end
# 225 "data/maps/CeruleanCity/scripts.pory"

# 226 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_GruntTrigger::
# 227 "data/maps/CeruleanCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 228 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_GruntIntro
# 229 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_CERULEAN_GRUNT
# 230 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_Text_GruntDefeat
# 231 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_ROCKET, 1
# 232 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_GruntDefeated
# 233 "data/maps/CeruleanCity/scripts.pory"
	end
# 234 "data/maps/CeruleanCity/scripts.pory"

# 235 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Policeman::
# 236 "data/maps/CeruleanCity/scripts.pory"
	lock
# 237 "data/maps/CeruleanCity/scripts.pory"
	faceplayer
# 238 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_PeopleHereWereRobbed
# 239 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 240 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_POLICEMAN, Common_Movement_FaceOriginalDirection
# 241 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 242 "data/maps/CeruleanCity/scripts.pory"
	release
# 243 "data/maps/CeruleanCity/scripts.pory"
	end
# 244 "data/maps/CeruleanCity/scripts.pory"

# 245 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_LittleBoy::
# 246 "data/maps/CeruleanCity/scripts.pory"
	lock
# 247 "data/maps/CeruleanCity/scripts.pory"
	faceplayer
# 248 "data/maps/CeruleanCity/scripts.pory"
	goto_if_set FLAG_GOT_TM28_FROM_ROCKET, CeruleanCity_EventScript_LittleBoySlowbroMoved
# 249 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_IfSlowbroWasntThereCouldCutTree
# 250 "data/maps/CeruleanCity/scripts.pory"
	release
# 251 "data/maps/CeruleanCity/scripts.pory"
	end
# 252 "data/maps/CeruleanCity/scripts.pory"

# 253 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_LittleBoySlowbroMoved::
# 254 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_YouCanCutDownSmallTrees
# 255 "data/maps/CeruleanCity/scripts.pory"
	release
# 256 "data/maps/CeruleanCity/scripts.pory"
	end
# 257 "data/maps/CeruleanCity/scripts.pory"

# 258 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_BaldingMan::
# 259 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_PokemonEncyclopediaAmusing, MSGBOX_NPC
# 260 "data/maps/CeruleanCity/scripts.pory"
	end
# 261 "data/maps/CeruleanCity/scripts.pory"

# 262 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Youngster::
# 263 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_TrainerLifeIsToughIsntIt, MSGBOX_NPC
# 264 "data/maps/CeruleanCity/scripts.pory"
	end
# 265 "data/maps/CeruleanCity/scripts.pory"

# 266 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_CeruleanCaveGuard::
# 267 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_ThisIsCeruleanCave, MSGBOX_NPC
# 268 "data/maps/CeruleanCity/scripts.pory"
	end
# 269 "data/maps/CeruleanCity/scripts.pory"

# 270 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Woman::
# 271 "data/maps/CeruleanCity/scripts.pory"
	lock
# 272 "data/maps/CeruleanCity/scripts.pory"
	faceplayer
# 273 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_WantBrightRedBicycle
# 274 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 275 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_WOMAN, Common_Movement_FaceOriginalDirection
# 276 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 277 "data/maps/CeruleanCity/scripts.pory"
	release
# 278 "data/maps/CeruleanCity/scripts.pory"
	end
# 279 "data/maps/CeruleanCity/scripts.pory"

# 280 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Lass::
# 281 "data/maps/CeruleanCity/scripts.pory"
	lock
# 282 "data/maps/CeruleanCity/scripts.pory"
	random 3
# 283 "data/maps/CeruleanCity/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 284 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, CeruleanCity_EventScript_SlowbroCommand1
# 285 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, CeruleanCity_EventScript_SlowbroCommand2
# 286 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, CeruleanCity_EventScript_SlowbroCommand3
# 287 "data/maps/CeruleanCity/scripts.pory"
	waitmessage
# 288 "data/maps/CeruleanCity/scripts.pory"
	delay 40
# 289 "data/maps/CeruleanCity/scripts.pory"
	playse SE_PIN
# 290 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_SLOWBRO, Common_Movement_QuestionMark
# 291 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 292 "data/maps/CeruleanCity/scripts.pory"
	delay 30
# 293 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, CeruleanCity_EventScript_SlowbroFailed1
# 294 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, CeruleanCity_EventScript_SlowbroFailed2
# 295 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, CeruleanCity_EventScript_SlowbroFailed3
# 296 "data/maps/CeruleanCity/scripts.pory"
	release
# 297 "data/maps/CeruleanCity/scripts.pory"
	end
# 298 "data/maps/CeruleanCity/scripts.pory"

# 299 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroCommand1::
# 300 "data/maps/CeruleanCity/scripts.pory"
	message CeruleanCity_Text_SlowbroUseSonicboom
# 301 "data/maps/CeruleanCity/scripts.pory"
	return
# 302 "data/maps/CeruleanCity/scripts.pory"

# 303 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroCommand2::
# 304 "data/maps/CeruleanCity/scripts.pory"
	message CeruleanCity_Text_SlowbroPunch
# 305 "data/maps/CeruleanCity/scripts.pory"
	return
# 306 "data/maps/CeruleanCity/scripts.pory"

# 307 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroCommand3::
# 308 "data/maps/CeruleanCity/scripts.pory"
	message CeruleanCity_Text_SlowbroWithdraw
# 309 "data/maps/CeruleanCity/scripts.pory"
	return
# 310 "data/maps/CeruleanCity/scripts.pory"

# 311 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroFailed1::
# 312 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroPayAttention
# 313 "data/maps/CeruleanCity/scripts.pory"
	return
# 314 "data/maps/CeruleanCity/scripts.pory"

# 315 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroFailed2::
# 316 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_NoYouBlewItAgain
# 317 "data/maps/CeruleanCity/scripts.pory"
	return
# 318 "data/maps/CeruleanCity/scripts.pory"

# 319 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroFailed3::
# 320 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_HardToControlMonsObedience
# 321 "data/maps/CeruleanCity/scripts.pory"
	return
# 322 "data/maps/CeruleanCity/scripts.pory"

# 323 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Slowbro::
# 324 "data/maps/CeruleanCity/scripts.pory"
	lock
# 325 "data/maps/CeruleanCity/scripts.pory"
	random 4
# 326 "data/maps/CeruleanCity/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 327 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, CeruleanCity_EventScript_SlowbroText1
# 328 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, CeruleanCity_EventScript_SlowbroText2
# 329 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, CeruleanCity_EventScript_SlowbroText3
# 330 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, CeruleanCity_EventScript_SlowbroText4
# 331 "data/maps/CeruleanCity/scripts.pory"
	release
# 332 "data/maps/CeruleanCity/scripts.pory"
	end
# 333 "data/maps/CeruleanCity/scripts.pory"

# 334 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroText1::
# 335 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroTookSnooze
# 336 "data/maps/CeruleanCity/scripts.pory"
	return
# 337 "data/maps/CeruleanCity/scripts.pory"

# 338 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroText2::
# 339 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroLoafingAround
# 340 "data/maps/CeruleanCity/scripts.pory"
	return
# 341 "data/maps/CeruleanCity/scripts.pory"

# 342 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroText3::
# 343 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroTurnedAway
# 344 "data/maps/CeruleanCity/scripts.pory"
	return
# 345 "data/maps/CeruleanCity/scripts.pory"

# 346 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroText4::
# 347 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroIgnoredOrders
# 348 "data/maps/CeruleanCity/scripts.pory"
	return
# 349 "data/maps/CeruleanCity/scripts.pory"

# 350 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_CitySign::
# 351 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_CitySign, MSGBOX_SIGN
# 352 "data/maps/CeruleanCity/scripts.pory"
	end
# 353 "data/maps/CeruleanCity/scripts.pory"

# 354 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_TrainerTips::
# 355 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_TrainerTipsHeldItems, MSGBOX_SIGN
# 356 "data/maps/CeruleanCity/scripts.pory"
	end
# 357 "data/maps/CeruleanCity/scripts.pory"

# 358 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_BikeShopSign::
# 359 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_BikeShopSign, MSGBOX_SIGN
# 360 "data/maps/CeruleanCity/scripts.pory"
	end
# 361 "data/maps/CeruleanCity/scripts.pory"

# 362 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_GymSign::
# 363 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 364 "data/maps/CeruleanCity/scripts.pory"
	famechecker FAMECHECKER_MISTY, 0
# 365 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_GymSign
# 366 "data/maps/CeruleanCity/scripts.pory"
	releaseall
# 367 "data/maps/CeruleanCity/scripts.pory"
	end

CeruleanCity_EventScript_GoneSwimming::
# 372 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 373 "data/maps/CeruleanCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 374 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 375 "data/maps/CeruleanCity/scripts.pory"
	waitmovement
# 376 "data/maps/CeruleanCity/scripts.pory"
	delay 10
# 377 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_EventScript_GoneSwimming_Text_0
# 378 "data/maps/CeruleanCity/scripts.pory"
	waitmessage
# 379 "data/maps/CeruleanCity/scripts.pory"
	delay 8
# 380 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 381 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_PLAYER, WalkAway
# 382 "data/maps/CeruleanCity/scripts.pory"
	waitmovement
# 383 "data/maps/CeruleanCity/scripts.pory"
	releaseall
	return


# 386 "data/maps/CeruleanCity/scripts.pory"
WalkAway:
# 387 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 388 "data/maps/CeruleanCity/scripts.pory"
	end
	step_end

CeruleanCity_EventScript_GoneSwimming_Text_0:
# 377 "data/maps/CeruleanCity/scripts.pory"
	.string "Gone Swimming. Be back soon!$"
