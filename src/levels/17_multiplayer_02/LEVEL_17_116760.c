/* LEVEL_17:0x116760 -- placement copy of LEVEL_16_117018.c: scoring hook for a hit between two players: updates the per-pair and per-player counters and, for a hit on an other player, plays the message of the matching weapon entry. */
typedef struct {
    char pad_00[0xF8];
    int idx;
    int w0FC;
} Player;

extern int D_002D0F38[][4];
extern int D_002D0F88[];
extern int D_002D1010[];
extern int D_002D10D0[];
extern int D_001AB998[];
extern int D_001AB9F8[];
extern int *D_001ABA58[];
extern unsigned char D_001ABAB8[];

extern int func_112590(void);
extern void func_114B48(int a);
extern void func_114B20(int a);
extern void func_124CA8(int a, int b);
extern int *func_021A90(int *a, int b);
extern char *func_115D28(Player *p);
extern unsigned char *func_10E8A8(int a);
extern int func_0968F8(int *a, int b, char *c, char *d, unsigned char *e);
extern void func_117BD8(int a);

static __inline__ int *MaxInt(int *a, int *b)
{
    if (*a < *b)
        return b;
    return a;
}

void func_116760(Player *a, Player *b, int key)
{
    int zero[4];
    int *p;
    int *q;
    int *r;
    unsigned int i;
    int v;

    D_002D0F38[a->idx][b->idx] = D_002D0F38[a->idx][b->idx] + 1;
    if (a != b) {
        D_002D0F88[a->idx] = D_002D0F88[a->idx] + 1;
        if (func_112590() == 1)
            func_114B20(a->w0FC);
        for (i = 0; i < 0x18; i++) {
            if (D_001AB998[i] == key) {
                if (D_001ABAB8[i] != 0) {
                    r = func_021A90(D_001ABA58[i], a->idx);
                    v = r[4];
                } else {
                    v = D_001AB9F8[i];
                }
                func_0968F8(D_002D1010, 0x6C7, func_115D28(a), func_115D28(b), func_10E8A8(v));
                func_117BD8(0x5A);
                if (D_001ABA58[i] != 0)
                    goto inc;
                goto found;
            }
        }
    found:
        func_124CA8(D_002D0F88[a->idx], 0x5A);
        return;
    inc:
        D_002D10D0[i] = D_002D10D0[i] + 1;
        goto found;
    } else {
        if (func_112590() == 1) {
            zero[0] = 0;
            D_002D0F88[a->idx] = D_002D0F88[a->idx] - 1;
            p = &D_002D0F88[a->idx];
            q = MaxInt(zero, p);
            *p = *q;
            func_114B48(a->w0FC);
            func_124CA8(D_002D0F88[a->idx], 0x5A);
        }
    }
}
