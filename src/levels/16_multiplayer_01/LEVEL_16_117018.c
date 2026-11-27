/* LEVEL_16:0x117018 -- scoring hook for a hit between two players: updates the per-pair and per-player counters and, for a hit on an other player, plays the message of the matching weapon entry. */
typedef struct {
    char pad_00[0xF8];
    int idx;
    int w0FC;
} Player;

extern int D_002DFC38[][4];
extern int D_002DFC88[];
extern int D_002DFD10[];
extern int D_002DFDD0[];
extern int D_001B83A0[];
extern int D_001B8400[];
extern int *D_001B8460[];
extern unsigned char D_001B84C0[];

extern int func_112E00(void);
extern void func_1153E8(int a);
extern void func_1153C0(int a);
extern void func_125280(int a, int b);
extern int *func_022110(int *a, int b);
extern char *func_1165C8(Player *p);
extern unsigned char *func_10F330(int a);
extern int func_097400(int *a, int b, char *c, char *d, unsigned char *e);
extern void func_118228(int a);

static __inline__ int *MaxInt(int *a, int *b)
{
    if (*a < *b)
        return b;
    return a;
}

void func_117018(Player *a, Player *b, int key)
{
    int zero[4];
    int *p;
    int *q;
    int *r;
    unsigned int i;
    int v;

    D_002DFC38[a->idx][b->idx] = D_002DFC38[a->idx][b->idx] + 1;
    if (a != b) {
        D_002DFC88[a->idx] = D_002DFC88[a->idx] + 1;
        if (func_112E00() == 1)
            func_1153C0(a->w0FC);
        for (i = 0; i < 0x18; i++) {
            if (D_001B83A0[i] == key) {
                if (D_001B84C0[i] != 0) {
                    r = func_022110(D_001B8460[i], a->idx);
                    v = r[4];
                } else {
                    v = D_001B8400[i];
                }
                func_097400(D_002DFD10, 0x6C7, func_1165C8(a), func_1165C8(b), func_10F330(v));
                func_118228(0x5A);
                if (D_001B8460[i] != 0)
                    goto inc;
                goto found;
            }
        }
    found:
        func_125280(D_002DFC88[a->idx], 0x5A);
        return;
    inc:
        D_002DFDD0[i] = D_002DFDD0[i] + 1;
        goto found;
    } else {
        if (func_112E00() == 1) {
            zero[0] = 0;
            D_002DFC88[a->idx] = D_002DFC88[a->idx] - 1;
            p = &D_002DFC88[a->idx];
            q = MaxInt(zero, p);
            *p = *q;
            func_1153E8(a->w0FC);
            func_125280(D_002DFC88[a->idx], 0x5A);
        }
    }
}
