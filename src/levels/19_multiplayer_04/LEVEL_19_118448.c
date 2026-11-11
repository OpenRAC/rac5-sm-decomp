/* LEVEL_19:0x118448 -- placement copy of LEVEL_16_117A98.c: picks the entry with the largest key from a four-entry table, returning its value or zero on a tie. */
extern int D_002DFE78[];
extern int D_002DFE08[];
extern int func_113610(void);

int func_118448(void)
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
    i = 0;
    do {
        if (D_002DFE78[i] != 0) {
            if (best < D_002DFE08[i]) {
                best = D_002DFE08[i];
                val = D_002DFE78[i];
            } else if (D_002DFE08[i] == best) {
                tie = 1;
            }
        }
        i++;
    } while (i < 4);
    if (tie) {
        return 0;
    }
    return val;
}
