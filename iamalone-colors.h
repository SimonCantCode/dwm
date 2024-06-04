static const char norm_fg[] = "#ece0db";
static const char norm_bg[] = "#2b2227";
static const char norm_border[] = "#a59c99";

static const char sel_fg[] = "#ece0db";
static const char sel_bg[] = "#3d3c5b";
static const char sel_border[] = "#b77775";

static const char urg_fg[] = "#ece0db";
static const char urg_bg[] = "#AE949D";
static const char urg_border[] = "#AE949D";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
