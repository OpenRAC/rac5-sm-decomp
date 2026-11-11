/* LEVEL_07:0x0D0E90 -- placement copy of LEVEL_01_0CEE30.c: draws the 47 icon entries of the table into the text context and finishes the batch. */
typedef struct Ctx {
    char pad_00[0x14];
    unsigned int flags;
} Ctx;

typedef struct Q {
    short v;
    short pad;
} Q;

extern Ctx D_003421E8;
extern int D_00217110;
extern unsigned char D_0021710C;
extern unsigned char D_00217120[];
extern unsigned char g_RENDEREFFECT_SWIRLY_Active;

extern void func_0BBB78(Ctx *ctx, int value, int flags, int zero);
extern void func_0B0708(int id, Q *out, float f);
extern void func_0BBEF0(Ctx *ctx, short a, short b, short c, short d);
extern void func_0BBED8(Ctx *ctx, int id, unsigned int color);
extern int func_0BB9F8(Ctx *ctx, unsigned int a, unsigned int b);
extern int func_0BBAD8(Ctx *ctx, int a, int b);
extern int func_0D0E58(int index);
extern int func_027888(int a, int b);
extern unsigned int func_028660(void);
extern int func_0BC2A0(Ctx *ctx, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0BBC70(Ctx *ctx);

void func_0D0E90(void)
{
    Q q[4];
    int i;
    int entry;
    int kind;

    func_0BBB78(&D_003421E8, D_00217110, 0x20800, 0);
    func_0B0708(0x1C1, q, 0.0f);
    func_0BBEF0(&D_003421E8, q[0].v, q[1].v, q[2].v, q[3].v);
    func_0BBED8(&D_003421E8, 0x1C0, 0xFFFFFFFF);
    func_0BB9F8(&D_003421E8, 0x40602020, 0xFFB07050);
    i = 0xFEF;
    do {
        func_0BBAD8(&D_003421E8, 1, 1);
        entry = func_0D0E58(i);
        if (entry >= 0) {
            kind = D_00217120[entry * 16];
            if (func_027888(*(int *)(D_00217120 + (entry * 16 - 4)) * 2 + 0xA0, kind) != 0
                || D_0021710C != 0
                || func_028660() > 1) {
                func_0BC2A0(&D_003421E8, i, 0, entry, 0, 0, 0, 0, 0xFFFFFFFF);
            }
        }
        i++;
    } while (i < 0x101E);
    D_003421E8.flags |= 0x14;
    func_0BBC70(&D_003421E8);
}

void func_0D1030(void)
{
    g_RENDEREFFECT_SWIRLY_Active = 0;
}
