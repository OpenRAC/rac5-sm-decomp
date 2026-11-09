/* LEVEL_16:0x117A98 -- picks the entry with the largest key from a four-entry table, returning its value or zero on a tie. */
extern int D_002DFCF8[];
extern int D_002DFC88[];
extern int func_112E68(void);

int func_117A98(void)
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
    i = 0;
    do {
        if (D_002DFCF8[i] != 0) {
            if (best < D_002DFC88[i]) {
                best = D_002DFC88[i];
                val = D_002DFCF8[i];
            } else if (D_002DFC88[i] == best) {
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
