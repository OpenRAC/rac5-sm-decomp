/* LEVEL_16:0x117BF0 -- picks the entry with the largest unsigned key from a four-entry table, returning its value or zero on a tie. */
extern int D_002DFCF8[];
extern unsigned int D_002DFCB8[];
extern int func_112E68(void);

int func_117BF0(void)
{
    int best;
    int tie;
    int val;
    unsigned int i;

    best = -1;
    tie = 0;
    val = 0;
    if (func_112E68() != 0) {
        return 0;
    }
    for (i = 0; i < 4; i++) {
        if (D_002DFCF8[i] == 0) {
            continue;
        }
        if ((unsigned int)best < D_002DFCB8[i]) {
            best = D_002DFCB8[i];
            val = D_002DFCF8[i];
        } else if (D_002DFCB8[i] == (unsigned int)best) {
            tie = 1;
        }
    }
    if (tie) {
        return 0;
    }
    return val;
}
