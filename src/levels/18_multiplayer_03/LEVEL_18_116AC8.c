/* LEVEL_18:0x116AC8 -- placement copy of LEVEL_16_117A98.c: picks the entry with the largest key from a four-entry table, returning its value or zero on a tie. */
extern int D_002E0078[];
extern int D_002E0008[];
extern int func_111C20(void);

int func_116AC8(void)
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
    i = 0;
    do {
        if (D_002E0078[i] != 0) {
            if (best < D_002E0008[i]) {
                best = D_002E0008[i];
                val = D_002E0078[i];
            } else if (D_002E0008[i] == best) {
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
