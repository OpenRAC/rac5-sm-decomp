/* LEVEL_03:0x0CEC18 -- placement copy of LEVEL_01_0CEE30.c: draws the 47 icon entries of the table into the text context and finishes the batch. */
typedef struct Ctx {
    char pad_00[0x14];
    unsigned int flags;
} Ctx;

typedef struct Q {
    short v;
    short pad;
} Q;

extern Ctx D_00347768;
extern int D_0021B490;
extern unsigned char D_0021B48C;
extern unsigned char D_0021B4A0[];
extern unsigned char g_RENDEREFFECT_SWIRLY_Active;

extern void func_0B9900(Ctx *ctx, int value, int flags, int zero);
extern void func_0AE488(int id, Q *out, float f);
extern void func_0B9C78(Ctx *ctx, short a, short b, short c, short d);
extern void func_0B9C60(Ctx *ctx, int id, unsigned int color);
extern int func_0B9780(Ctx *ctx, unsigned int a, unsigned int b);
extern int func_0B9860(Ctx *ctx, int a, int b);
extern int func_0CEBE0(int index);
extern int func_027408(int a, int b);
extern unsigned int func_0281E0(void);
extern int func_0BA028(Ctx *ctx, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0B99F8(Ctx *ctx);

void func_0CEC18(void)
{
    Q q[4];
    int i;
    int entry;
    int kind;

    func_0B9900(&D_00347768, D_0021B490, 0x20800, 0);
    func_0AE488(0x1C1, q, 0.0f);
    func_0B9C78(&D_00347768, q[0].v, q[1].v, q[2].v, q[3].v);
    func_0B9C60(&D_00347768, 0x1C0, 0xFFFFFFFF);
    func_0B9780(&D_00347768, 0x40602020, 0xFFB07050);
    i = 0xFEF;
    do {
        func_0B9860(&D_00347768, 1, 1);
        entry = func_0CEBE0(i);
        if (entry >= 0) {
            kind = D_0021B4A0[entry * 16];
            if (func_027408(*(int *)(D_0021B4A0 + (entry * 16 - 4)) * 2 + 0xA0, kind) != 0
                || D_0021B48C != 0
                || func_0281E0() > 1) {
                func_0BA028(&D_00347768, i, 0, entry, 0, 0, 0, 0, 0xFFFFFFFF);
            }
        }
        i++;
    } while (i < 0x101E);
    D_00347768.flags |= 0x14;
    func_0B99F8(&D_00347768);
}

void func_0CEDB8(void)
{
    g_RENDEREFFECT_SWIRLY_Active = 0;
}
