/* LEVEL_17:0x1175A8 -- placement copy of LEVEL_16_117BF0.c: picks the entry with the largest unsigned key from a four-entry table, returning its value or zero on a tie. */
extern int D_002D0FF8[];
extern unsigned int D_002D0FB8[];
extern int func_1125F8(void);

int func_1175A8(void)
{
    int best;
    int tie;
    int val;
    unsigned int i;

    best = -1;
    tie = 0;
    val = 0;
    if (func_1125F8() != 0) {
        return 0;
    }
    for (i = 0; i < 4; i++) {
        if (D_002D0FF8[i] == 0) {
            continue;
        }
        if ((unsigned int)best < D_002D0FB8[i]) {
            best = D_002D0FB8[i];
            val = D_002D0FF8[i];
        } else if (D_002D0FB8[i] == (unsigned int)best) {
            tie = 1;
        }
    }
    if (tie) {
        return 0;
    }
    return val;
}
