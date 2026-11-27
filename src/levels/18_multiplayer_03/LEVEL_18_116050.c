/* LEVEL_18:0x116050 -- placement copy of LEVEL_16_117018.c: scoring hook for a hit between two players: updates the per-pair and per-player counters and, for a hit on an other player, plays the message of the matching weapon entry. */
typedef struct {
    char pad_00[0xF8];
    int idx;
    int w0FC;
} Player;

extern int D_002DFFB8[][4];
extern int D_002E0008[];
extern int D_002E0090[];
extern int D_002E0150[];
extern int D_001B9820[];
extern int D_001B9880[];
extern int *D_001B98E0[];
extern unsigned char D_001B9940[];

extern int func_111BB8(void);
extern void func_114188(int a);
extern void func_114160(int a);
extern void func_124338(int a, int b);
extern int *func_021758(int *a, int b);
extern char *func_115370(Player *p);
extern unsigned char *func_10DFE0(int a);
extern int func_096410(int *a, int b, char *c, char *d, unsigned char *e);
extern void func_117250(int a);

static __inline__ int *MaxInt(int *a, int *b)
{
    if (*a < *b)
        return b;
    return a;
}

void func_116050(Player *a, Player *b, int key)
{
    int zero[4];
    int *p;
    int *q;
    int *r;
    unsigned int i;
    int v;

    D_002DFFB8[a->idx][b->idx] = D_002DFFB8[a->idx][b->idx] + 1;
    if (a != b) {
        D_002E0008[a->idx] = D_002E0008[a->idx] + 1;
        if (func_111BB8() == 1)
            func_114160(a->w0FC);
        for (i = 0; i < 0x18; i++) {
            if (D_001B9820[i] == key) {
                if (D_001B9940[i] != 0) {
                    r = func_021758(D_001B98E0[i], a->idx);
                    v = r[4];
                } else {
                    v = D_001B9880[i];
                }
                func_096410(D_002E0090, 0x6C7, func_115370(a), func_115370(b), func_10DFE0(v));
                func_117250(0x5A);
                if (D_001B98E0[i] != 0)
                    goto inc;
                goto found;
            }
        }
    found:
        func_124338(D_002E0008[a->idx], 0x5A);
        return;
    inc:
        D_002E0150[i] = D_002E0150[i] + 1;
        goto found;
    } else {
        if (func_111BB8() == 1) {
            zero[0] = 0;
            D_002E0008[a->idx] = D_002E0008[a->idx] - 1;
            p = &D_002E0008[a->idx];
            q = MaxInt(zero, p);
            *p = *q;
            func_114188(a->w0FC);
            func_124338(D_002E0008[a->idx], 0x5A);
        }
    }
}
