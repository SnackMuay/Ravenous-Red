# 1 "data/maps/CloudedWood_1/scripts.pory"

# 2 "data/maps/CloudedWood_1/scripts.pory"

# 3 "data/maps/CloudedWood_1/scripts.pory"
CloudedWood_1_MapScripts::
# 4 "data/maps/CloudedWood_1/scripts.pory"
	.byte 0

CloudedWood_EventScript_Aspen::
# 10 "data/maps/CloudedWood_1/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_ASPEN, Aspen_Intro, Aspen_Outro
# 11 "data/maps/CloudedWood_1/scripts.pory"
	msgbox Aspen_Postbattle, MSGBOX_AUTOCLOSE
# 12 "data/maps/CloudedWood_1/scripts.pory"
	waitmessage
	end


CloudedWood_EventScript_Vanessa::
# 29 "data/maps/CloudedWood_1/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_VANESSA, Vanessa_Intro, Vanessa_Outro
# 30 "data/maps/CloudedWood_1/scripts.pory"
	msgbox Vanessa_Postbattle, MSGBOX_AUTOCLOSE
# 31 "data/maps/CloudedWood_1/scripts.pory"
	waitmessage
	end


CloudedWood_EventScript_Cody::
# 48 "data/maps/CloudedWood_1/scripts.pory"
	trainerbattle_single TRAINER_PKMN_RANGER_CODY, Cody_Intro, Cody_Outro
# 49 "data/maps/CloudedWood_1/scripts.pory"
	msgbox Cody_Postbattle, MSGBOX_AUTOCLOSE
# 50 "data/maps/CloudedWood_1/scripts.pory"
	waitmessage
	end


CloudedWood_EventScript_Bristol::
# 67 "data/maps/CloudedWood_1/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_BRISTOL, Bristol_Intro, Bristol_Outro
# 68 "data/maps/CloudedWood_1/scripts.pory"
	msgbox Bristol_Postbattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/CloudedWood_1/scripts.pory"
	waitmessage
	end


CloudedWood_EventScript_Denzel::
# 86 "data/maps/CloudedWood_1/scripts.pory"
	trainerbattle_single TRAINER_PKMN_RANGER_DENZEL, Denzel_Intro, Denzel_Outro
# 87 "data/maps/CloudedWood_1/scripts.pory"
	msgbox Denzel_Postbattle, MSGBOX_AUTOCLOSE
# 88 "data/maps/CloudedWood_1/scripts.pory"
	waitmessage
	end


CloudedWood_EventScript_Agatha::
# 105 "data/maps/CloudedWood_1/scripts.pory"
	lockall
# 106 "data/maps/CloudedWood_1/scripts.pory"
	faceplayer
# 107 "data/maps/CloudedWood_1/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 108 "data/maps/CloudedWood_1/scripts.pory"
	goto_if_unset FLAG_GO_GOGGLES, CloudedWood_EventScript_Agatha_PreBattle
# 109 "data/maps/CloudedWood_1/scripts.pory"
	msgbox CloudedWood_EventScript_Agatha_Text_0
# 111 "data/maps/CloudedWood_1/scripts.pory"
	closemessage
# 112 "data/maps/CloudedWood_1/scripts.pory"
	releaseall
	return


CloudedWood_EventScript_Agatha_PreBattle::
# 116 "data/maps/CloudedWood_1/scripts.pory"
	faceplayer
# 117 "data/maps/CloudedWood_1/scripts.pory"
	msgbox CloudedWood_EventScript_Agatha_PreBattle_Text_0
# 120 "data/maps/CloudedWood_1/scripts.pory"
	waitmessage
# 121 "data/maps/CloudedWood_1/scripts.pory"
	msgbox CloudedWood_EventScript_Agatha_PreBattle_Text_1, MSGBOX_YESNO
# 123 "data/maps/CloudedWood_1/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CloudedWood_EventScript_AgathaDouble
# 124 "data/maps/CloudedWood_1/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CloudedWood_EventScript_DeclineToBattle
# 125 "data/maps/CloudedWood_1/scripts.pory"
	closemessage
# 126 "data/maps/CloudedWood_1/scripts.pory"
	face_down
# 127 "data/maps/CloudedWood_1/scripts.pory"
	releaseall
	return


CloudedWood_EventScript_AgathaDouble::
# 131 "data/maps/CloudedWood_1/scripts.pory"
	trainerbattle_double TRAINER_CLOUDED_WOOD_AGATHA, Agatha_Intro, Agatha_Outro, Agatha_CantBattle, CloudedWood_Agatha_Defeated
# 132 "data/maps/CloudedWood_1/scripts.pory"
	msgbox Agatha_Postbattle, MSGBOX_AUTOCLOSE
# 133 "data/maps/CloudedWood_1/scripts.pory"
	waitmessage
	end


CloudedWood_EventScript_DeclineToBattle::
# 138 "data/maps/CloudedWood_1/scripts.pory"
	lockall
# 139 "data/maps/CloudedWood_1/scripts.pory"
	msgbox CloudedWood_EventScript_DeclineToBattle_Text_0
# 140 "data/maps/CloudedWood_1/scripts.pory"
	waitmessage
# 141 "data/maps/CloudedWood_1/scripts.pory"
	closemessage
# 142 "data/maps/CloudedWood_1/scripts.pory"
	face_down
# 143 "data/maps/CloudedWood_1/scripts.pory"
	releaseall
	return


CloudedWood_Agatha_Defeated::
# 147 "data/maps/CloudedWood_1/scripts.pory"
	lockall
# 148 "data/maps/CloudedWood_1/scripts.pory"
	msgbox Agatha_Postbattle
# 149 "data/maps/CloudedWood_1/scripts.pory"
	waitmessage
# 150 "data/maps/CloudedWood_1/scripts.pory"
	giveitem ITEM_GO_GOGGLES, amount = 1
# 151 "data/maps/CloudedWood_1/scripts.pory"
	setflag FLAG_GO_GOGGLES
# 152 "data/maps/CloudedWood_1/scripts.pory"
	msgbox CloudedWood_Agatha_Defeated_Text_0
# 153 "data/maps/CloudedWood_1/scripts.pory"
	releaseall
	return


CloudedWood_EventScript_Sign1::
# 173 "data/maps/CloudedWood_1/scripts.pory"
	lockall
# 174 "data/maps/CloudedWood_1/scripts.pory"
	msgbox CloudedWood_EventScript_Sign1_Text_0, MSGBOX_SIGN
# 175 "data/maps/CloudedWood_1/scripts.pory"
	releaseall
	return


CloudedWood_EventScript_Sign2::
# 179 "data/maps/CloudedWood_1/scripts.pory"
	lockall
# 180 "data/maps/CloudedWood_1/scripts.pory"
	msgbox CloudedWood_EventScript_Sign2_Text_0, MSGBOX_SIGN
# 181 "data/maps/CloudedWood_1/scripts.pory"
	releaseall
	return


CloudedWood_EventScript_Sign3::
# 185 "data/maps/CloudedWood_1/scripts.pory"
	lockall
# 186 "data/maps/CloudedWood_1/scripts.pory"
	msgbox CloudedWood_EventScript_Sign3_Text_0, MSGBOX_SIGN
# 187 "data/maps/CloudedWood_1/scripts.pory"
	releaseall
	return


CloudedWood_EventScript_Woman1::
# 191 "data/maps/CloudedWood_1/scripts.pory"
	lock
# 192 "data/maps/CloudedWood_1/scripts.pory"
	faceplayer
# 193 "data/maps/CloudedWood_1/scripts.pory"
	msgbox CloudedWood_EventScript_Woman1_Text_0
# 194 "data/maps/CloudedWood_1/scripts.pory"
	releaseall
	return


CloudedWood_EventScript_Fisherman::
# 198 "data/maps/CloudedWood_1/scripts.pory"
	lockall
# 199 "data/maps/CloudedWood_1/scripts.pory"
	faceplayer
# 200 "data/maps/CloudedWood_1/scripts.pory"
	msgbox CloudedWood_EventScript_Fisherman_Text_0
# 201 "data/maps/CloudedWood_1/scripts.pory"
	releaseall
	return


CloudedWood_EventScript_Agatha_Text_0:
# 109 "data/maps/CloudedWood_1/scripts.pory"
	.string "GHOST-type POKéMON are my\n"
	.string "specialty, but like all members of\l"
	.string "the ELITE FOUR, I am flexible\l"
	.string "enough to appreciate other\l"
	.string "POKéMON as well.$"

CloudedWood_EventScript_Agatha_PreBattle_Text_0:
# 117 "data/maps/CloudedWood_1/scripts.pory"
	.string "You're {PLAYER}, aren't you? I\n"
	.string "hear OAK's taken a lot of interest\l"
	.string "in you, child. Like me, his best\l"
	.string "days are behind him. But you might\l"
	.string "be surprised at how even this old\l"
	.string "bag can keep up with you young\l"
	.string "ones. I've even developed an\l"
	.string "affinity for DOUBLE BATTLES.$"

CloudedWood_EventScript_Agatha_PreBattle_Text_1:
# 121 "data/maps/CloudedWood_1/scripts.pory"
	.string "What do you say, would you like to\n"
	.string "see if you've got what it takes to\l"
	.string "defeat me?$"

CloudedWood_EventScript_DeclineToBattle_Text_0:
# 139 "data/maps/CloudedWood_1/scripts.pory"
	.string "No worries, dear. A former ELITE\n"
	.string "FOUR is a challenge that most\l"
	.string "TRAINERS shy away from.$"

CloudedWood_Agatha_Defeated_Text_0:
# 152 "data/maps/CloudedWood_1/scripts.pory"
	.string "Those ought to help you traverse\n"
	.string "the parts of KANTO with harsh\l"
	.string "weather.$"

CloudedWood_EventScript_Sign1_Text_0:
# 174 "data/maps/CloudedWood_1/scripts.pory"
	.string "CLOUDED WOOD.$"

CloudedWood_EventScript_Sign2_Text_0:
# 180 "data/maps/CloudedWood_1/scripts.pory"
	.string "AGATHA'S house.$"

CloudedWood_EventScript_Sign3_Text_0:
# 186 "data/maps/CloudedWood_1/scripts.pory"
	.string "CLOUDED WOOD experiences Autumn\n"
	.string "year-round$"

CloudedWood_EventScript_Woman1_Text_0:
# 193 "data/maps/CloudedWood_1/scripts.pory"
	.string "My girlfriend thinks I'm weird for\n"
	.string "this, but there's something about\l"
	.string "this place that calls to me.$"

CloudedWood_EventScript_Fisherman_Text_0:
# 200 "data/maps/CloudedWood_1/scripts.pory"
	.string "The stillness here in CLOUDED WOOD\n"
	.string "makes it a perfect spot for\l"
	.string "fishing.$"

Aspen_Intro::
# 16 "data/maps/CloudedWood_1/scripts.pory"
	.string "Boo!$"

Aspen_Outro::
# 20 "data/maps/CloudedWood_1/scripts.pory"
	.string "You're scary.$"

Aspen_Postbattle::
# 24 "data/maps/CloudedWood_1/scripts.pory"
	.string "Do you feel that? This forest is\n"
	.string "connected to the other side.$"

Vanessa_Intro::
# 35 "data/maps/CloudedWood_1/scripts.pory"
	.string "The time has come.$"

Vanessa_Outro::
# 39 "data/maps/CloudedWood_1/scripts.pory"
	.string "You're even more talented than I\n"
	.string "foresaw.$"

Vanessa_Postbattle::
# 43 "data/maps/CloudedWood_1/scripts.pory"
	.string "There is still more to our world\n"
	.string "that has yet to be explained. Even\l"
	.string "beyond the world of POKéMON.$"

Cody_Intro::
# 54 "data/maps/CloudedWood_1/scripts.pory"
	.string "Can you pass this test?$"

Cody_Outro::
# 58 "data/maps/CloudedWood_1/scripts.pory"
	.string "You met the moment.$"

Cody_Postbattle::
# 62 "data/maps/CloudedWood_1/scripts.pory"
	.string "Even places like this deserve\n"
	.string "preservation efforts..$"

Bristol_Intro::
# 73 "data/maps/CloudedWood_1/scripts.pory"
	.string "You look like you've seen a\n"
	.string "GHOST-type.$"

Bristol_Outro::
# 77 "data/maps/CloudedWood_1/scripts.pory"
	.string "Your spirit was truly unshakable.$"

Bristol_Postbattle::
# 81 "data/maps/CloudedWood_1/scripts.pory"
	.string "GHOST-type POKéMON needn't be\n"
	.string "concerned with NORMAL and\l"
	.string "FIGHTING-type attacks.$"

Denzel_Intro::
# 92 "data/maps/CloudedWood_1/scripts.pory"
	.string "My POKéMON have a burning passion\n"
	.string "for BATTLE!$"

Denzel_Outro::
# 96 "data/maps/CloudedWood_1/scripts.pory"
	.string "Extinguished...$"

Denzel_Postbattle::
# 100 "data/maps/CloudedWood_1/scripts.pory"
	.string "Something about these red and\n"
	.string "orange leaves makes me feel right\l"
	.string "at home.$"

Agatha_CantBattle::
# 156 "data/maps/CloudedWood_1/scripts.pory"
	.string "You don't have enough POKéMON\n"
	.string "with you to engage me in a DOUBLE\l"
	.string "BATTLE.$"

Agatha_Intro::
# 160 "data/maps/CloudedWood_1/scripts.pory"
	.string "Try to keep your bearings!$"

Agatha_Outro::
# 164 "data/maps/CloudedWood_1/scripts.pory"
	.string "OAK was right. You're quite the\n"
	.string "young TRAINER.$"

Agatha_Postbattle::
# 168 "data/maps/CloudedWood_1/scripts.pory"
	.string "I haven't encountered a TRAINER\n"
	.string "as promising as yourself in quite\l"
	.string "some time. I'd love to help your\l"
	.string "journey along.$"
