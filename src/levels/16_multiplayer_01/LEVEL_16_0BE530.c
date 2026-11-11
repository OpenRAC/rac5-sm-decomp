/* LEVEL_16:0x0BE530 -- placement copy of LEVEL_01_0CEE30.c: draws the 47 icon entries of the table into the text context and finishes the batch. */
typedef struct Ctx {
    char pad_00[0x14];
    unsigned int flags;
} Ctx;

typedef struct Q {
    short v;
    short pad;
} Q;

extern Ctx D_0027A968;
extern int D_001B0CC0;
extern unsigned char D_001B0CBC;
extern unsigned char D_001B0CD0[];
extern unsigned char g_RENDEREFFECT_SWIRLY_Active;

extern void func_0A8B68(Ctx *ctx, int value, int flags, int zero);
extern void func_09CDF8(int id, Q *out, float f);
extern void func_0A8EE0(Ctx *ctx, short a, short b, short c, short d);
extern void func_0A8EC8(Ctx *ctx, int id, unsigned int color);
extern int func_0A89E8(Ctx *ctx, unsigned int a, unsigned int b);
extern int func_0A8AC8(Ctx *ctx, int a, int b);
extern int func_0BE4F8(int index);
extern int func_024FC8(int a, int b);
extern unsigned int func_025ED0(void);
extern int func_0A9290(Ctx *ctx, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0A8C60(Ctx *ctx);

void func_0BE530(void)
{
    Q q[4];
    int i;
    int entry;
    int kind;

    func_0A8B68(&D_0027A968, D_001B0CC0, 0x20800, 0);
    func_09CDF8(0x1C1, q, 0.0f);
    func_0A8EE0(&D_0027A968, q[0].v, q[1].v, q[2].v, q[3].v);
    func_0A8EC8(&D_0027A968, 0x1C0, 0xFFFFFFFF);
    func_0A89E8(&D_0027A968, 0x40602020, 0xFFB07050);
    i = 0xFEF;
    do {
        func_0A8AC8(&D_0027A968, 1, 1);
        entry = func_0BE4F8(i);
        if (entry >= 0) {
            kind = D_001B0CD0[entry * 16];
            if (func_024FC8(*(int *)(D_001B0CD0 + (entry * 16 - 4)) * 2 + 0xA0, kind) != 0
                || D_001B0CBC != 0
                || func_025ED0() > 1) {
                func_0A9290(&D_0027A968, i, 0, entry, 0, 0, 0, 0, 0xFFFFFFFF);
            }
        }
        i++;
    } while (i < 0x101E);
    D_0027A968.flags |= 0x14;
    func_0A8C60(&D_0027A968);
}

void func_0BE6D0(void)
{
    g_RENDEREFFECT_SWIRLY_Active = 0;
}
