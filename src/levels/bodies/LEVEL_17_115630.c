/* LEVEL_17:0x115630 -- placement copy of LEVEL_16_115ED0.c: picks the highest-valued active entry of a two-entry table for one of two modes. */

struct Ent_115ED0 {
    int pad0[5];
    unsigned int flags;
    int val;
};

extern struct Ent_115ED0 D_002D0CB8[2];

extern int func_112590(void);

static __inline__ void Scan(int *outIdx, char *outTie)
{
    unsigned int i;
    int best;
    int bi;
    int tie;

    best = -0x7FFFFFFF;
    bi = -1;
    tie = 0;
    for (i = 0; i < 2; i++) {
        if (D_002D0CB8[i].flags & 2) {
            if (best < D_002D0CB8[i].val) {
                best = D_002D0CB8[i].val;
                bi = i;
                tie = 0;
            } else if (D_002D0CB8[i].val == best) {
                tie = 1;
            }
        }
    }
    if (outIdx != 0) {
        *outIdx = bi;
    }
    if (outTie != 0) {
        *outTie = tie;
    }
}

void func_115630(int *outIdx, char *outTie)
{
    if (func_112590() == 1) {
        Scan(outIdx, outTie);
    } else if (func_112590() == 2) {
        Scan(outIdx, outTie);
    }
}
