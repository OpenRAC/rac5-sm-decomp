/* LEVEL_19:0x0BDE08 -- placement copy of LEVEL_01_0CEE30.c: draws the 47 icon entries of the table into the text context and finishes the batch. */
typedef struct Ctx {
    char pad_00[0x14];
    unsigned int flags;
} Ctx;

typedef struct Q {
    short v;
    short pad;
} Q;

extern Ctx D_0027AAE8;
extern int D_001B1E40;
extern unsigned char D_001B1E3C;
extern unsigned char D_001B1E50[];
extern unsigned char g_RENDEREFFECT_SWIRLY_Active;

extern void func_0A8440(Ctx *ctx, int value, int flags, int zero);
extern void func_09C688(int id, Q *out, float f);
extern void func_0A87B8(Ctx *ctx, short a, short b, short c, short d);
extern void func_0A87A0(Ctx *ctx, int id, unsigned int color);
extern int func_0A82C0(Ctx *ctx, unsigned int a, unsigned int b);
extern int func_0A83A0(Ctx *ctx, int a, int b);
extern int func_0BDDD0(int index);
extern int func_024B70(int a, int b);
extern unsigned int func_025A78(void);
extern int func_0A8B68(Ctx *ctx, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0A8538(Ctx *ctx);

void func_0BDE08(void)
{
    Q q[4];
    int i;
    int entry;
    int kind;

    func_0A8440(&D_0027AAE8, D_001B1E40, 0x20800, 0);
    func_09C688(0x1C1, q, 0.0f);
    func_0A87B8(&D_0027AAE8, q[0].v, q[1].v, q[2].v, q[3].v);
    func_0A87A0(&D_0027AAE8, 0x1C0, 0xFFFFFFFF);
    func_0A82C0(&D_0027AAE8, 0x40602020, 0xFFB07050);
    i = 0xFEF;
    do {
        func_0A83A0(&D_0027AAE8, 1, 1);
        entry = func_0BDDD0(i);
        if (entry >= 0) {
            kind = D_001B1E50[entry * 16];
            if (func_024B70(*(int *)(D_001B1E50 + (entry * 16 - 4)) * 2 + 0xA0, kind) != 0
                || D_001B1E3C != 0
                || func_025A78() > 1) {
                func_0A8B68(&D_0027AAE8, i, 0, entry, 0, 0, 0, 0, 0xFFFFFFFF);
            }
        }
        i++;
    } while (i < 0x101E);
    D_0027AAE8.flags |= 0x14;
    func_0A8538(&D_0027AAE8);
}

void func_0BDFA8(void)
{
    g_RENDEREFFECT_SWIRLY_Active = 0;
}
