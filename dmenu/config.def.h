/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;
static int centered = 0;
static int fuzzy = 1;

static const unsigned int alpha = OPAQUE; /* 0xe6  */
static const unsigned int border_width = 0;
static const unsigned long border_color = 0x474645;

static int min_width = 0;
static unsigned int lines = 0;
static unsigned int lineheight = 32;
// static unsigned int min_lineheight = 8;
static unsigned int columns = 1;

static const char *fonts[] = {"spectrum berry"};
static const char *prompt = NULL;
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = {"#fff", "#191919"},
    [SchemeSel] = {"#fff", "#202020"},
    [SchemeOut] = {"#fff", "#202020"},
    [SchemeSelHighlight] = {"#c795ae", "#202020"},
    [SchemeNormHighlight] = {"#c795ae", "#202020"},
    [SchemeInputField] = {"#fff", "#202020"},
    [SchemePrompt] = {"#fff", "#191919"}};

static const unsigned int alphas[SchemeLast][2] = {
    [SchemeNorm] = {OPAQUE, alpha},
    [SchemeSel] = {OPAQUE, alpha},
    [SchemeOut] = {OPAQUE, alpha},
    [SchemeSelHighlight] = {OPAQUE, alpha},
    [SchemeNormHighlight] = {OPAQUE, alpha},
    [SchemeInputField] = {OPAQUE, alpha}};

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

