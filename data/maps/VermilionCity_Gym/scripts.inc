# 1 "data/maps/VermilionCity_Gym/scripts.pory"

# 2 "data/maps/VermilionCity_Gym/scripts.pory"

# 3 "data/maps/VermilionCity_Gym/scripts.pory"
.equ FOUND_FIRST_SWITCH, FLAG_TEMP_1
# 4 "data/maps/VermilionCity_Gym/scripts.pory"
.equ SWITCH1_ID,         VAR_0x8004
# 5 "data/maps/VermilionCity_Gym/scripts.pory"
.equ SWITCH2_ID,         VAR_0x8005
# 6 "data/maps/VermilionCity_Gym/scripts.pory"
.equ TRASH_CAN_ID,       VAR_0x8008
# 7 "data/maps/VermilionCity_Gym/scripts.pory"
.equ MIDDLE_BEAM_SWITCH_1, FLAG_TEMP_2
# 8 "data/maps/VermilionCity_Gym/scripts.pory"
.equ MIDDLE_BEAM_SWITCH_2, FLAG_TEMP_3

VermilionCity_Gym_MapScripts::
# 13 "data/maps/VermilionCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VermilionCity_Gym_OnTransition
# 14 "data/maps/VermilionCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, VermilionCity_Gym_OnLoad
	.byte 0


VermilionCity_Gym_OnTransition::
# 18 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, VermilionCity_Gym_OnTransition_2
# 27 "data/maps/VermilionCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_SAILOR_DWAYNE
# 28 "data/maps/VermilionCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_SAILOR_DYLAN
# 29 "data/maps/VermilionCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_ENGINEER_BAILEY
# 30 "data/maps/VermilionCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_GUITARIST_TUCKER
# 31 "data/maps/VermilionCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_ROCKER_BROOKS
# 32 "data/maps/VermilionCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_AROMA_LADY_HAZEL
VermilionCity_Gym_OnTransition_1:
# 34 "data/maps/VermilionCity_Gym/scripts.pory"
	special HealPlayerParty
# 35 "data/maps/VermilionCity_Gym/scripts.pory"
	clearflag MIDDLE_BEAM_SWITCH_1
# 36 "data/maps/VermilionCity_Gym/scripts.pory"
	clearflag MIDDLE_BEAM_SWITCH_2
# 37 "data/maps/VermilionCity_Gym/scripts.pory"
	call VermilionCity_Gym_EventScript_SetMiddleBeamsOn
# 38 "data/maps/VermilionCity_Gym/scripts.pory"
	call VermilionCity_Gym_EventScript_SetBeamsOn
# 39 "data/maps/VermilionCity_Gym/scripts.pory"
	call VermilionCity_Gym_EventScript_InitTrashCans
# 40 "data/maps/VermilionCity_Gym/scripts.pory"
	call_if_set FOUND_FIRST_SWITCH, VermilionCity_Gym_EventScript_SetOneBeamOff
# 41 "data/maps/VermilionCity_Gym/scripts.pory"
	call_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_EventScript_SetBeamsOff
	end

VermilionCity_Gym_OnTransition_2:
# 19 "data/maps/VermilionCity_Gym/scripts.pory"
	settrainerflag TRAINER_SAILOR_DWAYNE
# 20 "data/maps/VermilionCity_Gym/scripts.pory"
	settrainerflag TRAINER_SAILOR_DYLAN
# 21 "data/maps/VermilionCity_Gym/scripts.pory"
	settrainerflag TRAINER_ENGINEER_BAILEY
# 22 "data/maps/VermilionCity_Gym/scripts.pory"
	settrainerflag TRAINER_GUITARIST_TUCKER
# 23 "data/maps/VermilionCity_Gym/scripts.pory"
	settrainerflag TRAINER_ROCKER_BROOKS
# 24 "data/maps/VermilionCity_Gym/scripts.pory"
	settrainerflag TRAINER_AROMA_LADY_HAZEL
	goto VermilionCity_Gym_OnTransition_1


# 45 "data/maps/VermilionCity_Gym/scripts.pory"

# 46 "data/maps/VermilionCity_Gym/scripts.pory"

# 47 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_OnLoad::
# 48 "data/maps/VermilionCity_Gym/scripts.pory"
	call_if_set FOUND_FIRST_SWITCH, VermilionCity_Gym_EventScript_SetOneBeamOff
# 49 "data/maps/VermilionCity_Gym/scripts.pory"
	call_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_EventScript_SetBeamsOff
# 50 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 51 "data/maps/VermilionCity_Gym/scripts.pory"

# 52 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_SetOneBeamOff::
# 53 "data/maps/VermilionCity_Gym/scripts.pory"
	@ LEFT lasers
# 54 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 3, 8, METATILE_VermilionGym_Beam_Node_TopLeft_HalfOn, 1
# 55 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 4, 8, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_HalfOn, 1
# 56 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 5, 8, METATILE_VermilionGym_Beam_MidTop_HalfOn, 1
# 57 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 6, 8, METATILE_VermilionGym_Beam_Node_TopRight_Edge_HalfOn, 1
# 58 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 7, 8, METATILE_VermilionGym_Beam_Node_TopRight_HalfOn, 1
# 59 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 3, 9, METATILE_VermilionGym_Beam_Node_BottomLeft_HalfOn, 1
# 60 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 4, 9, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_HalfOn, 1
# 61 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 5, 9, METATILE_VermilionGym_Beam_MidBottom_HalfOn, 1
# 62 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_HalfOn, 1
# 63 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 7, 9, METATILE_VermilionGym_Beam_Node_BottomRight_HalfOn, 1
# 64 "data/maps/VermilionCity_Gym/scripts.pory"

# 65 "data/maps/VermilionCity_Gym/scripts.pory"
	@ RIGHT lasers
# 66 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 25, 8, METATILE_VermilionGym_Beam_Node_TopLeft_HalfOn, 1
# 67 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 26, 8, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_HalfOn, 1
# 68 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 27, 8, METATILE_VermilionGym_Beam_MidTop_HalfOn, 1
# 69 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 28, 8, METATILE_VermilionGym_Beam_Node_TopRight_Edge_HalfOn, 1
# 70 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 29, 8, METATILE_VermilionGym_Beam_Node_TopRight_HalfOn, 1
# 71 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 25, 9, METATILE_VermilionGym_Beam_Node_BottomLeft_HalfOn, 1
# 72 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 26, 9, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_HalfOn, 1
# 73 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 27, 9, METATILE_VermilionGym_Beam_MidBottom_HalfOn, 1
# 74 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 28, 9, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_HalfOn, 1
# 75 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 29, 9, METATILE_VermilionGym_Beam_Node_BottomRight_HalfOn, 1
# 76 "data/maps/VermilionCity_Gym/scripts.pory"
	return
# 77 "data/maps/VermilionCity_Gym/scripts.pory"

# 78 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_SetBeamsOff::
# 79 "data/maps/VermilionCity_Gym/scripts.pory"
	@ LEFT lasers OFF
# 80 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 3, 8, METATILE_VermilionGym_Beam_Node_TopLeft_Off, 1
# 81 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 4, 8, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_Off, 0
# 82 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 5, 8, METATILE_VermilionGym_Floor, 0
# 83 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 6, 8, METATILE_VermilionGym_Beam_Node_TopRight_Edge_Off, 0
# 84 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 7, 8, METATILE_VermilionGym_Beam_Node_TopRight_Off, 1
# 85 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 3, 9, METATILE_VermilionGym_Beam_Node_BottomLeft_Off, 1
# 86 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 4, 9, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_Off, 0
# 87 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 5, 9, METATILE_VermilionGym_Floor, 0
# 88 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_Off, 0
# 89 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 7, 9, METATILE_VermilionGym_Beam_Node_BottomRight_Off, 1
# 90 "data/maps/VermilionCity_Gym/scripts.pory"

# 91 "data/maps/VermilionCity_Gym/scripts.pory"
	@ RIGHT lasers OFF
# 92 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 25, 8, METATILE_VermilionGym_Beam_Node_TopLeft_Off, 1
# 93 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 26, 8, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_Off, 0
# 94 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 27, 8, METATILE_VermilionGym_Floor, 0
# 95 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 28, 8, METATILE_VermilionGym_Beam_Node_TopRight_Edge_Off, 0
# 96 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 29, 8, METATILE_VermilionGym_Beam_Node_TopRight_Off, 1
# 97 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 25, 9, METATILE_VermilionGym_Beam_Node_BottomLeft_Off, 1
# 98 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 26, 9, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_Off, 0
# 99 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 27, 9, METATILE_VermilionGym_Floor, 0
# 100 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 28, 9, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_Off, 0
# 101 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 29, 9, METATILE_VermilionGym_Beam_Node_BottomRight_Off, 1
# 102 "data/maps/VermilionCity_Gym/scripts.pory"
	return
# 103 "data/maps/VermilionCity_Gym/scripts.pory"

# 104 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_SetMiddleBeamsHalfOff::
# 105 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 14, 8, METATILE_VermilionGym_Beam_Node_TopLeft_HalfOn, 1
# 106 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 15, 8, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_HalfOn, 1
# 107 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 16, 8, METATILE_VermilionGym_Beam_MidTop_HalfOn, 1
# 108 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 17, 8, METATILE_VermilionGym_Beam_Node_TopRight_Edge_HalfOn, 1
# 109 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 18, 8, METATILE_VermilionGym_Beam_Node_TopRight_HalfOn, 1
# 110 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 14, 9, METATILE_VermilionGym_Beam_Node_BottomLeft_HalfOn, 1
# 111 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 15, 9, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_HalfOn, 1
# 112 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 16, 9, METATILE_VermilionGym_Beam_MidBottom_HalfOn, 1
# 113 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 17, 9, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_HalfOn, 1
# 114 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 18, 9, METATILE_VermilionGym_Beam_Node_BottomRight_HalfOn, 1
# 115 "data/maps/VermilionCity_Gym/scripts.pory"
	return
# 116 "data/maps/VermilionCity_Gym/scripts.pory"

# 117 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_SetMiddleBeamsOff::
# 118 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 14, 8, METATILE_VermilionGym_Beam_Node_TopLeft_Off, 1
# 119 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 15, 8, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_Off, 0
# 120 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 16, 8, METATILE_VermilionGym_Floor, 0
# 121 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 17, 8, METATILE_VermilionGym_Beam_Node_TopRight_Edge_Off, 0
# 122 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 18, 8, METATILE_VermilionGym_Beam_Node_TopRight_Off, 1
# 123 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 14, 9, METATILE_VermilionGym_Beam_Node_BottomLeft_Off, 1
# 124 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 15, 9, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_Off, 0
# 125 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 16, 9, METATILE_VermilionGym_Floor, 0
# 126 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 17, 9, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_Off, 0
# 127 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 18, 9, METATILE_VermilionGym_Beam_Node_BottomRight_Off, 1
# 128 "data/maps/VermilionCity_Gym/scripts.pory"
	return
# 129 "data/maps/VermilionCity_Gym/scripts.pory"

# 130 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_InitTrashCans::
# 131 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, EventScript_Return
# 132 "data/maps/VermilionCity_Gym/scripts.pory"
	special SetVermilionTrashCans
# 133 "data/maps/VermilionCity_Gym/scripts.pory"
	copyvar VAR_TEMP_0, SWITCH1_ID
# 134 "data/maps/VermilionCity_Gym/scripts.pory"
	copyvar VAR_TEMP_1, SWITCH2_ID
# 135 "data/maps/VermilionCity_Gym/scripts.pory"
	return
# 136 "data/maps/VermilionCity_Gym/scripts.pory"

# 137 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_UpdateMiddleBeams::
# 138 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 139 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set MIDDLE_BEAM_SWITCH_1, VermilionCity_Gym_EventScript_CheckSecond
# 140 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set MIDDLE_BEAM_SWITCH_2, VermilionCity_Gym_EventScript_CheckSecond
# 141 "data/maps/VermilionCity_Gym/scripts.pory"
	call VermilionCity_Gym_EventScript_SetMiddleBeamsOn
# 142 "data/maps/VermilionCity_Gym/scripts.pory"
	special DrawWholeMapView
# 143 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
# 144 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 145 "data/maps/VermilionCity_Gym/scripts.pory"

# 146 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_CheckSecond::
# 147 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set MIDDLE_BEAM_SWITCH_1, VermilionCity_Gym_EventScript_CheckBoth
# 148 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set MIDDLE_BEAM_SWITCH_2, VermilionCity_Gym_EventScript_CheckBoth
# 149 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
# 150 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 151 "data/maps/VermilionCity_Gym/scripts.pory"

# 152 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_CheckBoth::
# 153 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set MIDDLE_BEAM_SWITCH_1, VermilionCity_Gym_EventScript_MaybeBoth
# 154 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
# 155 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 156 "data/maps/VermilionCity_Gym/scripts.pory"

# 157 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_MaybeBoth::
# 158 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set MIDDLE_BEAM_SWITCH_2, VermilionCity_Gym_EventScript_Both
# 159 "data/maps/VermilionCity_Gym/scripts.pory"
	call VermilionCity_Gym_EventScript_SetMiddleBeamsHalfOff
# 160 "data/maps/VermilionCity_Gym/scripts.pory"
	special DrawWholeMapView
# 161 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
# 162 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 163 "data/maps/VermilionCity_Gym/scripts.pory"

# 164 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_Both::
# 165 "data/maps/VermilionCity_Gym/scripts.pory"
	call VermilionCity_Gym_EventScript_SetMiddleBeamsOff
# 166 "data/maps/VermilionCity_Gym/scripts.pory"
	special DrawWholeMapView
# 167 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
# 168 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 169 "data/maps/VermilionCity_Gym/scripts.pory"

# 170 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan1::
# 171 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 172 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar TRASH_CAN_ID, 1
# 173 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 174 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 175 "data/maps/VermilionCity_Gym/scripts.pory"

# 176 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan2::
# 177 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 178 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar TRASH_CAN_ID, 2
# 179 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 180 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 181 "data/maps/VermilionCity_Gym/scripts.pory"

# 182 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan3::
# 183 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 184 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar TRASH_CAN_ID, 3
# 185 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 186 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 187 "data/maps/VermilionCity_Gym/scripts.pory"

# 188 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan4::
# 189 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 190 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar TRASH_CAN_ID, 4
# 191 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 192 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 193 "data/maps/VermilionCity_Gym/scripts.pory"

# 194 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan5::
# 195 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 196 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar TRASH_CAN_ID, 5
# 197 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 198 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 199 "data/maps/VermilionCity_Gym/scripts.pory"

# 200 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan6::
# 201 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 202 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar TRASH_CAN_ID, 6
# 203 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 204 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 205 "data/maps/VermilionCity_Gym/scripts.pory"

# 206 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan7::
# 207 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 208 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar TRASH_CAN_ID, 7
# 209 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 210 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 211 "data/maps/VermilionCity_Gym/scripts.pory"

# 212 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan8::
# 213 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 214 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar TRASH_CAN_ID, 8
# 215 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 216 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 217 "data/maps/VermilionCity_Gym/scripts.pory"

# 218 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan9::
# 219 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 220 "data/maps/VermilionCity_Gym/scripts.pory"
	setvar TRASH_CAN_ID, 9
# 221 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_TrashCan
# 222 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 223 "data/maps/VermilionCity_Gym/scripts.pory"

# 224 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrashCan::
# 225 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 226 "data/maps/VermilionCity_Gym/scripts.pory"
	special QuestLog_CutRecording
# 227 "data/maps/VermilionCity_Gym/scripts.pory"
	copyvar SWITCH1_ID, VAR_TEMP_0
# 228 "data/maps/VermilionCity_Gym/scripts.pory"
	copyvar SWITCH2_ID, VAR_TEMP_1
# 229 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES, VermilionCity_Gym_EventScript_LocksAlreadyOpen
# 230 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set FOUND_FIRST_SWITCH, VermilionCity_Gym_EventScript_TrySwitchTwo
# 231 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_eq SWITCH1_ID, TRASH_CAN_ID, VermilionCity_Gym_EventScript_FoundSwitchOne
# 232 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_NopeOnlyTrashHere
# 233 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
# 234 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 235 "data/maps/VermilionCity_Gym/scripts.pory"

# 236 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_FoundSwitchOne::
# 237 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_SwitchUnderTrashFirstLockOpened
# 238 "data/maps/VermilionCity_Gym/scripts.pory"
	playse SE_PIN
# 239 "data/maps/VermilionCity_Gym/scripts.pory"
	waitse
# 240 "data/maps/VermilionCity_Gym/scripts.pory"
	call VermilionCity_Gym_EventScript_SetOneBeamOff
# 241 "data/maps/VermilionCity_Gym/scripts.pory"
	special DrawWholeMapView
# 242 "data/maps/VermilionCity_Gym/scripts.pory"
	setflag FOUND_FIRST_SWITCH
# 243 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
# 244 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 245 "data/maps/VermilionCity_Gym/scripts.pory"

# 246 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_TrySwitchTwo::
# 247 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_eq SWITCH2_ID, TRASH_CAN_ID, VermilionCity_Gym_EventScript_FoundSwitchTwo
# 248 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_OnlyTrashLocksWereReset
# 249 "data/maps/VermilionCity_Gym/scripts.pory"
	clearflag FOUND_FIRST_SWITCH
# 250 "data/maps/VermilionCity_Gym/scripts.pory"
	special SetVermilionTrashCans
# 251 "data/maps/VermilionCity_Gym/scripts.pory"
	copyvar VAR_TEMP_0, SWITCH1_ID
# 252 "data/maps/VermilionCity_Gym/scripts.pory"
	copyvar VAR_TEMP_1, SWITCH2_ID
# 253 "data/maps/VermilionCity_Gym/scripts.pory"
	call VermilionCity_Gym_EventScript_SetBeamsOn
# 254 "data/maps/VermilionCity_Gym/scripts.pory"
	special DrawWholeMapView
# 255 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
# 256 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 257 "data/maps/VermilionCity_Gym/scripts.pory"

# 258 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_FoundSwitchTwo::
# 259 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_SecondLockOpened
# 260 "data/maps/VermilionCity_Gym/scripts.pory"
	closemessage
# 261 "data/maps/VermilionCity_Gym/scripts.pory"
	call VermilionCity_Gym_EventScript_SetBeamsOff
# 262 "data/maps/VermilionCity_Gym/scripts.pory"
	special DrawWholeMapView
# 263 "data/maps/VermilionCity_Gym/scripts.pory"
	playse SE_UNLOCK
# 264 "data/maps/VermilionCity_Gym/scripts.pory"
	waitse
# 265 "data/maps/VermilionCity_Gym/scripts.pory"
	setflag FLAG_FOUND_BOTH_VERMILION_GYM_SWITCHES
# 266 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
# 267 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 268 "data/maps/VermilionCity_Gym/scripts.pory"

# 269 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_LocksAlreadyOpen::
# 270 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_NopeOnlyTrashHere
# 271 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
# 272 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 273 "data/maps/VermilionCity_Gym/scripts.pory"

# 274 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_MiddleSwitch1::
# 275 "data/maps/VermilionCity_Gym/scripts.pory"
	setflag MIDDLE_BEAM_SWITCH_1
# 276 "data/maps/VermilionCity_Gym/scripts.pory"
    msgbox VermilionCity_Gym_TrashSwitch 
# 277 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_UpdateMiddleBeams
# 278 "data/maps/VermilionCity_Gym/scripts.pory"

# 279 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_MiddleSwitch2::
# 280 "data/maps/VermilionCity_Gym/scripts.pory"
	setflag MIDDLE_BEAM_SWITCH_2
# 281 "data/maps/VermilionCity_Gym/scripts.pory"
    msgbox VermilionCity_Gym_TrashSwitch 
# 282 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_UpdateMiddleBeams
# 283 "data/maps/VermilionCity_Gym/scripts.pory"

# 284 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_SetBeamsOn::
# 285 "data/maps/VermilionCity_Gym/scripts.pory"
	@ LEFT lasers ON
# 286 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 3, 8, METATILE_VermilionGym_Beam_Node_TopLeft_On, 1
# 287 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 4, 8, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_On, 1
# 288 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 5, 8, METATILE_VermilionGym_Beam_MidTop, 1
# 289 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 6, 8, METATILE_VermilionGym_Beam_Node_TopRight_Edge_On, 1
# 290 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 7, 8, METATILE_VermilionGym_Beam_Node_TopRight_On, 1
# 291 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 3, 9, METATILE_VermilionGym_Beam_Node_BottomLeft_On, 1
# 292 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 4, 9, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_On, 1
# 293 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 5, 9, METATILE_VermilionGym_Beam_MidBottom, 1
# 294 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 6, 9, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_On, 1
# 295 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 7, 9, METATILE_VermilionGym_Beam_Node_BottomRight_On, 1
# 296 "data/maps/VermilionCity_Gym/scripts.pory"

# 297 "data/maps/VermilionCity_Gym/scripts.pory"
	@ RIGHT lasers ON
# 298 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 25, 8, METATILE_VermilionGym_Beam_Node_TopLeft_On, 1
# 299 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 26, 8, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_On, 1
# 300 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 27, 8, METATILE_VermilionGym_Beam_MidTop, 1
# 301 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 28, 8, METATILE_VermilionGym_Beam_Node_TopRight_Edge_On, 1
# 302 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 29, 8, METATILE_VermilionGym_Beam_Node_TopRight_On, 1
# 303 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 25, 9, METATILE_VermilionGym_Beam_Node_BottomLeft_On, 1
# 304 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 26, 9, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_On, 1
# 305 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 27, 9, METATILE_VermilionGym_Beam_MidBottom, 1
# 306 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 28, 9, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_On, 1
# 307 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 29, 9, METATILE_VermilionGym_Beam_Node_BottomRight_On, 1
# 308 "data/maps/VermilionCity_Gym/scripts.pory"
	return
# 309 "data/maps/VermilionCity_Gym/scripts.pory"

# 310 "data/maps/VermilionCity_Gym/scripts.pory"

# 311 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_SetMiddleBeamsOn::
# 312 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 14, 8, METATILE_VermilionGym_Beam_Node_TopLeft_On, 1
# 313 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 15, 8, METATILE_VermilionGym_Beam_Node_TopLeft_Edge_On, 1
# 314 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 16, 8, METATILE_VermilionGym_Beam_MidTop, 1
# 315 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 17, 8, METATILE_VermilionGym_Beam_Node_TopRight_Edge_On, 1
# 316 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 18, 8, METATILE_VermilionGym_Beam_Node_TopRight_On, 1
# 317 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 14, 9, METATILE_VermilionGym_Beam_Node_BottomLeft_On, 1
# 318 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 15, 9, METATILE_VermilionGym_Beam_Node_BottomLeft_Edge_On, 1
# 319 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 16, 9, METATILE_VermilionGym_Beam_MidBottom, 1
# 320 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 17, 9, METATILE_VermilionGym_Beam_Node_BottomRight_Edge_On, 1
# 321 "data/maps/VermilionCity_Gym/scripts.pory"
	setmetatile 18, 9, METATILE_VermilionGym_Beam_Node_BottomRight_On, 1
# 322 "data/maps/VermilionCity_Gym/scripts.pory"
	return
# 323 "data/maps/VermilionCity_Gym/scripts.pory"

# 324 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_LtSurge::
# 325 "data/maps/VermilionCity_Gym/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 326 "data/maps/VermilionCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_LT_SURGE, VermilionCity_Gym_Text_LtSurgeIntro, VermilionCity_Gym_Text_LtSurgeDefeat, VermilionCity_Gym_EventScript_DefeatedLtSurge, NO_MUSIC
# 327 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM34_FROM_SURGE, VermilionCity_Gym_EventScript_GiveTM34
# 328 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_LtSurgePostBattle
# 329 "data/maps/VermilionCity_Gym/scripts.pory"
	release
# 330 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 331 "data/maps/VermilionCity_Gym/scripts.pory"

# 332 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_DefeatedLtSurge::
# 333 "data/maps/VermilionCity_Gym/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 1
# 334 "data/maps/VermilionCity_Gym/scripts.pory"
	call_if_unset FLAG_GOT_HM05, VermilionCity_Gym_EventScript_ShowOaksAide
# 335 "data/maps/VermilionCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_FAME_CHECKER_LT_SURGE_JOURNAL
# 336 "data/maps/VermilionCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_LT_SURGE
# 337 "data/maps/VermilionCity_Gym/scripts.pory"
	setflag FLAG_BADGE03_GET
# 338 "data/maps/VermilionCity_Gym/scripts.pory"
	set_gym_trainers 3
# 339 "data/maps/VermilionCity_Gym/scripts.pory"
	goto VermilionCity_Gym_EventScript_GiveTM34
# 340 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 341 "data/maps/VermilionCity_Gym/scripts.pory"

# 342 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_ShowOaksAide::
# 343 "data/maps/VermilionCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERMILION_CITY_OAKS_AIDE
# 344 "data/maps/VermilionCity_Gym/scripts.pory"
	return
# 345 "data/maps/VermilionCity_Gym/scripts.pory"

# 346 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_GiveTM34::
# 347 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_ExplainThunderBadgeTakeThis
# 348 "data/maps/VermilionCity_Gym/scripts.pory"
	checkitemspace ITEM_TM34
# 349 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, VermilionCity_Gym_EventScript_NoRoomForTM34
# 350 "data/maps/VermilionCity_Gym/scripts.pory"
	giveitem_msg VermilionCity_Gym_Text_ReceivedTM34FromLtSurge, ITEM_TM34
# 351 "data/maps/VermilionCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM34_FROM_SURGE
# 352 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_ExplainTM34
# 353 "data/maps/VermilionCity_Gym/scripts.pory"
	release
# 354 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 355 "data/maps/VermilionCity_Gym/scripts.pory"

# 356 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_NoRoomForTM34::
# 357 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_MakeRoomInYourBag
# 358 "data/maps/VermilionCity_Gym/scripts.pory"
	release
# 359 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 360 "data/maps/VermilionCity_Gym/scripts.pory"

# 361 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_DefeatedTucker::
# 362 "data/maps/VermilionCity_Gym/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 2
# 363 "data/maps/VermilionCity_Gym/scripts.pory"
	release
# 364 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 365 "data/maps/VermilionCity_Gym/scripts.pory"

# 366 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_GymGuy::
# 367 "data/maps/VermilionCity_Gym/scripts.pory"
	lock
# 368 "data/maps/VermilionCity_Gym/scripts.pory"
	faceplayer
# 369 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_LT_SURGE, VermilionCity_Gym_EventScript_GymGuyPostVictory
# 370 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymGuyAdvice
# 371 "data/maps/VermilionCity_Gym/scripts.pory"
	release
# 372 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 373 "data/maps/VermilionCity_Gym/scripts.pory"

# 374 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_GymGuyPostVictory::
# 375 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymGuyPostVictory
# 376 "data/maps/VermilionCity_Gym/scripts.pory"
	release
# 377 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 378 "data/maps/VermilionCity_Gym/scripts.pory"

# 379 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_GymStatue::
# 380 "data/maps/VermilionCity_Gym/scripts.pory"
	lockall
# 381 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, VermilionCity_Gym_EventScript_GymStatuePostVictory
# 382 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymStatue
# 383 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
# 384 "data/maps/VermilionCity_Gym/scripts.pory"
	end
# 385 "data/maps/VermilionCity_Gym/scripts.pory"

# 386 "data/maps/VermilionCity_Gym/scripts.pory"
VermilionCity_Gym_EventScript_GymStatuePostVictory::
# 387 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_GymStatuePlayerWon
# 388 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
# 389 "data/maps/VermilionCity_Gym/scripts.pory"
	end

VermilionCity_Gym_EventScript_Dylan::
# 394 "data/maps/VermilionCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_DYLAN, Dylan_Intro, Dylan_Outro
# 395 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_EventScript_Dylan_Text_0, MSGBOX_YESNO
# 396 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, VermilionCity_Gym_EventScript_DylanAccept
# 397 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, VermilionCity_Gym_EventScript_DylanRefuse
# 398 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
	return


VermilionCity_Gym_EventScript_DylanAccept::
# 402 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_EventScript_DylanAccept_Text_0
# 403 "data/maps/VermilionCity_Gym/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 404 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox Dylan_PostBattle, MSGBOX_AUTOCLOSE
# 405 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
	return


VermilionCity_Gym_EventScript_DylanRefuse::
# 409 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox Dylan_PostBattle, MSGBOX_AUTOCLOSE
# 410 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
	return


VermilionCity_Gym_EventScript_Dwayne::
# 426 "data/maps/VermilionCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SAILOR_DWAYNE, VermilionCity_Gym_Text_DwayneIntro, VermilionCity_Gym_Text_DwayneDefeat
# 427 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_EventScript_Dylan_Text_0, MSGBOX_YESNO
# 428 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, VermilionCity_Gym_EventScript_DwayneAccept
# 429 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, VermilionCity_Gym_EventScript_DwayneRefuse
# 430 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
	return


VermilionCity_Gym_EventScript_DwayneAccept::
# 434 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_EventScript_DylanAccept_Text_0
# 435 "data/maps/VermilionCity_Gym/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 436 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
# 437 "data/maps/VermilionCity_Gym/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 4
# 438 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
	return


VermilionCity_Gym_EventScript_DwayneRefuse::
# 442 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
# 443 "data/maps/VermilionCity_Gym/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 4
# 444 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
	return


VermilionCity_Gym_EventScript_Bailey::
# 448 "data/maps/VermilionCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ENGINEER_BAILEY, VermilionCity_Gym_Text_BaileyIntro, VermilionCity_Gym_Text_BaileyDefeat
# 449 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_EventScript_Dylan_Text_0, MSGBOX_YESNO
# 450 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, VermilionCity_Gym_EventScript_BaileyAccept
# 451 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, VermilionCity_Gym_EventScript_BaileyRefuse
# 452 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
	return


VermilionCity_Gym_EventScript_BaileyAccept::
# 456 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_EventScript_BaileyAccept_Text_0
# 457 "data/maps/VermilionCity_Gym/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 458 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_BaileyPostBattle, MSGBOX_AUTOCLOSE
# 459 "data/maps/VermilionCity_Gym/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 3
# 460 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
	return


VermilionCity_Gym_EventScript_BaileyRefuse::
# 464 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_Text_BaileyPostBattle, MSGBOX_AUTOCLOSE
# 465 "data/maps/VermilionCity_Gym/scripts.pory"
	famechecker FAMECHECKER_LTSURGE, 3
# 466 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
	return


VermilionCity_Gym_EventScript_Tucker::
# 474 "data/maps/VermilionCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GUITARIST_TUCKER, Tucker_Intro, Tucker_Outro
# 475 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_EventScript_Dylan_Text_0, MSGBOX_YESNO
# 476 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, VermilionCity_Gym_EventScript_TuckerAccept
# 477 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, VermilionCity_Gym_EventScript_TuckerRefuse
# 478 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
	return


VermilionCity_Gym_EventScript_TuckerAccept::
# 482 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_EventScript_BaileyAccept_Text_0
# 483 "data/maps/VermilionCity_Gym/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 484 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox Tucker_PostBattle, MSGBOX_AUTOCLOSE
# 485 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
	return


VermilionCity_Gym_EventScript_TuckerRefuse::
# 489 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox Tucker_PostBattle, MSGBOX_AUTOCLOSE
# 490 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
	return


VermilionCity_Gym_EventScript_Brooks::
# 510 "data/maps/VermilionCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROCKER_BROOKS, Brooks_Intro, Brooks_Outro
# 511 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_EventScript_Dylan_Text_0, MSGBOX_YESNO
# 512 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, VermilionCity_Gym_EventScript_BrooksAccept
# 513 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, VermilionCity_Gym_EventScript_BrooksRefuse
# 514 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
	return


VermilionCity_Gym_EventScript_BrooksAccept::
# 518 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_EventScript_BaileyAccept_Text_0
# 519 "data/maps/VermilionCity_Gym/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 520 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox Brooks_PostBattle, MSGBOX_AUTOCLOSE
# 521 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
	return


VermilionCity_Gym_EventScript_BrooksRefuse::
# 525 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox Brooks_PostBattle, MSGBOX_AUTOCLOSE
# 526 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
	return


VermilionCity_Gym_EventScript_Hazel::
# 542 "data/maps/VermilionCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_AROMA_LADY_HAZEL, Hazel_Intro, Hazel_Outro
# 543 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_EventScript_Dylan_Text_0, MSGBOX_YESNO
# 544 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, VermilionCity_Gym_EventScript_HazelAccept
# 545 "data/maps/VermilionCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, VermilionCity_Gym_EventScript_HazelRefuse
# 546 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
	return


VermilionCity_Gym_EventScript_HazelAccept::
# 550 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox VermilionCity_Gym_EventScript_HazelAccept_Text_0
# 551 "data/maps/VermilionCity_Gym/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 552 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox Hazel_PostBattle, MSGBOX_AUTOCLOSE
# 553 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
	return


VermilionCity_Gym_EventScript_HazelRefuse::
# 557 "data/maps/VermilionCity_Gym/scripts.pory"
	msgbox Hazel_PostBattle, MSGBOX_AUTOCLOSE
# 558 "data/maps/VermilionCity_Gym/scripts.pory"
	releaseall
	return


VermilionCity_Gym_EventScript_Dylan_Text_0:
# 395 "data/maps/VermilionCity_Gym/scripts.pory"
	.string "Would you like me to heal your\n"
	.string "party?$"

VermilionCity_Gym_EventScript_DylanAccept_Text_0:
# 402 "data/maps/VermilionCity_Gym/scripts.pory"
	.string "No problem.$"

VermilionCity_Gym_EventScript_BaileyAccept_Text_0:
# 456 "data/maps/VermilionCity_Gym/scripts.pory"
	.string "Of course.$"

VermilionCity_Gym_EventScript_HazelAccept_Text_0:
# 550 "data/maps/VermilionCity_Gym/scripts.pory"
	.string "As you wish.$"

Dylan_Intro::
# 413 "data/maps/VermilionCity_Gym/scripts.pory"
	.string "Batten the down hatches!$"

Dylan_Outro::
# 417 "data/maps/VermilionCity_Gym/scripts.pory"
	.string "I'm a wreck...$"

Dylan_PostBattle::
# 421 "data/maps/VermilionCity_Gym/scripts.pory"
	.string "VERMILION CITY is full of seamen.\n"
	.string "LT. SURGE has enlisted our\l"
	.string "services for his GYM.$"

VermilionCity_Gym_Text_BaileyPostBattle::
# 469 "data/maps/VermilionCity_Gym/scripts.pory"
	.string "I need to devise a new gameplan.$"

Tucker_Intro::
# 493 "data/maps/VermilionCity_Gym/scripts.pory"
	.string "Listen here, kid!$"

Tucker_Outro::
# 497 "data/maps/VermilionCity_Gym/scripts.pory"
	.string "You shredded us.$"

Tucker_PostBattle::
# 501 "data/maps/VermilionCity_Gym/scripts.pory"
	.string "POKéMON work together like the\n"
	.string "members of a rock band. Speed\l"
	.string "control POKéMON are the drums,\l"
	.string "they set the rhythm. POKéMON with\l"
	.string "great defense are like the bass\l"
	.string "guitar, unwavering. The vocalist?\l"
	.string "that's the star of the show!\l"
	.string "POKéMON who are able to land KO's\l"
	.string "and sweep other teams are the\l"
	.string "frontmen.$"

Brooks_Intro::
# 529 "data/maps/VermilionCity_Gym/scripts.pory"
	.string "If you think you can win, you're in\n"
	.string "for quite a shock!$"

Brooks_Outro::
# 533 "data/maps/VermilionCity_Gym/scripts.pory"
	.string "I'm completely zapped.$"

Brooks_PostBattle::
# 537 "data/maps/VermilionCity_Gym/scripts.pory"
	.string "LT. SURGE uses ELECTRIC POKéMON\n"
	.string "much better than I can. Maybe one\l"
	.string "day he'll coach me.$"

Hazel_Intro::
# 561 "data/maps/VermilionCity_Gym/scripts.pory"
	.string "Oh! Yeah, I'm supposed to battle\n"
	.string "you now.$"

Hazel_Outro::
# 565 "data/maps/VermilionCity_Gym/scripts.pory"
	.string "That was stressful.$"

Hazel_PostBattle::
# 569 "data/maps/VermilionCity_Gym/scripts.pory"
	.string "Honestly, I can't figure out why\n"
	.string "LT. SURGE insists on my being here.$"

VermilionCity_Gym_TrashSwitch::
# 573 "data/maps/VermilionCity_Gym/scripts.pory"
	.string "Hey, there's a switch under the\n"
	.string "trash! {PLAYER} turned the\l"
	.string "switch off.$"
