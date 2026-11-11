/* LEVEL_18:0x116C20 -- placement copy of LEVEL_16_117BF0.c: picks the entry with the largest unsigned key from a four-entry table, returning its value or zero on a tie. */
extern int D_002E0078[];
extern unsigned int D_002E0038[];
extern int func_111C20(void);

int func_116C20(void)
{
    int best;
    int tie;
    int val;
    unsigned int i;

    best = -1;
    tie = 0;
    val = 0;
    if (func_111C20() != 0) {
        return 0;
    }
    for (i = 0; i < 4; i++) {
        if (D_002E0078[i] == 0) {
            continue;
        }
        if ((unsigned int)best < D_002E0038[i]) {
            best = D_002E0038[i];
            val = D_002E0078[i];
        } else if (D_002E0038[i] == (unsigned int)best) {
            tie = 1;
        }
    }
    if (tie) {
        return 0;
    }
    return val;
}
