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
	end
# 11 "data/maps/CeruleanCity/scripts.pory"

# 12 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_BlockExits::
# 13 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_POLICEMAN, 30, 12
# 14 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_SLOWBRO, 26, 31
# 15 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_LASS, 27, 31
# 16 "data/maps/CeruleanCity/scripts.pory"
	return
# 17 "data/maps/CeruleanCity/scripts.pory"

# 18 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalTriggerLeft::
# 19 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 20 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 21 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_Rival
# 22 "data/maps/CeruleanCity/scripts.pory"
	end
# 23 "data/maps/CeruleanCity/scripts.pory"

# 24 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalTriggerMid::
# 25 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 26 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 27 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_RIVAL, 23, 0
# 28 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_Rival
# 29 "data/maps/CeruleanCity/scripts.pory"
	end
# 30 "data/maps/CeruleanCity/scripts.pory"

# 31 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalTriggerRight::
# 32 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 33 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 34 "data/maps/CeruleanCity/scripts.pory"
	setobjectxyperm LOCALID_CERULEAN_RIVAL, 24, 0
# 35 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_Rival
# 36 "data/maps/CeruleanCity/scripts.pory"
	end
# 37 "data/maps/CeruleanCity/scripts.pory"

# 38 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Rival::
# 39 "data/maps/CeruleanCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 40 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 2
# 41 "data/maps/CeruleanCity/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 42 "data/maps/CeruleanCity/scripts.pory"
	addobject LOCALID_CERULEAN_RIVAL
# 43 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalEnter
# 44 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 45 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_RivalIntro
# 46 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_CERULEAN_RIVAL
# 47 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, CeruleanCity_EventScript_RivalSquirtle
# 48 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, CeruleanCity_EventScript_RivalBulbasaur
# 49 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, CeruleanCity_EventScript_RivalCharmander
# 50 "data/maps/CeruleanCity/scripts.pory"
	famechecker FAMECHECKER_BILL, 0
# 51 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_RivalPostBattle
# 52 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 53 "data/maps/CeruleanCity/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 54 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CeruleanCity_EventScript_RivalStartExit
# 55 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CeruleanCity_EventScript_RivalStartExit
# 56 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, CeruleanCity_EventScript_RivalStartExitRight
# 57 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_OhRightLittlePresentAsFavor
# 58 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1
# 59 "data/maps/CeruleanCity/scripts.pory"
	setflag FLAG_GOT_FAME_CHECKER
# 60 "data/maps/CeruleanCity/scripts.pory"
	giveitem ITEM_FAME_CHECKER
# 61 "data/maps/CeruleanCity/scripts.pory"
	setflag FLAG_RIVAL_DEFEATED_CERULEAN
# 62 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_ExplainFameCheckerSmellYa
# 63 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 64 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalExit
# 65 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 66 "data/maps/CeruleanCity/scripts.pory"
	fadedefaultbgm
# 67 "data/maps/CeruleanCity/scripts.pory"
	removeobject LOCALID_CERULEAN_RIVAL
# 68 "data/maps/CeruleanCity/scripts.pory"
	releaseall
# 69 "data/maps/CeruleanCity/scripts.pory"
	end
# 70 "data/maps/CeruleanCity/scripts.pory"

# 71 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalSquirtle::
# 72 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_SQUIRTLE, CeruleanCity_Text_RivalDefeat
# 73 "data/maps/CeruleanCity/scripts.pory"
	return
# 74 "data/maps/CeruleanCity/scripts.pory"

# 75 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalBulbasaur::
# 76 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_BULBASAUR, CeruleanCity_Text_RivalDefeat
# 77 "data/maps/CeruleanCity/scripts.pory"
	return
# 78 "data/maps/CeruleanCity/scripts.pory"

# 79 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalCharmander::
# 80 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_CERULEAN_CHARMANDER, CeruleanCity_Text_RivalDefeat
# 81 "data/maps/CeruleanCity/scripts.pory"
	return
# 82 "data/maps/CeruleanCity/scripts.pory"

# 83 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalStartExit::
# 84 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_PLAYER, CeruleanCity_Movement_PlayerWatchRivalExit
# 85 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalStartExit
# 86 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 87 "data/maps/CeruleanCity/scripts.pory"
	return
# 88 "data/maps/CeruleanCity/scripts.pory"

# 89 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_RivalStartExitRight::
# 90 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_PLAYER, CeruleanCity_Movement_PlayerWatchRivalExitRight
# 91 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_RIVAL, CeruleanCity_Movement_RivalStartExitRight
# 92 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 93 "data/maps/CeruleanCity/scripts.pory"
	return
# 94 "data/maps/CeruleanCity/scripts.pory"

# 95 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_PlayerWatchRivalExit::
# 96 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 97 "data/maps/CeruleanCity/scripts.pory"
	delay_8
# 98 "data/maps/CeruleanCity/scripts.pory"
	walk_in_place_faster_right
# 99 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 100 "data/maps/CeruleanCity/scripts.pory"
	walk_in_place_faster_down
# 101 "data/maps/CeruleanCity/scripts.pory"
	step_end
# 102 "data/maps/CeruleanCity/scripts.pory"

# 103 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_PlayerWatchRivalExitRight::
# 104 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 105 "data/maps/CeruleanCity/scripts.pory"
	delay_8
# 106 "data/maps/CeruleanCity/scripts.pory"
	walk_in_place_faster_left
# 107 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 108 "data/maps/CeruleanCity/scripts.pory"
	walk_in_place_faster_down
# 109 "data/maps/CeruleanCity/scripts.pory"
	step_end
# 110 "data/maps/CeruleanCity/scripts.pory"

# 111 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_RivalEnter::
# 112 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 113 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 114 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 115 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 116 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 117 "data/maps/CeruleanCity/scripts.pory"
	step_end
# 118 "data/maps/CeruleanCity/scripts.pory"

# 119 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_RivalStartExit::
# 120 "data/maps/CeruleanCity/scripts.pory"
	walk_right
# 121 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 122 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 123 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 124 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 125 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 126 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 127 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 128 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 129 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 130 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 131 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 132 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 133 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 134 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 135 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 136 "data/maps/CeruleanCity/scripts.pory"
	step_end
# 137 "data/maps/CeruleanCity/scripts.pory"

# 138 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_RivalStartExitRight::
# 139 "data/maps/CeruleanCity/scripts.pory"
	walk_left
# 140 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 141 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 142 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 143 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 144 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 145 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 146 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 147 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 148 "data/maps/CeruleanCity/scripts.pory"
	delay_16
# 149 "data/maps/CeruleanCity/scripts.pory"
	walk_right
# 150 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 151 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 152 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 153 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 154 "data/maps/CeruleanCity/scripts.pory"
	walk_up
# 155 "data/maps/CeruleanCity/scripts.pory"
	step_end
# 156 "data/maps/CeruleanCity/scripts.pory"

# 157 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_Movement_RivalExit::
# 158 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 159 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 160 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 161 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 162 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 163 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 164 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 165 "data/maps/CeruleanCity/scripts.pory"
	step_end
# 166 "data/maps/CeruleanCity/scripts.pory"

# 167 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Grunt::
# 168 "data/maps/CeruleanCity/scripts.pory"
	lock
# 169 "data/maps/CeruleanCity/scripts.pory"
	faceplayer
# 170 "data/maps/CeruleanCity/scripts.pory"
	goto_if_defeated TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_EventScript_GruntDefeated
# 171 "data/maps/CeruleanCity/scripts.pory"
	message CeruleanCity_Text_GruntIntro
# 172 "data/maps/CeruleanCity/scripts.pory"
	waitmessage
# 173 "data/maps/CeruleanCity/scripts.pory"
	playbgm MUS_ENCOUNTER_ROCKET, 0
# 174 "data/maps/CeruleanCity/scripts.pory"
	waitbuttonpress
# 175 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_Text_GruntDefeat
# 176 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_ROCKET, 1
# 177 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_GruntDefeated
# 178 "data/maps/CeruleanCity/scripts.pory"
	end
# 179 "data/maps/CeruleanCity/scripts.pory"

# 180 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_GruntDefeated::
# 181 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_OkayIllReturnStolenTM
# 182 "data/maps/CeruleanCity/scripts.pory"
	checkitemspace ITEM_TM28
# 183 "data/maps/CeruleanCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_EventScript_NoRoomForTM28
# 184 "data/maps/CeruleanCity/scripts.pory"
	giveitem_msg CeruleanCity_Text_RecoveredTM28FromGrunt, ITEM_TM28
# 185 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_BetterGetMovingBye
# 186 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 187 "data/maps/CeruleanCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 188 "data/maps/CeruleanCity/scripts.pory"
	removeobject LOCALID_CERULEAN_GRUNT
# 189 "data/maps/CeruleanCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 190 "data/maps/CeruleanCity/scripts.pory"
	setflag FLAG_GOT_TM28_FROM_ROCKET
# 191 "data/maps/CeruleanCity/scripts.pory"
	release
# 192 "data/maps/CeruleanCity/scripts.pory"
	end
# 193 "data/maps/CeruleanCity/scripts.pory"

# 194 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_NoRoomForTM28::
# 195 "data/maps/CeruleanCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 196 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_MakeRoomForThisCantRun
# 197 "data/maps/CeruleanCity/scripts.pory"
	release
# 198 "data/maps/CeruleanCity/scripts.pory"
	end
# 199 "data/maps/CeruleanCity/scripts.pory"

# 200 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_GruntTriggerTop::
# 201 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 202 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 203 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_GRUNT, Common_Movement_WalkInPlaceFasterUp
# 204 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 205 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 206 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 207 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_GruntTrigger
# 208 "data/maps/CeruleanCity/scripts.pory"
	end
# 209 "data/maps/CeruleanCity/scripts.pory"

# 210 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_GruntTriggerBottom::
# 211 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 212 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 213 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_GRUNT, Common_Movement_WalkInPlaceFasterDown
# 214 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 215 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 216 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 217 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_GruntTrigger
# 218 "data/maps/CeruleanCity/scripts.pory"
	end
# 219 "data/maps/CeruleanCity/scripts.pory"

# 220 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_GruntTrigger::
# 221 "data/maps/CeruleanCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 222 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_GruntIntro
# 223 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_CERULEAN_GRUNT
# 224 "data/maps/CeruleanCity/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_GRUNT_5, CeruleanCity_Text_GruntDefeat
# 225 "data/maps/CeruleanCity/scripts.pory"
	setvar VAR_MAP_SCENE_CERULEAN_CITY_ROCKET, 1
# 226 "data/maps/CeruleanCity/scripts.pory"
	goto CeruleanCity_EventScript_GruntDefeated
# 227 "data/maps/CeruleanCity/scripts.pory"
	end
# 228 "data/maps/CeruleanCity/scripts.pory"

# 229 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Policeman::
# 230 "data/maps/CeruleanCity/scripts.pory"
	lock
# 231 "data/maps/CeruleanCity/scripts.pory"
	faceplayer
# 232 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_PeopleHereWereRobbed
# 233 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 234 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_POLICEMAN, Common_Movement_FaceOriginalDirection
# 235 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 236 "data/maps/CeruleanCity/scripts.pory"
	release
# 237 "data/maps/CeruleanCity/scripts.pory"
	end
# 238 "data/maps/CeruleanCity/scripts.pory"

# 239 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_LittleBoy::
# 240 "data/maps/CeruleanCity/scripts.pory"
	lock
# 241 "data/maps/CeruleanCity/scripts.pory"
	faceplayer
# 242 "data/maps/CeruleanCity/scripts.pory"
	goto_if_set FLAG_GOT_SS_TICKET, CeruleanCity_EventScript_LittleBoySlowbroMoved
# 243 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_IfSlowbroWasntThereCouldCutTree
# 244 "data/maps/CeruleanCity/scripts.pory"
	release
# 245 "data/maps/CeruleanCity/scripts.pory"
	end
# 246 "data/maps/CeruleanCity/scripts.pory"

# 247 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_LittleBoySlowbroMoved::
# 248 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_YouCanCutDownSmallTrees
# 249 "data/maps/CeruleanCity/scripts.pory"
	release
# 250 "data/maps/CeruleanCity/scripts.pory"
	end
# 251 "data/maps/CeruleanCity/scripts.pory"

# 252 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_BaldingMan::
# 253 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_PokemonEncyclopediaAmusing, MSGBOX_NPC
# 254 "data/maps/CeruleanCity/scripts.pory"
	end
# 255 "data/maps/CeruleanCity/scripts.pory"

# 256 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Youngster::
# 257 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_TrainerLifeIsToughIsntIt, MSGBOX_NPC
# 258 "data/maps/CeruleanCity/scripts.pory"
	end
# 259 "data/maps/CeruleanCity/scripts.pory"

# 260 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_CeruleanCaveGuard::
# 261 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_ThisIsCeruleanCave, MSGBOX_NPC
# 262 "data/maps/CeruleanCity/scripts.pory"
	end
# 263 "data/maps/CeruleanCity/scripts.pory"

# 264 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Woman::
# 265 "data/maps/CeruleanCity/scripts.pory"
	lock
# 266 "data/maps/CeruleanCity/scripts.pory"
	faceplayer
# 267 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_WantBrightRedBicycle
# 268 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 269 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_WOMAN, Common_Movement_FaceOriginalDirection
# 270 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 271 "data/maps/CeruleanCity/scripts.pory"
	release
# 272 "data/maps/CeruleanCity/scripts.pory"
	end
# 273 "data/maps/CeruleanCity/scripts.pory"

# 274 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Lass::
# 275 "data/maps/CeruleanCity/scripts.pory"
	lock
# 276 "data/maps/CeruleanCity/scripts.pory"
	random 3
# 277 "data/maps/CeruleanCity/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 278 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, CeruleanCity_EventScript_SlowbroCommand1
# 279 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, CeruleanCity_EventScript_SlowbroCommand2
# 280 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, CeruleanCity_EventScript_SlowbroCommand3
# 281 "data/maps/CeruleanCity/scripts.pory"
	waitmessage
# 282 "data/maps/CeruleanCity/scripts.pory"
	delay 40
# 283 "data/maps/CeruleanCity/scripts.pory"
	playse SE_PIN
# 284 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_CERULEAN_SLOWBRO, Common_Movement_QuestionMark
# 285 "data/maps/CeruleanCity/scripts.pory"
	waitmovement 0
# 286 "data/maps/CeruleanCity/scripts.pory"
	delay 30
# 287 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, CeruleanCity_EventScript_SlowbroFailed1
# 288 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, CeruleanCity_EventScript_SlowbroFailed2
# 289 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, CeruleanCity_EventScript_SlowbroFailed3
# 290 "data/maps/CeruleanCity/scripts.pory"
	release
# 291 "data/maps/CeruleanCity/scripts.pory"
	end
# 292 "data/maps/CeruleanCity/scripts.pory"

# 293 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroCommand1::
# 294 "data/maps/CeruleanCity/scripts.pory"
	message CeruleanCity_Text_SlowbroUseSonicboom
# 295 "data/maps/CeruleanCity/scripts.pory"
	return
# 296 "data/maps/CeruleanCity/scripts.pory"

# 297 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroCommand2::
# 298 "data/maps/CeruleanCity/scripts.pory"
	message CeruleanCity_Text_SlowbroPunch
# 299 "data/maps/CeruleanCity/scripts.pory"
	return
# 300 "data/maps/CeruleanCity/scripts.pory"

# 301 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroCommand3::
# 302 "data/maps/CeruleanCity/scripts.pory"
	message CeruleanCity_Text_SlowbroWithdraw
# 303 "data/maps/CeruleanCity/scripts.pory"
	return
# 304 "data/maps/CeruleanCity/scripts.pory"

# 305 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroFailed1::
# 306 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroPayAttention
# 307 "data/maps/CeruleanCity/scripts.pory"
	return
# 308 "data/maps/CeruleanCity/scripts.pory"

# 309 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroFailed2::
# 310 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_NoYouBlewItAgain
# 311 "data/maps/CeruleanCity/scripts.pory"
	return
# 312 "data/maps/CeruleanCity/scripts.pory"

# 313 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroFailed3::
# 314 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_HardToControlMonsObedience
# 315 "data/maps/CeruleanCity/scripts.pory"
	return
# 316 "data/maps/CeruleanCity/scripts.pory"

# 317 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_Slowbro::
# 318 "data/maps/CeruleanCity/scripts.pory"
	lock
# 319 "data/maps/CeruleanCity/scripts.pory"
	random 4
# 320 "data/maps/CeruleanCity/scripts.pory"
	copyvar VAR_0x8008, VAR_RESULT
# 321 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, CeruleanCity_EventScript_SlowbroText1
# 322 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, CeruleanCity_EventScript_SlowbroText2
# 323 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, CeruleanCity_EventScript_SlowbroText3
# 324 "data/maps/CeruleanCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, CeruleanCity_EventScript_SlowbroText4
# 325 "data/maps/CeruleanCity/scripts.pory"
	release
# 326 "data/maps/CeruleanCity/scripts.pory"
	end
# 327 "data/maps/CeruleanCity/scripts.pory"

# 328 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroText1::
# 329 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroTookSnooze
# 330 "data/maps/CeruleanCity/scripts.pory"
	return
# 331 "data/maps/CeruleanCity/scripts.pory"

# 332 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroText2::
# 333 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroLoafingAround
# 334 "data/maps/CeruleanCity/scripts.pory"
	return
# 335 "data/maps/CeruleanCity/scripts.pory"

# 336 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroText3::
# 337 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroTurnedAway
# 338 "data/maps/CeruleanCity/scripts.pory"
	return
# 339 "data/maps/CeruleanCity/scripts.pory"

# 340 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_SlowbroText4::
# 341 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_SlowbroIgnoredOrders
# 342 "data/maps/CeruleanCity/scripts.pory"
	return
# 343 "data/maps/CeruleanCity/scripts.pory"

# 344 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_CitySign::
# 345 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_CitySign, MSGBOX_SIGN
# 346 "data/maps/CeruleanCity/scripts.pory"
	end
# 347 "data/maps/CeruleanCity/scripts.pory"

# 348 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_TrainerTips::
# 349 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_TrainerTipsHeldItems, MSGBOX_SIGN
# 350 "data/maps/CeruleanCity/scripts.pory"
	end
# 351 "data/maps/CeruleanCity/scripts.pory"

# 352 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_BikeShopSign::
# 353 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_BikeShopSign, MSGBOX_SIGN
# 354 "data/maps/CeruleanCity/scripts.pory"
	end
# 355 "data/maps/CeruleanCity/scripts.pory"

# 356 "data/maps/CeruleanCity/scripts.pory"
CeruleanCity_EventScript_GymSign::
# 357 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 358 "data/maps/CeruleanCity/scripts.pory"
	famechecker FAMECHECKER_MISTY, 0
# 359 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_Text_GymSign
# 360 "data/maps/CeruleanCity/scripts.pory"
	releaseall
# 361 "data/maps/CeruleanCity/scripts.pory"
	end

CeruleanCity_EventScript_GoneSwimming::
# 366 "data/maps/CeruleanCity/scripts.pory"
	lockall
# 367 "data/maps/CeruleanCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 368 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 369 "data/maps/CeruleanCity/scripts.pory"
	waitmovement
# 370 "data/maps/CeruleanCity/scripts.pory"
	delay 10
# 371 "data/maps/CeruleanCity/scripts.pory"
	msgbox CeruleanCity_EventScript_GoneSwimming_Text_0
# 372 "data/maps/CeruleanCity/scripts.pory"
	waitmessage
# 373 "data/maps/CeruleanCity/scripts.pory"
	delay 8
# 374 "data/maps/CeruleanCity/scripts.pory"
	closemessage
# 375 "data/maps/CeruleanCity/scripts.pory"
	applymovement LOCALID_PLAYER, WalkAway
# 376 "data/maps/CeruleanCity/scripts.pory"
	waitmovement
# 377 "data/maps/CeruleanCity/scripts.pory"
	releaseall
	return


# 380 "data/maps/CeruleanCity/scripts.pory"
WalkAway:
# 381 "data/maps/CeruleanCity/scripts.pory"
	walk_down
# 382 "data/maps/CeruleanCity/scripts.pory"
	end
	step_end

CeruleanCity_EventScript_GoneSwimming_Text_0:
# 371 "data/maps/CeruleanCity/scripts.pory"
	.string "Gone Swimming. Be back soon!$"
