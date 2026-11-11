/* LEVEL_17:0x117650 -- placement copy of LEVEL_16_117C98.c: scans four slot pairs, keeps the smallest key and its value; returns 0 on a tie or when the gate fails. */

extern unsigned int D_002D0FF8[];
extern unsigned int D_002D0FB8[];

int func_1125F8(void);

int func_117650(void)
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
    if (func_1125F8() != 0) {
        return 0;
    }
    for (i = 0; i < 4; i++) {
        a1 = D_002D0FF8[i];
        if (a1 != 0) {
            a = D_002D0FB8[i];
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
