/* LEVEL_19:0x118648 -- placement copy of LEVEL_16_117C98.c: scans four slot pairs, keeps the smallest key and its value; returns 0 on a tie or when the gate fails. */

extern unsigned int D_002DFE78[];
extern unsigned int D_002DFE38[];

int func_113610(void);

int func_118648(void)
{
    unsigned int best;
    unsigned int bestv;
    unsigned int tie;
    unsigned int i;
    unsigned int a1;
    unsigned int a;

    best = 0x7FFFFFFF;
    bestv = 0;
    tie = 0;
    if (func_113610() != 0) {
        return 0;
    }
    for (i = 0; i < 4; i++) {
        a1 = D_002DFE78[i];
        if (a1 != 0) {
            a = D_002DFE38[i];
            if (a < best) {
                best = a;
                bestv = a1;
                tie = 0;
            } else if (a == best) {
                tie = 1;
            }
        }
    }
    if (tie != 0) {
        return 0;
    }
    return bestv;
}
