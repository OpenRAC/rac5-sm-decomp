/* LEVEL_19:0x117778 -- placement copy of LEVEL_16_117018.c: scoring hook for a hit between two players: updates the per-pair and per-player counters and, for a hit on an other player, plays the message of the matching weapon entry. */
typedef struct {
    char pad_00[0xF8];
    int idx;
    int w0FC;
} Player;

extern int D_002DFDB8[][4];
extern int D_002DFE08[];
extern int D_002DFE90[];
extern int D_002DFF50[];
extern int D_001B9518[];
extern int D_001B9578[];
extern int *D_001B95D8[];
extern unsigned char D_001B9638[];

extern int func_1135A8(void);
extern void func_115B60(int a);
extern void func_115B38(int a);
extern void func_125BE8(int a, int b);
extern int *func_021D50(int *a, int b);
extern char *func_116D40(Player *p);
extern unsigned char *func_10F9D0(int a);
extern int func_096C90(int *a, int b, char *c, char *d, unsigned char *e);
extern void func_118BD0(int a);

static __inline__ int *MaxInt(int *a, int *b)
{
    if (*a < *b)
        return b;
    return a;
}

void func_117778(Player *a, Player *b, int key)
{
    int zero[4];
    int *p;
    int *q;
    int *r;
    unsigned int i;
    int v;

    D_002DFDB8[a->idx][b->idx] = D_002DFDB8[a->idx][b->idx] + 1;
    if (a != b) {
        D_002DFE08[a->idx] = D_002DFE08[a->idx] + 1;
        if (func_1135A8() == 1)
            func_115B38(a->w0FC);
        for (i = 0; i < 0x18; i++) {
            if (D_001B9518[i] == key) {
                if (D_001B9638[i] != 0) {
                    r = func_021D50(D_001B95D8[i], a->idx);
                    v = r[4];
                } else {
                    v = D_001B9578[i];
                }
                func_096C90(D_002DFE90, 0x6C7, func_116D40(a), func_116D40(b), func_10F9D0(v));
                func_118BD0(0x5A);
                if (D_001B95D8[i] != 0)
                    goto inc;
                goto found;
            }
        }
    found:
        func_125BE8(D_002DFE08[a->idx], 0x5A);
        return;
    inc:
        D_002DFF50[i] = D_002DFF50[i] + 1;
        goto found;
    } else {
        if (func_1135A8() == 1) {
            zero[0] = 0;
            D_002DFE08[a->idx] = D_002DFE08[a->idx] - 1;
            p = &D_002DFE08[a->idx];
            q = MaxInt(zero, p);
            *p = *q;
            func_115B60(a->w0FC);
            func_125BE8(D_002DFE08[a->idx], 0x5A);
        }
    }
}
