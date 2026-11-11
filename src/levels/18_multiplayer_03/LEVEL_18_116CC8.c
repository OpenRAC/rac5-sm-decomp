/* LEVEL_18:0x116CC8 -- placement copy of LEVEL_16_117C98.c: scans four slot pairs, keeps the smallest key and its value; returns 0 on a tie or when the gate fails. */

extern unsigned int D_002E0078[];
extern unsigned int D_002E0038[];

int func_111C20(void);

int func_116CC8(void)
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
    if (func_111C20() != 0) {
        return 0;
    }
    for (i = 0; i < 4; i++) {
        a1 = D_002E0078[i];
        if (a1 != 0) {
            a = D_002E0038[i];
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
