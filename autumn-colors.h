static const char norm_fg[] = "#eedd97";
static const char norm_bg[] = "#0d0403";
static const char norm_border[] = "#a69a69";

static const char sel_fg[] = "#eedd97";
static const char sel_bg[] = "#844519";
static const char sel_border[] = "#eedd97";

static const char urg_fg[] = "#eedd97";
static const char urg_bg[] = "#8E4B13";
static const char urg_border[] = "#8E4B13";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
