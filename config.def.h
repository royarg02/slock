/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[BACKGROUND] = "black",     /* after initialization */
	[INIT] = "#2d2d2d",     /* after initialization */
	[INPUT] = "#005577",    /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
	[CAPS] = "red",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static int failonclear = 1;

/* time in seconds before the monitor shuts down */
static int monitortime = 5;

/* time in seconds to cancel lock */
static int timetocancel = 5;

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static int logosize = 75;
static const int logow = 12;	/* grid width and height for right center alignment*/
static const int logoh = 6;

static XRectangle rectangles[9] = {
	/* x	y	w	h */
	{ 0,	3,	1,	3 },
	{ 1,	3,	2,	1 },
	{ 0,	5,	8,	1 },
	{ 3,	0,	1,	5 },
	{ 5,	3,	1,	2 },
	{ 7,	3,	1,	2 },
	{ 8,	3,	4,	1 },
	{ 9,	4,	1,	2 },
	{ 11,	4,	1,	2 },

};

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "color0",       STRING,  &colorname[INIT] },
		{ "color4",       STRING,  &colorname[INPUT] },
		{ "color1",       STRING,  &colorname[FAILED] },
		{ "color3",       STRING,  &colorname[CAPS] },
		{ "color5",       STRING,  &colorname[BACKGROUND] },
		{ "failonclear", INTEGER,  &failonclear },
		{ "monitortime", INTEGER,  &monitortime },
		{ "timetocancel",INTEGER,  &timetocancel },
		{ "logosize",    INTEGER,  &logosize },
};
