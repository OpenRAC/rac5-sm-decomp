/* LEVEL_17:0x117450 -- placement copy of LEVEL_16_117A98.c: picks the entry with the largest key from a four-entry table, returning its value or zero on a tie. */
extern int D_002D0FF8[];
extern int D_002D0F88[];
extern int func_1125F8(void);

int func_117450(void)
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
    i = 0;
    do {
        if (D_002D0FF8[i] != 0) {
            if (best < D_002D0F88[i]) {
                best = D_002D0F88[i];
                val = D_002D0FF8[i];
            } else if (D_002D0F88[i] == best) {
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
