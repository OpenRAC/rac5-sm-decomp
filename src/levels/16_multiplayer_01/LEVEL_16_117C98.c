/* LEVEL_16:0x117C98 -- scans four slot pairs, keeps the smallest key and its value; returns 0 on a tie or when the gate fails. */

extern unsigned int D_002DFCF8[];
extern unsigned int D_002DFCB8[];

int func_112E68(void);

int func_117C98(void)
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
    if (func_112E68() != 0) {
        return 0;
    }
    for (i = 0; i < 4; i++) {
        a1 = D_002DFCF8[i];
        if (a1 != 0) {
            a = D_002DFCB8[i];
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
