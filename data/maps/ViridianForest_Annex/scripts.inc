ViridianForest_Annex_MapScripts::
	.byte 0


ViridianForest_Annex_EventScript_Manuel::
# 6 "data/maps/ViridianForest_Annex/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_MANUEL, Manuel_Intro, Manuel_Outro
# 7 "data/maps/ViridianForest_Annex/scripts.pory"
	msgbox Manuel_Postbattle, MSGBOX_AUTOCLOSE
# 8 "data/maps/ViridianForest_Annex/scripts.pory"
	waitmessage
	end


ViridianForest_Annex_EventScript_Claudia::
# 25 "data/maps/ViridianForest_Annex/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_CLAUDIA, Claudia_Intro, Claudia_Outro
# 26 "data/maps/ViridianForest_Annex/scripts.pory"
	msgbox Claudia_Postbattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/ViridianForest_Annex/scripts.pory"
	waitmessage
	end


ViridianForest_Annex_EventScript_Evie::
# 44 "data/maps/ViridianForest_Annex/scripts.pory"
	trainerbattle_single TRAINER_LASS_EVIE, Evie_Intro, Evie_Outro
# 45 "data/maps/ViridianForest_Annex/scripts.pory"
	msgbox Evie_Postbattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/ViridianForest_Annex/scripts.pory"
	waitmessage
	end


ViridianForest_Annex_EventScript_Grunt_52::
# 62 "data/maps/ViridianForest_Annex/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_52, Grunt_52_Intro, Grunt_52_Outro
# 63 "data/maps/ViridianForest_Annex/scripts.pory"
	msgbox Grunt_52_Postbattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/ViridianForest_Annex/scripts.pory"
	waitmessage
	end


ViridianForest_Annex_EventScript_Grunt_53::
# 80 "data/maps/ViridianForest_Annex/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_53, Grunt_53_Intro, Grunt_53_Outro
# 81 "data/maps/ViridianForest_Annex/scripts.pory"
	msgbox Grunt_53_Postbattle, MSGBOX_AUTOCLOSE
# 82 "data/maps/ViridianForest_Annex/scripts.pory"
	waitmessage
	end


ViridianForest_Annex_EventScript_Grunt_54::
# 99 "data/maps/ViridianForest_Annex/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_54, Grunt_54_Intro, Grunt_54_Outro
# 100 "data/maps/ViridianForest_Annex/scripts.pory"
	msgbox Grunt_54_Postbattle, MSGBOX_AUTOCLOSE
# 101 "data/maps/ViridianForest_Annex/scripts.pory"
	waitmessage
	end


ViridianForest_Annex_EventScript_Grunt_55::
# 106 "data/maps/ViridianForest_Annex/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_55, Grunt_55_Intro, Grunt_55_Outro
# 107 "data/maps/ViridianForest_Annex/scripts.pory"
	msgbox Grunt_55_Postbattle, MSGBOX_AUTOCLOSE
# 108 "data/maps/ViridianForest_Annex/scripts.pory"
	waitmessage
	end


ViridianForest_Annex_EventScript_Simone_1::
# 113 "data/maps/ViridianForest_Annex/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_ADMIN_SIMONE_1, Simone_1_Intro, Simone_1_Outro, Simone_1_Defeated
# 114 "data/maps/ViridianForest_Annex/scripts.pory"
	lockall
# 115 "data/maps/ViridianForest_Annex/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 116 "data/maps/ViridianForest_Annex/scripts.pory"
	msgbox Simone_1_Postbattle
# 117 "data/maps/ViridianForest_Annex/scripts.pory"
	waitmessage
# 118 "data/maps/ViridianForest_Annex/scripts.pory"
	releaseall
	return


Simone_1_Defeated::
# 133 "data/maps/ViridianForest_Annex/scripts.pory"
	msgbox Simone_1_Defeated_Text_0
# 134 "data/maps/ViridianForest_Annex/scripts.pory"
	waitmessage
# 135 "data/maps/ViridianForest_Annex/scripts.pory"
	closemessage
# 136 "data/maps/ViridianForest_Annex/scripts.pory"
	fadescreen FADE_TO_BLACK
# 137 "data/maps/ViridianForest_Annex/scripts.pory"
	removeobject LOCALID_GRUNT_52
# 138 "data/maps/ViridianForest_Annex/scripts.pory"
	removeobject LOCALID_GRUNT_53
# 139 "data/maps/ViridianForest_Annex/scripts.pory"
	removeobject LOCALID_GRUNT_54
# 140 "data/maps/ViridianForest_Annex/scripts.pory"
	removeobject LOCALID_GRUNT_55
# 141 "data/maps/ViridianForest_Annex/scripts.pory"
	removeobject LOCALID_VIRIDIAN_SIMONE
# 142 "data/maps/ViridianForest_Annex/scripts.pory"
	setflag FLAG_SIMONE_1
# 143 "data/maps/ViridianForest_Annex/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 144 "data/maps/ViridianForest_Annex/scripts.pory"
	releaseall
	return


ViridianForest_Annex_Eventscript_Scientist::
# 148 "data/maps/ViridianForest_Annex/scripts.pory"
	lockall
# 149 "data/maps/ViridianForest_Annex/scripts.pory"
	faceplayer
# 150 "data/maps/ViridianForest_Annex/scripts.pory"
	msgbox ViridianForest_Annex_Eventscript_Scientist_Text_0
# 151 "data/maps/ViridianForest_Annex/scripts.pory"
	waitmessage
# 152 "data/maps/ViridianForest_Annex/scripts.pory"
	releaseall
	return


Viridian_Forest_Grunts_Trigger::
# 156 "data/maps/ViridianForest_Annex/scripts.pory"
	lockall
# 157 "data/maps/ViridianForest_Annex/scripts.pory"
	applymovement LOCALID_GRUNT_54, GruntMovement
# 158 "data/maps/ViridianForest_Annex/scripts.pory"
	waitmovement 0
# 159 "data/maps/ViridianForest_Annex/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_54, Grunt_54_Intro, Grunt_54_Outro, Viridian_Forest_Grunts_Trigger_cont
# 160 "data/maps/ViridianForest_Annex/scripts.pory"
	releaseall
	return


Viridian_Forest_Grunts_Trigger_cont::
# 164 "data/maps/ViridianForest_Annex/scripts.pory"
	applymovement LOCALID_GRUNT_55, GruntMovement
# 165 "data/maps/ViridianForest_Annex/scripts.pory"
	waitmovement 0
# 166 "data/maps/ViridianForest_Annex/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_55, Grunt_55_Intro, Grunt_55_Outro, Viridian_Forest_Grunts_Defeated
# 167 "data/maps/ViridianForest_Annex/scripts.pory"
	releaseall
	return


Viridian_Forest_Grunts_Defeated::
# 171 "data/maps/ViridianForest_Annex/scripts.pory"
	setvar VAR_SIMONE_1_ANNEX, 1
# 172 "data/maps/ViridianForest_Annex/scripts.pory"
	releaseall
	return


# 175 "data/maps/ViridianForest_Annex/scripts.pory"
GruntMovement:
# 176 "data/maps/ViridianForest_Annex/scripts.pory"
	walk_left
# 177 "data/maps/ViridianForest_Annex/scripts.pory"
	faceplayer
	step_end

Simone_1_Defeated_Text_0:
# 133 "data/maps/ViridianForest_Annex/scripts.pory"
	.string "...$"

ViridianForest_Annex_Eventscript_Scientist_Text_0:
# 150 "data/maps/ViridianForest_Annex/scripts.pory"
	.string "Thank you for saving me! You got here\n"
	.string "just in time for me to prevent my\l"
	.string "fossils from being stolen by those\l"
	.string "goons. They said something about\l"
	.string "heading to Pewter City. I wouldn't be\l"
	.string "shocked if they intend to terrorize\l"
	.string "the scientists there too!$"

Manuel_Intro::
# 12 "data/maps/ViridianForest_Annex/scripts.pory"
	.string "Bugs! Together! Strong!$"

Manuel_Outro::
# 16 "data/maps/ViridianForest_Annex/scripts.pory"
	.string "My POKéMON didn't work together how I\n"
	.string "expected them to.$"

Manuel_Postbattle::
# 20 "data/maps/ViridianForest_Annex/scripts.pory"
	.string "I hope to one day be a skillful\n"
	.string "POKéMON trainer like Bugsy. That's why\l"
	.string "I'm training here in Viridian Forest.$"

Claudia_Intro::
# 31 "data/maps/ViridianForest_Annex/scripts.pory"
	.string "En garde!$"

Claudia_Outro::
# 35 "data/maps/ViridianForest_Annex/scripts.pory"
	.string "Touche.$"

Claudia_Postbattle::
# 39 "data/maps/ViridianForest_Annex/scripts.pory"
	.string "Here, deep in forest, I can best\n"
	.string "harness the awesome power of nature\l"
	.string "and her POKéMON.$"

Evie_Intro::
# 50 "data/maps/ViridianForest_Annex/scripts.pory"
	.string "Let's go!$"

Evie_Outro::
# 54 "data/maps/ViridianForest_Annex/scripts.pory"
	.string "...My POKéMON were still cuter than\n"
	.string "yours.$"

Evie_Postbattle::
# 57 "data/maps/ViridianForest_Annex/scripts.pory"
	.string "Even if they aren't the most powerful\n"
	.string "POKéMON, I love my precious EEVEE and\l"
	.string "PIKACHU.$"

Grunt_52_Intro::
# 68 "data/maps/ViridianForest_Annex/scripts.pory"
	.string "Go be a pest somewhere else!$"

Grunt_52_Outro::
# 72 "data/maps/ViridianForest_Annex/scripts.pory"
	.string "I... lost? I lost to a kid?$"

Grunt_52_Postbattle::
# 75 "data/maps/ViridianForest_Annex/scripts.pory"
	.string "You'll get out of here if you know\n"
	.string "what's good for ya.$"

Grunt_53_Intro::
# 86 "data/maps/ViridianForest_Annex/scripts.pory"
	.string "Buzz off, kid!$"

Grunt_53_Outro::
# 90 "data/maps/ViridianForest_Annex/scripts.pory"
	.string "Damn.$"

Grunt_53_Postbattle::
# 94 "data/maps/ViridianForest_Annex/scripts.pory"
	.string "Keep sticking your nose in other\n"
	.string "people's business. See what happens.$"

Simone_1_Intro::
# 121 "data/maps/ViridianForest_Annex/scripts.pory"
	.string "I'll teach you not to mess with Team\n"
	.string "Rocket.$"

Simone_1_Outro::
# 125 "data/maps/ViridianForest_Annex/scripts.pory"
	.string "That's it, we're leaving. GIOVANNI\n"
	.string "won't be happy about this.$"

Simone_1_Postbattle::
# 128 "data/maps/ViridianForest_Annex/scripts.pory"
	.string "...$"

Grunt_54_Intro::
# 180 "data/maps/ViridianForest_Annex/scripts.pory"
	.string "That's it. Your fun little adventure\n"
	.string "ends here.$"

Grunt_54_Outro::
# 184 "data/maps/ViridianForest_Annex/scripts.pory"
	.string "Must be your lucky day.$"

Grunt_54_Postbattle::
# 188 "data/maps/ViridianForest_Annex/scripts.pory"
	.string "Don't be stupid. You're no match for\n"
	.string "SIMONE.$"

Grunt_55_Intro::
# 192 "data/maps/ViridianForest_Annex/scripts.pory"
	.string "I'll handle this.$"

Grunt_55_Outro::
# 196 "data/maps/ViridianForest_Annex/scripts.pory"
	.string "Fine. SIMONE will straighten you out.$"

Grunt_55_Postbattle::
# 200 "data/maps/ViridianForest_Annex/scripts.pory"
	.string "I dare you to continue this meddling.\n"
	.string "Our boss won't be so patient with you.$"
