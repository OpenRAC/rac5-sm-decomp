/* LEVEL_02:0x0D57C0 -- placement copy of LEVEL_01_0CEE30.c: draws the 47 icon entries of the table into the text context and finishes the batch. */
typedef struct Ctx {
    char pad_00[0x14];
    unsigned int flags;
} Ctx;

typedef struct Q {
    short v;
    short pad;
} Q;

extern Ctx D_00343DE8;
extern int D_00217DD0;
extern unsigned char D_00217DCC;
extern unsigned char D_00217DE0[];
extern unsigned char g_RENDEREFFECT_SWIRLY_Active;

extern void func_0C0428(Ctx *ctx, int value, int flags, int zero);
extern void func_0B5018(int id, Q *out, float f);
extern void func_0C07A0(Ctx *ctx, short a, short b, short c, short d);
extern void func_0C0788(Ctx *ctx, int id, unsigned int color);
extern int func_0C02A8(Ctx *ctx, unsigned int a, unsigned int b);
extern int func_0C0388(Ctx *ctx, int a, int b);
extern int func_0D5788(int index);
extern int func_027D10(int a, int b);
extern unsigned int func_028AE8(void);
extern int func_0C0B50(Ctx *ctx, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0C0520(Ctx *ctx);

void func_0D57C0(void)
{
    Q q[4];
    int i;
    int entry;
    int kind;

    func_0C0428(&D_00343DE8, D_00217DD0, 0x20800, 0);
    func_0B5018(0x1C1, q, 0.0f);
    func_0C07A0(&D_00343DE8, q[0].v, q[1].v, q[2].v, q[3].v);
    func_0C0788(&D_00343DE8, 0x1C0, 0xFFFFFFFF);
    func_0C02A8(&D_00343DE8, 0x40602020, 0xFFB07050);
    i = 0xFEF;
    do {
        func_0C0388(&D_00343DE8, 1, 1);
        entry = func_0D5788(i);
        if (entry >= 0) {
            kind = D_00217DE0[entry * 16];
            if (func_027D10(*(int *)(D_00217DE0 + (entry * 16 - 4)) * 2 + 0xA0, kind) != 0
                || D_00217DCC != 0
                || func_028AE8() > 1) {
                func_0C0B50(&D_00343DE8, i, 0, entry, 0, 0, 0, 0, 0xFFFFFFFF);
            }
        }
        i++;
    } while (i < 0x101E);
    D_00343DE8.flags |= 0x14;
    func_0C0520(&D_00343DE8);
}

void func_0D5960(void)
{
    g_RENDEREFFECT_SWIRLY_Active = 0;
}
