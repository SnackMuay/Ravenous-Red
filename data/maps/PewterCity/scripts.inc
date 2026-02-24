# 1 "data/maps/PewterCity/scripts.pory"
PewterCity_MapScripts::
# 2 "data/maps/PewterCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_OnTransition
# 3 "data/maps/PewterCity/scripts.pory"
	.byte 0
# 4 "data/maps/PewterCity/scripts.pory"

# 5 "data/maps/PewterCity/scripts.pory"
PewterCity_OnTransition::
# 6 "data/maps/PewterCity/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_PEWTER_CITY
# 7 "data/maps/PewterCity/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY_MUSEUM_1F, 0
# 8 "data/maps/PewterCity/scripts.pory"
	end
# 9 "data/maps/PewterCity/scripts.pory"

# 10 "data/maps/PewterCity/scripts.pory"
@ Impossible to speak to this NPC from a facing dir != DIR_EAST normally, so they arent checked
# 11 "data/maps/PewterCity/scripts.pory"
@ Additionally, no movement script exists for facing DIR_SOUTH, which would necessitate walking out of bounds
# 12 "data/maps/PewterCity/scripts.pory"

# 13 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_GymGuide::
# 14 "data/maps/PewterCity/scripts.pory"
	lock
# 15 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 16 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_BrocksLookingForChallengersFollowMe
# 17 "data/maps/PewterCity/scripts.pory"
	closemessage
# 18 "data/maps/PewterCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 19 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PewterCity_EventScript_WalkToGymEast
# 20 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_GoTakeOnBrock
# 21 "data/maps/PewterCity/scripts.pory"
	closemessage
# 22 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GymGuideExit
# 23 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 24 "data/maps/PewterCity/scripts.pory"
	fadedefaultbgm
# 25 "data/maps/PewterCity/scripts.pory"
    removeobject LOCALID_PEWTER_GYM_GUIDE
# 26 "data/maps/PewterCity/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 27 "data/maps/PewterCity/scripts.pory"
	release
# 28 "data/maps/PewterCity/scripts.pory"
	end
# 29 "data/maps/PewterCity/scripts.pory"

# 30 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_WalkToGymEast::
# 31 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWaitForGuideEast
# 32 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadEast
# 33 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 34 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymEast
# 35 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymEast
# 36 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 37 "data/maps/PewterCity/scripts.pory"
	return
# 38 "data/maps/PewterCity/scripts.pory"

# 39 "data/maps/PewterCity/scripts.pory"
@ Unused
# 40 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_WalkToGymWest::
# 41 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWaitForGuideWest
# 42 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadWest
# 43 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 44 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymWest
# 45 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymWest
# 46 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 47 "data/maps/PewterCity/scripts.pory"
	return
# 48 "data/maps/PewterCity/scripts.pory"

# 49 "data/maps/PewterCity/scripts.pory"
@ Unused
# 50 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_WalkToGymNorth::
# 51 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWaitForGuideNorth
# 52 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadNorth
# 53 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 54 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymNorth
# 55 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymNorth
# 56 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 57 "data/maps/PewterCity/scripts.pory"
	return
# 58 "data/maps/PewterCity/scripts.pory"

# 59 "data/maps/PewterCity/scripts.pory"
.macro walk_to_gym
# 60 "data/maps/PewterCity/scripts.pory"
	walk_left
# 61 "data/maps/PewterCity/scripts.pory"
	walk_left
# 62 "data/maps/PewterCity/scripts.pory"
	walk_left
# 63 "data/maps/PewterCity/scripts.pory"
	walk_up
# 64 "data/maps/PewterCity/scripts.pory"
	walk_left
# 65 "data/maps/PewterCity/scripts.pory"
	walk_left
# 66 "data/maps/PewterCity/scripts.pory"
	walk_left
# 67 "data/maps/PewterCity/scripts.pory"
	walk_left
# 68 "data/maps/PewterCity/scripts.pory"
	walk_left
# 69 "data/maps/PewterCity/scripts.pory"
	walk_left
# 70 "data/maps/PewterCity/scripts.pory"
	walk_left
# 71 "data/maps/PewterCity/scripts.pory"
	walk_left
# 72 "data/maps/PewterCity/scripts.pory"
	walk_left
# 73 "data/maps/PewterCity/scripts.pory"
	walk_left
# 74 "data/maps/PewterCity/scripts.pory"
	walk_left
# 75 "data/maps/PewterCity/scripts.pory"
	walk_left
# 76 "data/maps/PewterCity/scripts.pory"
	walk_left
# 77 "data/maps/PewterCity/scripts.pory"
	walk_left
# 78 "data/maps/PewterCity/scripts.pory"
	walk_left
# 79 "data/maps/PewterCity/scripts.pory"
	walk_up
# 80 "data/maps/PewterCity/scripts.pory"
	walk_up
# 81 "data/maps/PewterCity/scripts.pory"
	walk_up
# 82 "data/maps/PewterCity/scripts.pory"
	walk_up
# 83 "data/maps/PewterCity/scripts.pory"
	walk_up
# 84 "data/maps/PewterCity/scripts.pory"
	walk_up
# 85 "data/maps/PewterCity/scripts.pory"
	walk_up
# 86 "data/maps/PewterCity/scripts.pory"
	walk_up
# 87 "data/maps/PewterCity/scripts.pory"
	walk_up
# 88 "data/maps/PewterCity/scripts.pory"
	walk_up
# 89 "data/maps/PewterCity/scripts.pory"
	walk_right
# 90 "data/maps/PewterCity/scripts.pory"
.endm
# 91 "data/maps/PewterCity/scripts.pory"

# 92 "data/maps/PewterCity/scripts.pory"
.macro walk_to_gym_alt
# 93 "data/maps/PewterCity/scripts.pory"
	walk_left
# 94 "data/maps/PewterCity/scripts.pory"
	walk_left
# 95 "data/maps/PewterCity/scripts.pory"
	walk_left
# 96 "data/maps/PewterCity/scripts.pory"
	walk_left
# 97 "data/maps/PewterCity/scripts.pory"
	walk_left
# 98 "data/maps/PewterCity/scripts.pory"
	walk_left
# 99 "data/maps/PewterCity/scripts.pory"
	walk_left
# 100 "data/maps/PewterCity/scripts.pory"
	walk_left
# 101 "data/maps/PewterCity/scripts.pory"
	walk_left
# 102 "data/maps/PewterCity/scripts.pory"
	walk_left
# 103 "data/maps/PewterCity/scripts.pory"
	walk_left
# 104 "data/maps/PewterCity/scripts.pory"
	walk_left
# 105 "data/maps/PewterCity/scripts.pory"
	walk_left
# 106 "data/maps/PewterCity/scripts.pory"
	walk_left
# 107 "data/maps/PewterCity/scripts.pory"
	walk_left
# 108 "data/maps/PewterCity/scripts.pory"
	walk_up
# 109 "data/maps/PewterCity/scripts.pory"
	walk_up
# 110 "data/maps/PewterCity/scripts.pory"
	walk_up
# 111 "data/maps/PewterCity/scripts.pory"
	walk_up
# 112 "data/maps/PewterCity/scripts.pory"
	walk_up
# 113 "data/maps/PewterCity/scripts.pory"
	walk_up
# 114 "data/maps/PewterCity/scripts.pory"
	walk_up
# 115 "data/maps/PewterCity/scripts.pory"
	walk_left
# 116 "data/maps/PewterCity/scripts.pory"
	walk_left
# 117 "data/maps/PewterCity/scripts.pory"
	walk_left
# 118 "data/maps/PewterCity/scripts.pory"
	walk_left
# 119 "data/maps/PewterCity/scripts.pory"
	walk_left
# 120 "data/maps/PewterCity/scripts.pory"
	walk_left
# 121 "data/maps/PewterCity/scripts.pory"
	walk_left
# 122 "data/maps/PewterCity/scripts.pory"
	walk_left
# 123 "data/maps/PewterCity/scripts.pory"
	walk_left
# 124 "data/maps/PewterCity/scripts.pory"
	walk_left
# 125 "data/maps/PewterCity/scripts.pory"
	walk_down
# 126 "data/maps/PewterCity/scripts.pory"
	walk_down
# 127 "data/maps/PewterCity/scripts.pory"
	walk_down
# 128 "data/maps/PewterCity/scripts.pory"
	walk_down
# 129 "data/maps/PewterCity/scripts.pory"
	walk_down
# 130 "data/maps/PewterCity/scripts.pory"
	walk_down
# 131 "data/maps/PewterCity/scripts.pory"
	walk_right
# 132 "data/maps/PewterCity/scripts.pory"
.endm
# 133 "data/maps/PewterCity/scripts.pory"

# 134 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideEast::
# 135 "data/maps/PewterCity/scripts.pory"
	delay_16
# 136 "data/maps/PewterCity/scripts.pory"
	delay_16
# 137 "data/maps/PewterCity/scripts.pory"
	delay_4
# 138 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_down
# 139 "data/maps/PewterCity/scripts.pory"
	step_end
# 140 "data/maps/PewterCity/scripts.pory"

# 141 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymEast::
# 142 "data/maps/PewterCity/scripts.pory"
	walk_down
# 143 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 144 "data/maps/PewterCity/scripts.pory"
	step_end
# 145 "data/maps/PewterCity/scripts.pory"

# 146 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideWest::
# 147 "data/maps/PewterCity/scripts.pory"
	delay_16
# 148 "data/maps/PewterCity/scripts.pory"
	step_end
# 149 "data/maps/PewterCity/scripts.pory"

# 150 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymWest::
# 151 "data/maps/PewterCity/scripts.pory"
	walk_left
# 152 "data/maps/PewterCity/scripts.pory"
	walk_left
# 153 "data/maps/PewterCity/scripts.pory"
	walk_left
# 154 "data/maps/PewterCity/scripts.pory"
	walk_left
# 155 "data/maps/PewterCity/scripts.pory"
	walk_left
# 156 "data/maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 157 "data/maps/PewterCity/scripts.pory"
	step_end
# 158 "data/maps/PewterCity/scripts.pory"

# 159 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWaitForGuideNorth::
# 160 "data/maps/PewterCity/scripts.pory"
	delay_16
# 161 "data/maps/PewterCity/scripts.pory"
	step_end
# 162 "data/maps/PewterCity/scripts.pory"

# 163 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymNorth::
# 164 "data/maps/PewterCity/scripts.pory"
	walk_up
# 165 "data/maps/PewterCity/scripts.pory"
	walk_left
# 166 "data/maps/PewterCity/scripts.pory"
	walk_left
# 167 "data/maps/PewterCity/scripts.pory"
	walk_left
# 168 "data/maps/PewterCity/scripts.pory"
	walk_left
# 169 "data/maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 170 "data/maps/PewterCity/scripts.pory"
	step_end
# 171 "data/maps/PewterCity/scripts.pory"

# 172 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadEast::
# 173 "data/maps/PewterCity/scripts.pory"
	walk_down
# 174 "data/maps/PewterCity/scripts.pory"
	walk_left
# 175 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 176 "data/maps/PewterCity/scripts.pory"
	walk_in_place_up
# 177 "data/maps/PewterCity/scripts.pory"
	step_end
# 178 "data/maps/PewterCity/scripts.pory"

# 179 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymEast::
# 180 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 181 "data/maps/PewterCity/scripts.pory"
	walk_right
# 182 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 183 "data/maps/PewterCity/scripts.pory"
	step_end
# 184 "data/maps/PewterCity/scripts.pory"

# 185 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadWest::
# 186 "data/maps/PewterCity/scripts.pory"
	walk_in_place_right
# 187 "data/maps/PewterCity/scripts.pory"
	step_end
# 188 "data/maps/PewterCity/scripts.pory"

# 189 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymWest::
# 190 "data/maps/PewterCity/scripts.pory"
	walk_left
# 191 "data/maps/PewterCity/scripts.pory"
	walk_left
# 192 "data/maps/PewterCity/scripts.pory"
	walk_left
# 193 "data/maps/PewterCity/scripts.pory"
	walk_left
# 194 "data/maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 195 "data/maps/PewterCity/scripts.pory"
	walk_right
# 196 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 197 "data/maps/PewterCity/scripts.pory"
	step_end
# 198 "data/maps/PewterCity/scripts.pory"

# 199 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadNorth::
# 200 "data/maps/PewterCity/scripts.pory"
	walk_in_place_down
# 201 "data/maps/PewterCity/scripts.pory"
	step_end
# 202 "data/maps/PewterCity/scripts.pory"

# 203 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymNorth::
# 204 "data/maps/PewterCity/scripts.pory"
	walk_left
# 205 "data/maps/PewterCity/scripts.pory"
	walk_left
# 206 "data/maps/PewterCity/scripts.pory"
	walk_left
# 207 "data/maps/PewterCity/scripts.pory"
	walk_left
# 208 "data/maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 209 "data/maps/PewterCity/scripts.pory"
	walk_right
# 210 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 211 "data/maps/PewterCity/scripts.pory"
	step_end
# 212 "data/maps/PewterCity/scripts.pory"

# 213 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GymGuideExit::
# 214 "data/maps/PewterCity/scripts.pory"
	walk_down
# 215 "data/maps/PewterCity/scripts.pory"
	walk_down
# 216 "data/maps/PewterCity/scripts.pory"
	walk_down
# 217 "data/maps/PewterCity/scripts.pory"
	walk_down
# 218 "data/maps/PewterCity/scripts.pory"
	walk_down
# 219 "data/maps/PewterCity/scripts.pory"
	walk_down
# 220 "data/maps/PewterCity/scripts.pory"
	walk_down
# 221 "data/maps/PewterCity/scripts.pory"
	step_end
# 222 "data/maps/PewterCity/scripts.pory"

# 223 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_GymGuideTriggerTop::
# 224 "data/maps/PewterCity/scripts.pory"
	lockall
# 225 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 226 "data/maps/PewterCity/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
# 227 "data/maps/PewterCity/scripts.pory"
	end
# 228 "data/maps/PewterCity/scripts.pory"

# 229 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_GymGuideTriggerMid::
# 230 "data/maps/PewterCity/scripts.pory"
	lockall
# 231 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 232 "data/maps/PewterCity/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
# 233 "data/maps/PewterCity/scripts.pory"
	end
# 234 "data/maps/PewterCity/scripts.pory"

# 235 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_GymGuideTriggerBottom::
# 236 "data/maps/PewterCity/scripts.pory"
	lockall
# 237 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 238 "data/maps/PewterCity/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
# 239 "data/maps/PewterCity/scripts.pory"
	end
# 240 "data/maps/PewterCity/scripts.pory"

# 241 "data/maps/PewterCity/scripts.pory"
@ This trigger is inaccessible and its corresponding movement script isnt linked
# 242 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_GymGuideTriggerRight::
# 243 "data/maps/PewterCity/scripts.pory"
	lockall
# 244 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 245 "data/maps/PewterCity/scripts.pory"
	goto PewterCity_EventScript_GymGuideTrigger
# 246 "data/maps/PewterCity/scripts.pory"
	end
# 247 "data/maps/PewterCity/scripts.pory"

# 248 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_GymGuideTrigger::
# 249 "data/maps/PewterCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 250 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_BrocksLookingForChallengersFollowMe
# 251 "data/maps/PewterCity/scripts.pory"
	closemessage
# 252 "data/maps/PewterCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 253 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PewterCity_EventScript_WalkToGymTop
# 254 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_WalkToGymMid
# 255 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_WalkToGymBottom
# 256 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_GoTakeOnBrock
# 257 "data/maps/PewterCity/scripts.pory"
	closemessage
# 258 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GymGuideExit
# 259 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 260 "data/maps/PewterCity/scripts.pory"
	fadedefaultbgm
# 261 "data/maps/PewterCity/scripts.pory"
    removeobject LOCALID_PEWTER_GYM_GUIDE
# 262 "data/maps/PewterCity/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 263 "data/maps/PewterCity/scripts.pory"
	releaseall
# 264 "data/maps/PewterCity/scripts.pory"
	end
# 265 "data/maps/PewterCity/scripts.pory"

# 266 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_WalkToGymTop::
# 267 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadTop
# 268 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 269 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymTop
# 270 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymTop
# 271 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 272 "data/maps/PewterCity/scripts.pory"
	return
# 273 "data/maps/PewterCity/scripts.pory"

# 274 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_WalkToGymMid::
# 275 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadMid
# 276 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 277 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymMid
# 278 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymMid
# 279 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 280 "data/maps/PewterCity/scripts.pory"
	return
# 281 "data/maps/PewterCity/scripts.pory"

# 282 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_WalkToGymBottom::
# 283 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideMoveToLeadBottom
# 284 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 285 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymBottom
# 286 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymBottom
# 287 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 288 "data/maps/PewterCity/scripts.pory"
	return
# 289 "data/maps/PewterCity/scripts.pory"

# 290 "data/maps/PewterCity/scripts.pory"
@ Unused
# 291 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_WalkToGymRight::
# 292 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideApproachPlayerRight
# 293 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 294 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToGymRight
# 295 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_GYM_GUIDE, PewterCity_Movement_GuideWalkToGymRight
# 296 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 297 "data/maps/PewterCity/scripts.pory"
	return
# 298 "data/maps/PewterCity/scripts.pory"

# 299 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymTop::
# 300 "data/maps/PewterCity/scripts.pory"
	walk_left
# 301 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 302 "data/maps/PewterCity/scripts.pory"
	step_end
# 303 "data/maps/PewterCity/scripts.pory"

# 304 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymMid::
# 305 "data/maps/PewterCity/scripts.pory"
	walk_up
# 306 "data/maps/PewterCity/scripts.pory"
	walk_left
# 307 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 308 "data/maps/PewterCity/scripts.pory"
	step_end
# 309 "data/maps/PewterCity/scripts.pory"

# 310 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymBottom::
# 311 "data/maps/PewterCity/scripts.pory"
	walk_up
# 312 "data/maps/PewterCity/scripts.pory"
	walk_up
# 313 "data/maps/PewterCity/scripts.pory"
	walk_left
# 314 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 315 "data/maps/PewterCity/scripts.pory"
	step_end
# 316 "data/maps/PewterCity/scripts.pory"

# 317 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToGymRight::
# 318 "data/maps/PewterCity/scripts.pory"
	walk_left
# 319 "data/maps/PewterCity/scripts.pory"
	walk_left
# 320 "data/maps/PewterCity/scripts.pory"
	walk_left
# 321 "data/maps/PewterCity/scripts.pory"
	walk_left
# 322 "data/maps/PewterCity/scripts.pory"
	walk_up
# 323 "data/maps/PewterCity/scripts.pory"
	walk_left
# 324 "data/maps/PewterCity/scripts.pory"
	walk_left
# 325 "data/maps/PewterCity/scripts.pory"
	walk_left
# 326 "data/maps/PewterCity/scripts.pory"
	walk_up
# 327 "data/maps/PewterCity/scripts.pory"
	walk_up
# 328 "data/maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 329 "data/maps/PewterCity/scripts.pory"
	step_end
# 330 "data/maps/PewterCity/scripts.pory"

# 331 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadTop::
# 332 "data/maps/PewterCity/scripts.pory"
	walk_left
# 333 "data/maps/PewterCity/scripts.pory"
	walk_down
# 334 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_right
# 335 "data/maps/PewterCity/scripts.pory"
	walk_in_place_right
# 336 "data/maps/PewterCity/scripts.pory"
	step_end
# 337 "data/maps/PewterCity/scripts.pory"

# 338 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadMid::
# 339 "data/maps/PewterCity/scripts.pory"
	walk_down
# 340 "data/maps/PewterCity/scripts.pory"
	walk_in_place_down
# 341 "data/maps/PewterCity/scripts.pory"
	step_end
# 342 "data/maps/PewterCity/scripts.pory"

# 343 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideMoveToLeadBottom::
# 344 "data/maps/PewterCity/scripts.pory"
	walk_down
# 345 "data/maps/PewterCity/scripts.pory"
	walk_down
# 346 "data/maps/PewterCity/scripts.pory"
	walk_in_place_down
# 347 "data/maps/PewterCity/scripts.pory"
	step_end
# 348 "data/maps/PewterCity/scripts.pory"

# 349 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideApproachPlayerRight::
# 350 "data/maps/PewterCity/scripts.pory"
	walk_down
# 351 "data/maps/PewterCity/scripts.pory"
	walk_down
# 352 "data/maps/PewterCity/scripts.pory"
	walk_right
# 353 "data/maps/PewterCity/scripts.pory"
	walk_down
# 354 "data/maps/PewterCity/scripts.pory"
	walk_right
# 355 "data/maps/PewterCity/scripts.pory"
	walk_in_place_right
# 356 "data/maps/PewterCity/scripts.pory"
	step_end
# 357 "data/maps/PewterCity/scripts.pory"

# 358 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymTop::
# 359 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 360 "data/maps/PewterCity/scripts.pory"
	walk_right
# 361 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 362 "data/maps/PewterCity/scripts.pory"
	step_end
# 363 "data/maps/PewterCity/scripts.pory"

# 364 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymMid::
# 365 "data/maps/PewterCity/scripts.pory"
	walk_left
# 366 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 367 "data/maps/PewterCity/scripts.pory"
	walk_right
# 368 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 369 "data/maps/PewterCity/scripts.pory"
	step_end
# 370 "data/maps/PewterCity/scripts.pory"

# 371 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymBottom::
# 372 "data/maps/PewterCity/scripts.pory"
	walk_up
# 373 "data/maps/PewterCity/scripts.pory"
	walk_left
# 374 "data/maps/PewterCity/scripts.pory"
	walk_to_gym
# 375 "data/maps/PewterCity/scripts.pory"
	walk_right
# 376 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 377 "data/maps/PewterCity/scripts.pory"
	step_end
# 378 "data/maps/PewterCity/scripts.pory"

# 379 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToGymRight::
# 380 "data/maps/PewterCity/scripts.pory"
	walk_left
# 381 "data/maps/PewterCity/scripts.pory"
	walk_left
# 382 "data/maps/PewterCity/scripts.pory"
	walk_left
# 383 "data/maps/PewterCity/scripts.pory"
	walk_up
# 384 "data/maps/PewterCity/scripts.pory"
	walk_left
# 385 "data/maps/PewterCity/scripts.pory"
	walk_left
# 386 "data/maps/PewterCity/scripts.pory"
	walk_left
# 387 "data/maps/PewterCity/scripts.pory"
	walk_up
# 388 "data/maps/PewterCity/scripts.pory"
	walk_up
# 389 "data/maps/PewterCity/scripts.pory"
	walk_to_gym_alt
# 390 "data/maps/PewterCity/scripts.pory"
	walk_right
# 391 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_left
# 392 "data/maps/PewterCity/scripts.pory"
	step_end
# 393 "data/maps/PewterCity/scripts.pory"

# 394 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_Lass::
# 395 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ClefairyCameFromMoon, MSGBOX_NPC
# 396 "data/maps/PewterCity/scripts.pory"
	end
# 397 "data/maps/PewterCity/scripts.pory"

# 398 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_MuseumGuide::
# 399 "data/maps/PewterCity/scripts.pory"
	lock
# 400 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 401 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_DidYouCheckOutMuseum, MSGBOX_YESNO
# 402 "data/maps/PewterCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_EventScript_CheckedOutMuseum
# 403 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ReallyYouHaveToGo
# 404 "data/maps/PewterCity/scripts.pory"
	closemessage
# 405 "data/maps/PewterCity/scripts.pory"
	delay 10
# 406 "data/maps/PewterCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 407 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PewterCity_EventScript_LeadToMuseumNorth
# 408 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PewterCity_EventScript_LeadToMuseumSouth
# 409 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PewterCity_EventScript_LeadToMuseumWest
# 410 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PewterCity_EventScript_LeadToMuseumEast
# 411 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ThisIsTheMuseum
# 412 "data/maps/PewterCity/scripts.pory"
	closemessage
# 413 "data/maps/PewterCity/scripts.pory"
	delay 10
# 414 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_MuseumGuideExit
# 415 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 416 "data/maps/PewterCity/scripts.pory"
	fadedefaultbgm
# 417 "data/maps/PewterCity/scripts.pory"
	removeobject LOCALID_PEWTER_MUSEUM_GUIDE
# 418 "data/maps/PewterCity/scripts.pory"
	clearflag FLAG_HIDE_PEWTER_MUSEUM_GUIDE
# 419 "data/maps/PewterCity/scripts.pory"
	release
# 420 "data/maps/PewterCity/scripts.pory"
	end
# 421 "data/maps/PewterCity/scripts.pory"

# 422 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_LeadToMuseumNorth::
# 423 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumNorth
# 424 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumNorth
# 425 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 426 "data/maps/PewterCity/scripts.pory"
	return
# 427 "data/maps/PewterCity/scripts.pory"

# 428 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_LeadToMuseumSouth::
# 429 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumSouth
# 430 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumSouth
# 431 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 432 "data/maps/PewterCity/scripts.pory"
	return
# 433 "data/maps/PewterCity/scripts.pory"

# 434 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_LeadToMuseumWest::
# 435 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumWest
# 436 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumWest
# 437 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 438 "data/maps/PewterCity/scripts.pory"
	return
# 439 "data/maps/PewterCity/scripts.pory"

# 440 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_LeadToMuseumEast::
# 441 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_MUSEUM_GUIDE, PewterCity_Movement_GuideWalkToMuseumEast
# 442 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, PewterCity_Movement_PlayerWalkToMuseumEast
# 443 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 444 "data/maps/PewterCity/scripts.pory"
	return
# 445 "data/maps/PewterCity/scripts.pory"

# 446 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_CheckedOutMuseum::
# 447 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_WerentThoseFossilsAmazing
# 448 "data/maps/PewterCity/scripts.pory"
	release
# 449 "data/maps/PewterCity/scripts.pory"
	end
# 450 "data/maps/PewterCity/scripts.pory"

# 451 "data/maps/PewterCity/scripts.pory"
.macro walk_to_museum
# 452 "data/maps/PewterCity/scripts.pory"
	walk_up
# 453 "data/maps/PewterCity/scripts.pory"
	walk_up
# 454 "data/maps/PewterCity/scripts.pory"
	walk_up
# 455 "data/maps/PewterCity/scripts.pory"
	walk_up
# 456 "data/maps/PewterCity/scripts.pory"
	walk_left
# 457 "data/maps/PewterCity/scripts.pory"
	walk_left
# 458 "data/maps/PewterCity/scripts.pory"
	walk_left
# 459 "data/maps/PewterCity/scripts.pory"
	walk_left
# 460 "data/maps/PewterCity/scripts.pory"
	walk_left
# 461 "data/maps/PewterCity/scripts.pory"
	walk_left
# 462 "data/maps/PewterCity/scripts.pory"
	walk_left
# 463 "data/maps/PewterCity/scripts.pory"
	walk_left
# 464 "data/maps/PewterCity/scripts.pory"
	walk_left
# 465 "data/maps/PewterCity/scripts.pory"
	walk_left
# 466 "data/maps/PewterCity/scripts.pory"
	walk_up
# 467 "data/maps/PewterCity/scripts.pory"
	walk_up
# 468 "data/maps/PewterCity/scripts.pory"
	walk_up
# 469 "data/maps/PewterCity/scripts.pory"
	walk_up
# 470 "data/maps/PewterCity/scripts.pory"
	walk_left
# 471 "data/maps/PewterCity/scripts.pory"
	walk_left
# 472 "data/maps/PewterCity/scripts.pory"
	walk_left
# 473 "data/maps/PewterCity/scripts.pory"
	walk_left
# 474 "data/maps/PewterCity/scripts.pory"
	walk_left
# 475 "data/maps/PewterCity/scripts.pory"
	walk_left
# 476 "data/maps/PewterCity/scripts.pory"
.endm
# 477 "data/maps/PewterCity/scripts.pory"

# 478 "data/maps/PewterCity/scripts.pory"
.macro walk_to_museum_south
# 479 "data/maps/PewterCity/scripts.pory"
	walk_up
# 480 "data/maps/PewterCity/scripts.pory"
	walk_up
# 481 "data/maps/PewterCity/scripts.pory"
	walk_up
# 482 "data/maps/PewterCity/scripts.pory"
	walk_left
# 483 "data/maps/PewterCity/scripts.pory"
	walk_left
# 484 "data/maps/PewterCity/scripts.pory"
	walk_left
# 485 "data/maps/PewterCity/scripts.pory"
	walk_left
# 486 "data/maps/PewterCity/scripts.pory"
	walk_left
# 487 "data/maps/PewterCity/scripts.pory"
	walk_left
# 488 "data/maps/PewterCity/scripts.pory"
	walk_left
# 489 "data/maps/PewterCity/scripts.pory"
	walk_left
# 490 "data/maps/PewterCity/scripts.pory"
	walk_left
# 491 "data/maps/PewterCity/scripts.pory"
	walk_up
# 492 "data/maps/PewterCity/scripts.pory"
	walk_up
# 493 "data/maps/PewterCity/scripts.pory"
	walk_up
# 494 "data/maps/PewterCity/scripts.pory"
	walk_up
# 495 "data/maps/PewterCity/scripts.pory"
	walk_left
# 496 "data/maps/PewterCity/scripts.pory"
	walk_left
# 497 "data/maps/PewterCity/scripts.pory"
	walk_left
# 498 "data/maps/PewterCity/scripts.pory"
	walk_left
# 499 "data/maps/PewterCity/scripts.pory"
	walk_left
# 500 "data/maps/PewterCity/scripts.pory"
	walk_left
# 501 "data/maps/PewterCity/scripts.pory"
.endm
# 502 "data/maps/PewterCity/scripts.pory"

# 503 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumNorth::
# 504 "data/maps/PewterCity/scripts.pory"
	walk_up
# 505 "data/maps/PewterCity/scripts.pory"
	walk_to_museum
# 506 "data/maps/PewterCity/scripts.pory"
	delay_8
# 507 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 508 "data/maps/PewterCity/scripts.pory"
	step_end
# 509 "data/maps/PewterCity/scripts.pory"

# 510 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumNorth::
# 511 "data/maps/PewterCity/scripts.pory"
	walk_to_museum
# 512 "data/maps/PewterCity/scripts.pory"
	walk_left
# 513 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 514 "data/maps/PewterCity/scripts.pory"
	step_end
# 515 "data/maps/PewterCity/scripts.pory"

# 516 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumSouth::
# 517 "data/maps/PewterCity/scripts.pory"
	delay_16
# 518 "data/maps/PewterCity/scripts.pory"
	delay_16
# 519 "data/maps/PewterCity/scripts.pory"
	walk_left
# 520 "data/maps/PewterCity/scripts.pory"
	walk_to_museum_south
# 521 "data/maps/PewterCity/scripts.pory"
	delay_8
# 522 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 523 "data/maps/PewterCity/scripts.pory"
	step_end
# 524 "data/maps/PewterCity/scripts.pory"

# 525 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumSouth::
# 526 "data/maps/PewterCity/scripts.pory"
	walk_left
# 527 "data/maps/PewterCity/scripts.pory"
	walk_up
# 528 "data/maps/PewterCity/scripts.pory"
	walk_to_museum_south
# 529 "data/maps/PewterCity/scripts.pory"
	walk_left
# 530 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 531 "data/maps/PewterCity/scripts.pory"
	step_end
# 532 "data/maps/PewterCity/scripts.pory"

# 533 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumWest::
# 534 "data/maps/PewterCity/scripts.pory"
	walk_left
# 535 "data/maps/PewterCity/scripts.pory"
	walk_to_museum
# 536 "data/maps/PewterCity/scripts.pory"
	delay_8
# 537 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 538 "data/maps/PewterCity/scripts.pory"
	step_end
# 539 "data/maps/PewterCity/scripts.pory"

# 540 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumWest::
# 541 "data/maps/PewterCity/scripts.pory"
	walk_to_museum
# 542 "data/maps/PewterCity/scripts.pory"
	walk_left
# 543 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 544 "data/maps/PewterCity/scripts.pory"
	step_end
# 545 "data/maps/PewterCity/scripts.pory"

# 546 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_PlayerWalkToMuseumEast::
# 547 "data/maps/PewterCity/scripts.pory"
	walk_right
# 548 "data/maps/PewterCity/scripts.pory"
	walk_to_museum
# 549 "data/maps/PewterCity/scripts.pory"
	delay_8
# 550 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 551 "data/maps/PewterCity/scripts.pory"
	step_end
# 552 "data/maps/PewterCity/scripts.pory"

# 553 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_GuideWalkToMuseumEast::
# 554 "data/maps/PewterCity/scripts.pory"
	walk_to_museum
# 555 "data/maps/PewterCity/scripts.pory"
	walk_left
# 556 "data/maps/PewterCity/scripts.pory"
	walk_in_place_faster_up
# 557 "data/maps/PewterCity/scripts.pory"
	step_end
# 558 "data/maps/PewterCity/scripts.pory"

# 559 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_MuseumGuideExit::
# 560 "data/maps/PewterCity/scripts.pory"
	walk_down
# 561 "data/maps/PewterCity/scripts.pory"
	walk_right
# 562 "data/maps/PewterCity/scripts.pory"
	walk_right
# 563 "data/maps/PewterCity/scripts.pory"
	walk_right
# 564 "data/maps/PewterCity/scripts.pory"
	walk_right
# 565 "data/maps/PewterCity/scripts.pory"
	walk_right
# 566 "data/maps/PewterCity/scripts.pory"
	walk_right
# 567 "data/maps/PewterCity/scripts.pory"
	walk_right
# 568 "data/maps/PewterCity/scripts.pory"
	walk_down
# 569 "data/maps/PewterCity/scripts.pory"
	walk_down
# 570 "data/maps/PewterCity/scripts.pory"
	walk_down
# 571 "data/maps/PewterCity/scripts.pory"
	walk_right
# 572 "data/maps/PewterCity/scripts.pory"
	walk_right
# 573 "data/maps/PewterCity/scripts.pory"
	walk_right
# 574 "data/maps/PewterCity/scripts.pory"
	step_end
# 575 "data/maps/PewterCity/scripts.pory"

# 576 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_FatMan::
# 577 "data/maps/PewterCity/scripts.pory"
	lock
# 578 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 579 "data/maps/PewterCity/scripts.pory"
	famechecker FAMECHECKER_BROCK, 2
# 580 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_BrockOnlySeriousTrainerHere
# 581 "data/maps/PewterCity/scripts.pory"
	release
# 582 "data/maps/PewterCity/scripts.pory"
	end
# 583 "data/maps/PewterCity/scripts.pory"

# 584 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_BugCatcher::
# 585 "data/maps/PewterCity/scripts.pory"
	lock
# 586 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 587 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_DoYouKnowWhatImDoing, MSGBOX_YESNO
# 588 "data/maps/PewterCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_EventScript_KnowWhatTheyreDoing
# 589 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_SprayingRepelToKeepWildMonsOut
# 590 "data/maps/PewterCity/scripts.pory"
	release
# 591 "data/maps/PewterCity/scripts.pory"
	end
# 592 "data/maps/PewterCity/scripts.pory"

# 593 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_KnowWhatTheyreDoing::
# 594 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ThatsRightItsHardWork
# 595 "data/maps/PewterCity/scripts.pory"
	release
# 596 "data/maps/PewterCity/scripts.pory"
	end
# 597 "data/maps/PewterCity/scripts.pory"

# 598 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_TrainerTips::
# 599 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_TrainerTipsEarningEXP, MSGBOX_SIGN
# 600 "data/maps/PewterCity/scripts.pory"
	end
# 601 "data/maps/PewterCity/scripts.pory"

# 602 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_PoliceNotice::
# 603 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_CallPoliceIfInfoOnThieves, MSGBOX_SIGN
# 604 "data/maps/PewterCity/scripts.pory"
	end
# 605 "data/maps/PewterCity/scripts.pory"

# 606 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_MuseumSign::
# 607 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_MuseumOfScience, MSGBOX_SIGN
# 608 "data/maps/PewterCity/scripts.pory"
	end
# 609 "data/maps/PewterCity/scripts.pory"

# 610 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_GymSign::
# 611 "data/maps/PewterCity/scripts.pory"
	lockall
# 612 "data/maps/PewterCity/scripts.pory"
	famechecker FAMECHECKER_BROCK, 0
# 613 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_GymSign
# 614 "data/maps/PewterCity/scripts.pory"
	releaseall
# 615 "data/maps/PewterCity/scripts.pory"
	end
# 616 "data/maps/PewterCity/scripts.pory"

# 617 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_CitySign::
# 618 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_CitySign, MSGBOX_SIGN
# 619 "data/maps/PewterCity/scripts.pory"
	end
# 620 "data/maps/PewterCity/scripts.pory"

# 621 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_RunningShoesAide::
# 622 "data/maps/PewterCity/scripts.pory"
	lock
# 623 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 624 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 0
# 625 "data/maps/PewterCity/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 626 "data/maps/PewterCity/scripts.pory"
	release
# 627 "data/maps/PewterCity/scripts.pory"
	end
# 628 "data/maps/PewterCity/scripts.pory"

# 629 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_RunningShoesAideTriggerTop::
# 630 "data/maps/PewterCity/scripts.pory"
	lockall
# 631 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 632 "data/maps/PewterCity/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 633 "data/maps/PewterCity/scripts.pory"
	releaseall
# 634 "data/maps/PewterCity/scripts.pory"
	end
# 635 "data/maps/PewterCity/scripts.pory"

# 636 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_RunningShoesAideTriggerMid::
# 637 "data/maps/PewterCity/scripts.pory"
	lockall
# 638 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 2
# 639 "data/maps/PewterCity/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 640 "data/maps/PewterCity/scripts.pory"
	releaseall
# 641 "data/maps/PewterCity/scripts.pory"
	end
# 642 "data/maps/PewterCity/scripts.pory"

# 643 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_RunningShoesAideTriggerBottom::
# 644 "data/maps/PewterCity/scripts.pory"
	lockall
# 645 "data/maps/PewterCity/scripts.pory"
	setvar VAR_TEMP_1, 3
# 646 "data/maps/PewterCity/scripts.pory"
	call PewterCity_EventScript_AideGiveRunningShoes
# 647 "data/maps/PewterCity/scripts.pory"
	releaseall
# 648 "data/maps/PewterCity/scripts.pory"
	end
# 649 "data/maps/PewterCity/scripts.pory"

# 650 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideGiveRunningShoes::
# 651 "data/maps/PewterCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 652 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_AideNoticePlayer
# 653 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_AideNoticePlayer
# 654 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, PewterCity_EventScript_AideNoticePlayer
# 655 "data/maps/PewterCity/scripts.pory"
	waitse
# 656 "data/maps/PewterCity/scripts.pory"
	playse SE_PIN
# 657 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, Common_Movement_ExclamationMark
# 658 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 659 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, Common_Movement_Delay48
# 660 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 661 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_OhPlayer
# 662 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PewterCity_EventScript_AideApproachPlayer0
# 663 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_AideApproachPlayer1
# 664 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_AideApproachPlayer2
# 665 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, PewterCity_EventScript_AideApproachPlayer3
# 666 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_AskedToDeliverThis
# 667 "data/maps/PewterCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 668 "data/maps/PewterCity/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 669 "data/maps/PewterCity/scripts.pory"
	message PewterCity_Text_ReceivedRunningShoesFromAide
# 670 "data/maps/PewterCity/scripts.pory"
	waitmessage
# 671 "data/maps/PewterCity/scripts.pory"
	waitfanfare
# 672 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_SwitchedShoesWithRunningShoes
# 673 "data/maps/PewterCity/scripts.pory"
	special DisableMsgBoxWalkaway
# 674 "data/maps/PewterCity/scripts.pory"
	signmsg
# 675 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_ExplainRunningShoes
# 676 "data/maps/PewterCity/scripts.pory"
	normalmsg
# 677 "data/maps/PewterCity/scripts.pory"
	call EventScript_RestorePrevTextColor
# 678 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_MustBeGoingBackToLab
# 679 "data/maps/PewterCity/scripts.pory"
	closemessage
# 680 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PewterCity_EventScript_AideExit0
# 681 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PewterCity_EventScript_AideExit1
# 682 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, PewterCity_EventScript_AideExit2
# 683 "data/maps/PewterCity/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, PewterCity_EventScript_AideExit3
# 684 "data/maps/PewterCity/scripts.pory"
	delay 30
# 685 "data/maps/PewterCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 686 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Text_RunningShoesLetterFromMom
# 687 "data/maps/PewterCity/scripts.pory"
	closemessage
# 688 "data/maps/PewterCity/scripts.pory"
	removeobject LOCALID_PEWTER_AIDE
# 689 "data/maps/PewterCity/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 690 "data/maps/PewterCity/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY, 2
# 691 "data/maps/PewterCity/scripts.pory"
	return
# 692 "data/maps/PewterCity/scripts.pory"

# 693 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideNoticePlayer::
# 694 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, Common_Movement_WalkInPlaceFasterDown
# 695 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 696 "data/maps/PewterCity/scripts.pory"
	return
# 697 "data/maps/PewterCity/scripts.pory"

# 698 "data/maps/PewterCity/scripts.pory"
@ Aide already at player
# 699 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideApproachPlayer0::
# 700 "data/maps/PewterCity/scripts.pory"
	closemessage
# 701 "data/maps/PewterCity/scripts.pory"
	delay 20
# 702 "data/maps/PewterCity/scripts.pory"
	return
# 703 "data/maps/PewterCity/scripts.pory"

# 704 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideApproachPlayer1::
# 705 "data/maps/PewterCity/scripts.pory"
	closemessage
# 706 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 707 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 708 "data/maps/PewterCity/scripts.pory"
	return
# 709 "data/maps/PewterCity/scripts.pory"

# 710 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideApproachPlayer2::
# 711 "data/maps/PewterCity/scripts.pory"
	closemessage
# 712 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideApproachPlayerMid
# 713 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 714 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 715 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 716 "data/maps/PewterCity/scripts.pory"
	return
# 717 "data/maps/PewterCity/scripts.pory"

# 718 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideApproachPlayer3::
# 719 "data/maps/PewterCity/scripts.pory"
	closemessage
# 720 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideApproachPlayerBottom
# 721 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 722 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 723 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 724 "data/maps/PewterCity/scripts.pory"
	return
# 725 "data/maps/PewterCity/scripts.pory"

# 726 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideExit0::
# 727 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit0
# 728 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 729 "data/maps/PewterCity/scripts.pory"
	return
# 730 "data/maps/PewterCity/scripts.pory"

# 731 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideExit1::
# 732 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit1
# 733 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 734 "data/maps/PewterCity/scripts.pory"
	return
# 735 "data/maps/PewterCity/scripts.pory"

# 736 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideExit2::
# 737 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit2
# 738 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 739 "data/maps/PewterCity/scripts.pory"
	return
# 740 "data/maps/PewterCity/scripts.pory"

# 741 "data/maps/PewterCity/scripts.pory"
PewterCity_EventScript_AideExit3::
# 742 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_PEWTER_AIDE, PewterCity_Movement_AideExit3
# 743 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 744 "data/maps/PewterCity/scripts.pory"
	return
# 745 "data/maps/PewterCity/scripts.pory"

# 746 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideApproachPlayerMid::
# 747 "data/maps/PewterCity/scripts.pory"
	delay_4
# 748 "data/maps/PewterCity/scripts.pory"
	walk_down
# 749 "data/maps/PewterCity/scripts.pory"
	step_end
# 750 "data/maps/PewterCity/scripts.pory"

# 751 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideApproachPlayerBottom::
# 752 "data/maps/PewterCity/scripts.pory"
	delay_4
# 753 "data/maps/PewterCity/scripts.pory"
	walk_down
# 754 "data/maps/PewterCity/scripts.pory"
	walk_down
# 755 "data/maps/PewterCity/scripts.pory"
	step_end
# 756 "data/maps/PewterCity/scripts.pory"

# 757 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideExit0::
# 758 "data/maps/PewterCity/scripts.pory"
	walk_down
# 759 "data/maps/PewterCity/scripts.pory"
	walk_left
# 760 "data/maps/PewterCity/scripts.pory"
	walk_left
# 761 "data/maps/PewterCity/scripts.pory"
	walk_left
# 762 "data/maps/PewterCity/scripts.pory"
	walk_left
# 763 "data/maps/PewterCity/scripts.pory"
	walk_left
# 764 "data/maps/PewterCity/scripts.pory"
	walk_left
# 765 "data/maps/PewterCity/scripts.pory"
	walk_left
# 766 "data/maps/PewterCity/scripts.pory"
	walk_left
# 767 "data/maps/PewterCity/scripts.pory"
	walk_left
# 768 "data/maps/PewterCity/scripts.pory"
	step_end
# 769 "data/maps/PewterCity/scripts.pory"

# 770 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideExit1::
# 771 "data/maps/PewterCity/scripts.pory"
	walk_left
# 772 "data/maps/PewterCity/scripts.pory"
	walk_down
# 773 "data/maps/PewterCity/scripts.pory"
	walk_left
# 774 "data/maps/PewterCity/scripts.pory"
	walk_left
# 775 "data/maps/PewterCity/scripts.pory"
	walk_left
# 776 "data/maps/PewterCity/scripts.pory"
	walk_left
# 777 "data/maps/PewterCity/scripts.pory"
	walk_left
# 778 "data/maps/PewterCity/scripts.pory"
	walk_left
# 779 "data/maps/PewterCity/scripts.pory"
	walk_left
# 780 "data/maps/PewterCity/scripts.pory"
	walk_left
# 781 "data/maps/PewterCity/scripts.pory"
	step_end
# 782 "data/maps/PewterCity/scripts.pory"

# 783 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideExit2::
# 784 "data/maps/PewterCity/scripts.pory"
	walk_left
# 785 "data/maps/PewterCity/scripts.pory"
	walk_left
# 786 "data/maps/PewterCity/scripts.pory"
	walk_left
# 787 "data/maps/PewterCity/scripts.pory"
	walk_left
# 788 "data/maps/PewterCity/scripts.pory"
	walk_left
# 789 "data/maps/PewterCity/scripts.pory"
	walk_left
# 790 "data/maps/PewterCity/scripts.pory"
	walk_left
# 791 "data/maps/PewterCity/scripts.pory"
	walk_left
# 792 "data/maps/PewterCity/scripts.pory"
	walk_left
# 793 "data/maps/PewterCity/scripts.pory"
	step_end
# 794 "data/maps/PewterCity/scripts.pory"

# 795 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_AideExit3::
# 796 "data/maps/PewterCity/scripts.pory"
	walk_left
# 797 "data/maps/PewterCity/scripts.pory"
	walk_left
# 798 "data/maps/PewterCity/scripts.pory"
	walk_left
# 799 "data/maps/PewterCity/scripts.pory"
	walk_left
# 800 "data/maps/PewterCity/scripts.pory"
	walk_left
# 801 "data/maps/PewterCity/scripts.pory"
	walk_left
# 802 "data/maps/PewterCity/scripts.pory"
	walk_left
# 803 "data/maps/PewterCity/scripts.pory"
	walk_left
# 804 "data/maps/PewterCity/scripts.pory"
	walk_left
# 805 "data/maps/PewterCity/scripts.pory"
	step_end
# 806 "data/maps/PewterCity/scripts.pory"

# 807 "data/maps/PewterCity/scripts.pory"
@ Unused
# 808 "data/maps/PewterCity/scripts.pory"
PewterCity_Movement_WalkInPlaceLeft::
# 809 "data/maps/PewterCity/scripts.pory"
	walk_in_place_left
# 810 "data/maps/PewterCity/scripts.pory"
	step_end

PewterCity_EventScript_Youngster::
# 821 "data/maps/PewterCity/scripts.pory"
	lock
# 822 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 823 "data/maps/PewterCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 824 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_EventScript_Youngster_Text_0
# 825 "data/maps/PewterCity/scripts.pory"
	waitmessage
# 826 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_EventScript_Youngster_Text_1, MSGBOX_YESNO
# 827 "data/maps/PewterCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PewterCity_EventScript_Hudson
# 828 "data/maps/PewterCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PewterCity_EventScript_DeclineToBattle
# 829 "data/maps/PewterCity/scripts.pory"
	closemessage
# 830 "data/maps/PewterCity/scripts.pory"
	face_up
# 831 "data/maps/PewterCity/scripts.pory"
	releaseall
	return


PewterCity_EventScript_Hudson::
# 835 "data/maps/PewterCity/scripts.pory"
	cleartrainerflag TRAINER_YOUNGSTER_HUDSON
# 836 "data/maps/PewterCity/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_HUDSON, Hudson_Intro, Hudson_Outro
# 837 "data/maps/PewterCity/scripts.pory"
	msgbox Hudson_Postbattle, MSGBOX_AUTOCLOSE
# 838 "data/maps/PewterCity/scripts.pory"
	waitmessage
	end


PewterCity_EventScript_DeclineToBattle::
# 843 "data/maps/PewterCity/scripts.pory"
	lockall
# 844 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_EventScript_DeclineToBattle_Text_0
# 845 "data/maps/PewterCity/scripts.pory"
	waitmessage
# 846 "data/maps/PewterCity/scripts.pory"
	closemessage
# 847 "data/maps/PewterCity/scripts.pory"
	face_up
# 848 "data/maps/PewterCity/scripts.pory"
	releaseall
	return


PewterCity_EventScript_Museum_Grunt::
# 864 "data/maps/PewterCity/scripts.pory"
	lock
# 865 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 866 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_EventScript_Museum_Grunt_Text_0
# 867 "data/maps/PewterCity/scripts.pory"
	waitmessage
# 868 "data/maps/PewterCity/scripts.pory"
	closemessage
# 869 "data/maps/PewterCity/scripts.pory"
	face_down
# 870 "data/maps/PewterCity/scripts.pory"
	releaseall
	return


PewterCity_EventScript_Grunt_56::
# 874 "data/maps/PewterCity/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_56, Grunt_56_Intro, Grunt_56_Outro
# 875 "data/maps/PewterCity/scripts.pory"
	msgbox Grunt_56_Postbattle, MSGBOX_AUTOCLOSE
# 876 "data/maps/PewterCity/scripts.pory"
	waitmessage
	end


PewterCity_EventScript_Grunt_57::
# 893 "data/maps/PewterCity/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_57, Grunt_57_Intro, Grunt_57_Outro
# 894 "data/maps/PewterCity/scripts.pory"
	msgbox Grunt_57_Postbattle, MSGBOX_AUTOCLOSE
# 895 "data/maps/PewterCity/scripts.pory"
	waitmessage
	end


PewterCity_EventScript_Grunt_58::
# 912 "data/maps/PewterCity/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_58, Grunt_58_Intro, Grunt_58_Outro
# 913 "data/maps/PewterCity/scripts.pory"
	msgbox Grunt_58_Postbattle, MSGBOX_AUTOCLOSE
# 914 "data/maps/PewterCity/scripts.pory"
	waitmessage
	end


PewterCity_EventScript_Grunts_1::
# 931 "data/maps/PewterCity/scripts.pory"
	trainerbattle_double TRAINER_TEAM_ROCKET_GRUNTS_1, Grunts_1_Intro, Grunts_1_Outro, Grunts_1_CantBattle, Grunts_1_Defeated
# 932 "data/maps/PewterCity/scripts.pory"
	lockall
# 933 "data/maps/PewterCity/scripts.pory"
	msgbox Grunts_1_Postbattle
# 934 "data/maps/PewterCity/scripts.pory"
	waitmessage
# 935 "data/maps/PewterCity/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY, 1
# 936 "data/maps/PewterCity/scripts.pory"
	setvar VAR_PEWTER_GRUNTS, 1
# 937 "data/maps/PewterCity/scripts.pory"
	setflag FLAG_GRUNTS_1
# 938 "data/maps/PewterCity/scripts.pory"
	setflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 939 "data/maps/PewterCity/scripts.pory"
	releaseall
	return


Grunts_1_Defeated::
# 943 "data/maps/PewterCity/scripts.pory"
	lockall
# 944 "data/maps/PewterCity/scripts.pory"
	msgbox Grunts_1_Postbattle
# 945 "data/maps/PewterCity/scripts.pory"
	waitmessage
# 946 "data/maps/PewterCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 947 "data/maps/PewterCity/scripts.pory"
	removeobject LOCALID_GRUNT_F
# 948 "data/maps/PewterCity/scripts.pory"
	removeobject LOCALID_GRUNT_M
# 949 "data/maps/PewterCity/scripts.pory"
	removeobject LOCALID_GRUNT_58
# 950 "data/maps/PewterCity/scripts.pory"
	removeobject LOCALID_GRUNT_57
# 951 "data/maps/PewterCity/scripts.pory"
	removeobject LOCALID_GRUNT_56
# 952 "data/maps/PewterCity/scripts.pory"
	setvar VAR_MAP_SCENE_PEWTER_CITY, 1
# 953 "data/maps/PewterCity/scripts.pory"
	setvar VAR_PEWTER_GRUNTS, 1
# 954 "data/maps/PewterCity/scripts.pory"
	setflag FLAG_GRUNTS_1
# 955 "data/maps/PewterCity/scripts.pory"
	setflag FLAG_HIDE_PEWTER_CITY_GYM_GUIDE
# 956 "data/maps/PewterCity/scripts.pory"
	callnative UpdateFollowingPokemon
# 957 "data/maps/PewterCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 958 "data/maps/PewterCity/scripts.pory"
	releaseall
	return


PewterCity_Trigger_BlockPath::
# 978 "data/maps/PewterCity/scripts.pory"
	lockall
# 979 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_Trigger_BlockPath_Text_0
# 980 "data/maps/PewterCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, StopPlayer
# 981 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 982 "data/maps/PewterCity/scripts.pory"
	releaseall
	return


# 985 "data/maps/PewterCity/scripts.pory"
StopPlayer:
# 986 "data/maps/PewterCity/scripts.pory"
	walk_left
	step_end

PewterCity_Trigger_Grunts_West::
# 990 "data/maps/PewterCity/scripts.pory"
	lockall
# 991 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_GRUNT_F, FaceLeft
# 992 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 993 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_GRUNT_M, WestTrigger
# 994 "data/maps/PewterCity/scripts.pory"
	waitmovement 4
# 995 "data/maps/PewterCity/scripts.pory"
	trainerbattle_double TRAINER_TEAM_ROCKET_GRUNTS_1, Grunts_1_Intro, Grunts_1_Outro, Grunts_1_CantBattle, Grunts_1_Defeated
# 996 "data/maps/PewterCity/scripts.pory"
	releaseall
	return


# 999 "data/maps/PewterCity/scripts.pory"
FaceLeft:
# 1000 "data/maps/PewterCity/scripts.pory"
	face_left
	step_end

# 1003 "data/maps/PewterCity/scripts.pory"
FaceDown:
# 1004 "data/maps/PewterCity/scripts.pory"
	face_down
	step_end

# 1007 "data/maps/PewterCity/scripts.pory"
WestTrigger:
# 1008 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 1009 "data/maps/PewterCity/scripts.pory"
	walk_left
	step_end

PewterCity_Trigger_Grunts_East::
# 1013 "data/maps/PewterCity/scripts.pory"
	lockall
# 1014 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_GRUNT_F, EastTrigger
# 1015 "data/maps/PewterCity/scripts.pory"
	waitmovement 4
# 1016 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_GRUNT_M, FaceDown
# 1017 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 1018 "data/maps/PewterCity/scripts.pory"
	trainerbattle_double TRAINER_TEAM_ROCKET_GRUNTS_1, Grunts_1_Intro, Grunts_1_Outro, Grunts_1_CantBattle, Grunts_1_Defeated
# 1019 "data/maps/PewterCity/scripts.pory"
	releaseall
	return


# 1022 "data/maps/PewterCity/scripts.pory"
EastTrigger:
# 1023 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 1024 "data/maps/PewterCity/scripts.pory"
	walk_down
	step_end

PewterCity_Trigger_Grunts_Middle::
# 1028 "data/maps/PewterCity/scripts.pory"
	lockall
# 1029 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_GRUNT_F, FaceDown
# 1030 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 1031 "data/maps/PewterCity/scripts.pory"
	applymovement LOCALID_GRUNT_M, FaceLeft
# 1032 "data/maps/PewterCity/scripts.pory"
	waitmovement 0
# 1033 "data/maps/PewterCity/scripts.pory"
	trainerbattle_double TRAINER_TEAM_ROCKET_GRUNTS_1, Grunts_1_Intro, Grunts_1_Outro, Grunts_1_CantBattle, Grunts_1_Defeated
# 1034 "data/maps/PewterCity/scripts.pory"
	releaseall
	return


PewterCity_EventScript_Scientist::
# 1038 "data/maps/PewterCity/scripts.pory"
	lockall
# 1039 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 1040 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_EventScript_Scientist_Text_0
# 1042 "data/maps/PewterCity/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1043 "data/maps/PewterCity/scripts.pory"
	removeobject LOCALID_PEWTER_SCIENTIST
# 1044 "data/maps/PewterCity/scripts.pory"
	setflag FLAG_SPOKEN_WITH_SCIENTIST
# 1045 "data/maps/PewterCity/scripts.pory"
	callnative UpdateFollowingPokemon
# 1046 "data/maps/PewterCity/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1047 "data/maps/PewterCity/scripts.pory"
	releaseall
	return


PewterCity_EventScript_Headbutt_Man::
# 1051 "data/maps/PewterCity/scripts.pory"
	goto_if_unset FLAG_LEARNED_TO_HEADBUTT, PewterCity_EventScript_Headbutt_ManLesson
# 1052 "data/maps/PewterCity/scripts.pory"
	goto_if_set FLAG_LEARNED_TO_HEADBUTT, PewterCity_EventScript_Headbutt_ManChat
# 1053 "data/maps/PewterCity/scripts.pory"
	releaseall
	return


PewterCity_EventScript_Headbutt_ManLesson::
# 1057 "data/maps/PewterCity/scripts.pory"
	lockall
# 1058 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 1059 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_EventScript_Headbutt_ManLesson_Text_0
# 1065 "data/maps/PewterCity/scripts.pory"
	waitmessage
# 1066 "data/maps/PewterCity/scripts.pory"
	setflag FLAG_LEARNED_TO_HEADBUTT
# 1067 "data/maps/PewterCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 1068 "data/maps/PewterCity/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 1069 "data/maps/PewterCity/scripts.pory"
	message PewterCity_EventScript_Headbutt_ManLesson_Text_1
# 1070 "data/maps/PewterCity/scripts.pory"
	waitmessage
# 1071 "data/maps/PewterCity/scripts.pory"
	waitfanfare
# 1072 "data/maps/PewterCity/scripts.pory"
	releaseall
	return


PewterCity_EventScript_Headbutt_ManChat::
# 1076 "data/maps/PewterCity/scripts.pory"
	lockall
# 1077 "data/maps/PewterCity/scripts.pory"
	faceplayer
# 1078 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_EventScript_Headbutt_ManChat_Text_0
# 1080 "data/maps/PewterCity/scripts.pory"
	delay 20
# 1081 "data/maps/PewterCity/scripts.pory"
	msgbox PewterCity_EventScript_Headbutt_ManChat_Text_1
# 1082 "data/maps/PewterCity/scripts.pory"
	releaseall
	return


PewterCity_EventScript_Youngster_Text_0:
# 824 "data/maps/PewterCity/scripts.pory"
	.string "I'm waiting for BROCK to return so\n"
	.string "that I can challenge the GYM. One\l"
	.string "of the early GYM TRAINERS\l"
	.string "defeated me on my last attempt,\l"
	.string "so I've added a WATER type to my\l"
	.string "team.$"

PewterCity_EventScript_Youngster_Text_1:
# 826 "data/maps/PewterCity/scripts.pory"
	.string "Wanna battle me while we wait for\n"
	.string "BROCK to return?$"

PewterCity_EventScript_DeclineToBattle_Text_0:
# 844 "data/maps/PewterCity/scripts.pory"
	.string "Fine then. You're probably not\n"
	.string "even good practice.$"

PewterCity_EventScript_Museum_Grunt_Text_0:
# 866 "data/maps/PewterCity/scripts.pory"
	.string "No one's allowed in here. Boss's\n"
	.string "orders.$"

PewterCity_Trigger_BlockPath_Text_0:
# 979 "data/maps/PewterCity/scripts.pory"
	.string "{PLAYER} thought to themself: I\n"
	.string "should see if VIRIDIAN GYM is\l"
	.string "unlocked.$"

PewterCity_EventScript_Scientist_Text_0:
# 1040 "data/maps/PewterCity/scripts.pory"
	.string "Thank you so much! I was just\n"
	.string "seconds away from being\l"
	.string "overwhelmed. It hurts to imagine\l"
	.string "people out there using their\l"
	.string "POKéMON to harm others. Come visit\l"
	.string "me on the second floor of PEWTER\l"
	.string "MUSEUM. I'd like to give you a\l"
	.string "token of my gratitude.$"

PewterCity_EventScript_Headbutt_ManLesson_Text_0:
# 1059 "data/maps/PewterCity/scripts.pory"
	.string "If you see a tree like this one\n"
	.string "with exposed bark underneath, you\l"
	.string "can ram your head against it like a\l"
	.string "POKéMON using an attack! I hear\l"
	.string "that over in JOHTO, people have\l"
	.string "their POKéMON do the headbutting\l"
	.string "for them. But why let the POKéMON\l"
	.string "have all the fun, eh? Bwahahaha.\l"
	.string "Anyway, be on your guard. When you\l"
	.string "headbutt a tree hard enough, a\l"
	.string "POKéMON may descend from up in\l"
	.string "the canopy!$"

PewterCity_EventScript_Headbutt_ManLesson_Text_1:
# 1069 "data/maps/PewterCity/scripts.pory"
	.string "{PLAYER} learned to headbutt trees!$"

PewterCity_EventScript_Headbutt_ManChat_Text_0:
# 1078 "data/maps/PewterCity/scripts.pory"
	.string "Don't tell anyone I taught you the\n"
	.string "headbutt technique. It's a\l"
	.string "forbidden move...$"

PewterCity_EventScript_Headbutt_ManChat_Text_1:
# 1081 "data/maps/PewterCity/scripts.pory"
	.string "...doctors are always coming up\n"
	.string "with new things to forbid.$"

PewterCity_Text_BrocksLookingForChallengersFollowMe::
# 812 "data/maps/PewterCity/scripts.pory"
	.string "You're a Trainer, right? Our town\n"
	.string "is being terrorized by some\l"
	.string "nefarious-looking folks. I hate to\l"
	.string "ask this, but I don't think we have\l"
	.string "any other choice. Follow me, I'll\l"
	.string "show you the people I'm talking\l"
	.string "about.$"

PewterCity_Text_GoTakeOnBrock::
# 816 "data/maps/PewterCity/scripts.pory"
	.string "Our town would be indebted to you\n"
	.string "if you could save our citizens\l"
	.string "from these goons.$"

Hudson_Intro::
# 851 "data/maps/PewterCity/scripts.pory"
	.string "Let's go! My new team composition\n"
	.string "is sure to win!$"

Hudson_Outro::
# 855 "data/maps/PewterCity/scripts.pory"
	.string "How could I lose?$"

Hudson_Postbattle::
# 859 "data/maps/PewterCity/scripts.pory"
	.string "You might be even stronger than\n"
	.string "BROCK. There's no way that my\l"
	.string "POKéMON are still too weak to\l"
	.string "defeat a GYM.$"

Grunt_56_Intro::
# 880 "data/maps/PewterCity/scripts.pory"
	.string "You must be that kid I heard about\n"
	.string "from Viridian forest.$"

Grunt_56_Outro::
# 884 "data/maps/PewterCity/scripts.pory"
	.string "Unbelievable.$"

Grunt_56_Postbattle::
# 888 "data/maps/PewterCity/scripts.pory"
	.string "TEAM ROCKET won't be stopped by\n"
	.string "the likes of you.$"

Grunt_57_Intro::
# 899 "data/maps/PewterCity/scripts.pory"
	.string "You've just made a big mistake.$"

Grunt_57_Outro::
# 903 "data/maps/PewterCity/scripts.pory"
	.string "...What just happened?$"

Grunt_57_Postbattle::
# 907 "data/maps/PewterCity/scripts.pory"
	.string "It's foolish to try and intervene\n"
	.string "here.$"

Grunt_58_Intro::
# 918 "data/maps/PewterCity/scripts.pory"
	.string "My lucky day!$"

Grunt_58_Outro::
# 922 "data/maps/PewterCity/scripts.pory"
	.string "How lame.$"

Grunt_58_Postbattle::
# 926 "data/maps/PewterCity/scripts.pory"
	.string "I don't understand. SIMONE said\n"
	.string "that she defeated you with ease...$"

Grunts_1_Intro::
# 961 "data/maps/PewterCity/scripts.pory"
	.string "You've crossed us for the last\n"
	.string "time!$"

Grunts_1_Outro::
# 965 "data/maps/PewterCity/scripts.pory"
	.string "This is unacceptable.$"

Grunts_1_CantBattle::
# 969 "data/maps/PewterCity/scripts.pory"
	.string "You're too short-handed to take\n"
	.string "us on, kid.$"

Grunts_1_Postbattle::
# 973 "data/maps/PewterCity/scripts.pory"
	.string "Maybe there won't be any meddling\n"
	.string "children in MT. MOON where the\l"
	.string "fossils are sourced. We ought to\l"
	.string "try that approach.$"
