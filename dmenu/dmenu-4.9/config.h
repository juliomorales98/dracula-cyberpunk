/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static int centered = 1; /* - option; centers dmenu on screen */
static int min_width = 500; /* minimum widtg when centered */
static const char *fonts[] = {
	"monospace:size=11"
};
static const char *prompt      = "Execute:";      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#f8f8f2", "#282a36" },
	[SchemeSel] = { "#50fa7b", "#6272a4" },
    [SchemeSelHighlight] = {"#8be9fd","#44475a"},
    [SchemeNormHighlight] = {"#8be9fd","#222222"},
	[SchemeOut] = { "#8be9fd", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 5;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
static const unsigned int border_width = 3;
