/* LEVEL_19:0x1185A0 -- placement copy of LEVEL_16_117BF0.c: picks the entry with the largest unsigned key from a four-entry table, returning its value or zero on a tie. */
extern int D_002DFE78[];
extern unsigned int D_002DFE38[];
extern int func_113610(void);

int func_1185A0(void)
{
    int best;
    int tie;
    int val;
    unsigned int i;

    best = -1;
    tie = 0;
    val = 0;
    if (func_113610() != 0) {
        return 0;
    }
    for (i = 0; i < 4; i++) {
        if (D_002DFE78[i] == 0) {
            continue;
        }
        if ((unsigned int)best < D_002DFE38[i]) {
            best = D_002DFE38[i];
            val = D_002DFE78[i];
        } else if (D_002DFE38[i] == (unsigned int)best) {
            tie = 1;
        }
    }
    if (tie) {
        return 0;
    }
    return val;
}
