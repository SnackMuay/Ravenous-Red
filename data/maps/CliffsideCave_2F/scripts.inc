CliffsideCave_2F_MapScripts::
	.byte 0


CliffsideCave_EventScript_Carlos::
# 5 "data/maps/CliffsideCave_2F/scripts.pory"
	trainerbattle_single TRAINER_HIKER_CARLOS, Carlos_Intro, Carlos_Outro
# 6 "data/maps/CliffsideCave_2F/scripts.pory"
	msgbox Carlos_Postbattle, MSGBOX_AUTOCLOSE
# 7 "data/maps/CliffsideCave_2F/scripts.pory"
	waitmessage
	end


CliffsideCave_EventScript_Mirabel::
# 25 "data/maps/CliffsideCave_2F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_MIRABEL, Mirabel_Intro, Mirabel_Outro
# 26 "data/maps/CliffsideCave_2F/scripts.pory"
	msgbox Mirabel_Postbattle, MSGBOX_AUTOCLOSE
# 27 "data/maps/CliffsideCave_2F/scripts.pory"
	waitmessage
	end


CliffsideCave_EventScript_Adrian::
# 45 "data/maps/CliffsideCave_2F/scripts.pory"
	trainerbattle_single TRAINER_CAMPER_ADRIAN, Adrian_Intro, Adrian_Outro
# 46 "data/maps/CliffsideCave_2F/scripts.pory"
	msgbox Adrian_Postbattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/CliffsideCave_2F/scripts.pory"
	waitmessage
	end


CliffsideCave_EventScript_Antonio::
# 64 "data/maps/CliffsideCave_2F/scripts.pory"
	trainerbattle_single TRAINER_HIKER_ANTONIO, Antonio_Intro, Antonio_Outro
# 65 "data/maps/CliffsideCave_2F/scripts.pory"
	msgbox Antonio_Postbattle, MSGBOX_AUTOCLOSE
# 66 "data/maps/CliffsideCave_2F/scripts.pory"
	waitmessage
	end


CliffsideCave_EventScript_Mario::
# 83 "data/maps/CliffsideCave_2F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_MARIO, Mario_Intro, Mario_Outro
# 84 "data/maps/CliffsideCave_2F/scripts.pory"
	msgbox Mario_Postbattle, MSGBOX_AUTOCLOSE
# 85 "data/maps/CliffsideCave_2F/scripts.pory"
	waitmessage
	end


CliffsideCave_EventScript_BlackBelt::
# 102 "data/maps/CliffsideCave_2F/scripts.pory"
	lockall
# 103 "data/maps/CliffsideCave_2F/scripts.pory"
	faceplayer
# 104 "data/maps/CliffsideCave_2F/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM17, CliffsideCave_GiveTM17
# 105 "data/maps/CliffsideCave_2F/scripts.pory"
	msgbox CliffsideCave_EventScript_BlackBelt_Text_0
# 106 "data/maps/CliffsideCave_2F/scripts.pory"
	releaseall
	return


CliffsideCave_GiveTM17::
# 110 "data/maps/CliffsideCave_2F/scripts.pory"
	msgbox CliffsideCave_EventScript_BlackBelt_Text_0
# 111 "data/maps/CliffsideCave_2F/scripts.pory"
	giveitem ITEM_TM17, amount = 1
# 112 "data/maps/CliffsideCave_2F/scripts.pory"
	setflag FLAG_RECEIVED_TM17
# 113 "data/maps/CliffsideCave_2F/scripts.pory"
	releaseall
	return


CliffsideCave_EventScript_BlackBelt_Text_0:
# 105 "data/maps/CliffsideCave_2F/scripts.pory"
	.string "I've been nursing a shoulder\n"
	.string "injury, so I won't be able to use\l"
	.string "this. You can have it.$"

Carlos_Intro::
# 11 "data/maps/CliffsideCave_2F/scripts.pory"
	.string "It's chilly down here. I hope my\n"
	.string "POKéMON don't get cold$"

Carlos_Outro::
# 15 "data/maps/CliffsideCave_2F/scripts.pory"
	.string "I think they were feeling cold\n"
	.string "after all.$"

Carlos_Postbattle::
# 19 "data/maps/CliffsideCave_2F/scripts.pory"
	.string "Be careful ahead. Those trainers\n"
	.string "are excited to battle.$"

Mirabel_Intro::
# 31 "data/maps/CliffsideCave_2F/scripts.pory"
	.string "Did you bring a pillow?$"

Mirabel_Outro::
# 35 "data/maps/CliffsideCave_2F/scripts.pory"
	.string "I guess your POKéMON weren't\n"
	.string "sleepy.$"

Mirabel_Postbattle::
# 39 "data/maps/CliffsideCave_2F/scripts.pory"
	.string "This cave is spooky. I can't shake\n"
	.string "the feeling that this whole place\l"
	.string "isn't supposed to exist.$"

Adrian_Intro::
# 51 "data/maps/CliffsideCave_2F/scripts.pory"
	.string "Say night-night!$"

Adrian_Outro::
# 55 "data/maps/CliffsideCave_2F/scripts.pory"
	.string "...Not fair.$"

Adrian_Postbattle::
# 58 "data/maps/CliffsideCave_2F/scripts.pory"
	.string "I noticed that the wild POKéMON\n"
	.string "near the entrance of this cave\l"
	.string "were different from the ones down\l"
	.string "here.$"

Antonio_Intro::
# 70 "data/maps/CliffsideCave_2F/scripts.pory"
	.string "The air is thick with tension!$"

Antonio_Outro::
# 74 "data/maps/CliffsideCave_2F/scripts.pory"
	.string "Oh well.$"

Antonio_Postbattle::
# 77 "data/maps/CliffsideCave_2F/scripts.pory"
	.string "As powerful as you are, I'd be\n"
	.string "careful entering the Viridian Gym.\l"
	.string "The trainers there are experts in\l"
	.string "battle.$"

Mario_Intro::
# 89 "data/maps/CliffsideCave_2F/scripts.pory"
	.string "My rare POKéMON will be your\n"
	.string "undoing!$"

Mario_Outro::
# 93 "data/maps/CliffsideCave_2F/scripts.pory"
	.string "Your team was too potent for me.$"

Mario_Postbattle::
# 97 "data/maps/CliffsideCave_2F/scripts.pory"
	.string "Exotic POKéMON have become far\n"
	.string "more abundant across Kanto\l"
	.string "lately. I'm making a point to\l"
	.string "collect the most powerful species.$"
