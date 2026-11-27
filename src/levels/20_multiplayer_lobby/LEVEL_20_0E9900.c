/* LEVEL_20:0x0E9900 -- placement copy of LEVEL_16_117018.c: scoring hook for a hit between two players: updates the per-pair and per-player counters and, for a hit on an other player, plays the message of the matching weapon entry. */
typedef struct {
    char pad_00[0xF8];
    int idx;
    int w0FC;
} Player;

extern int D_00203190[][4];
extern int D_002031E0[];
extern int D_00203268[];
extern int D_00203328[];
extern int D_0011AA40[];
extern int D_0011AAA0[];
extern int *D_0011AB00[];
extern unsigned char D_0011AB60[];

extern int func_0E5970(void);
extern void func_0E7D30(int a);
extern void func_0E7D08(int a);
extern void func_0F7380(int a, int b);
extern int *func_01EE10(int *a, int b);
extern char *func_0E8EC8(Player *p);
extern unsigned char *func_0E2118(int a);
extern int func_081AF8(int *a, int b, char *c, char *d, unsigned char *e);
extern void func_0EA740(int a);

static __inline__ int *MaxInt(int *a, int *b)
{
    if (*a < *b)
        return b;
    return a;
}

void func_0E9900(Player *a, Player *b, int key)
{
    int zero[4];
    int *p;
    int *q;
    int *r;
    unsigned int i;
    int v;

    D_00203190[a->idx][b->idx] = D_00203190[a->idx][b->idx] + 1;
    if (a != b) {
        D_002031E0[a->idx] = D_002031E0[a->idx] + 1;
        if (func_0E5970() == 1)
            func_0E7D08(a->w0FC);
        for (i = 0; i < 0x18; i++) {
            if (D_0011AA40[i] == key) {
                if (D_0011AB60[i] != 0) {
                    r = func_01EE10(D_0011AB00[i], a->idx);
                    v = r[4];
                } else {
                    v = D_0011AAA0[i];
                }
                func_081AF8(D_00203268, 0x6C7, func_0E8EC8(a), func_0E8EC8(b), func_0E2118(v));
                func_0EA740(0x5A);
                if (D_0011AB00[i] != 0)
                    goto inc;
                goto found;
            }
        }
    found:
        func_0F7380(D_002031E0[a->idx], 0x5A);
        return;
    inc:
        D_00203328[i] = D_00203328[i] + 1;
        goto found;
    } else {
        if (func_0E5970() == 1) {
            zero[0] = 0;
            D_002031E0[a->idx] = D_002031E0[a->idx] - 1;
            p = &D_002031E0[a->idx];
            q = MaxInt(zero, p);
            *p = *q;
            func_0E7D30(a->w0FC);
            func_0F7380(D_002031E0[a->idx], 0x5A);
        }
    }
}
