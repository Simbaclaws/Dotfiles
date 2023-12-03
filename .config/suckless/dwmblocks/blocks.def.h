//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "volume",		0,		10},
	{"", "cpu",		10,		18},
	{"", "memory",		10,		14},
	/* {" ", "battery",	300,		0}, Disabled because I'm on desktop */
	{"", "weather",		18000,		5},
	{" 󰸘 ", "clock",		30,		0},
	{"   ", "debianupdate",	3600,		9},
	{"", "traffic",		1,		16},
	{"", "internet",	5,		4},
	/* {"", "wifi",	30,		0}, Disabled because I'm on ethernet */
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = "\0";
static unsigned int delimLen = 2;
