/* LEVEL_06:0x0C9730 -- placement copy of LEVEL_01_0CEE30.c: draws the 47 icon entries of the table into the text context and finishes the batch. */
typedef struct Ctx {
    char pad_00[0x14];
    unsigned int flags;
} Ctx;

typedef struct Q {
    short v;
    short pad;
} Q;

extern Ctx D_00319668;
extern int D_001F1D10;
extern unsigned char D_001F1D0C;
extern unsigned char D_001F1D20[];
extern unsigned char g_RENDEREFFECT_SWIRLY_Active;

extern void func_0B4418(Ctx *ctx, int value, int flags, int zero);
extern void func_0A8ED8(int id, Q *out, float f);
extern void func_0B4790(Ctx *ctx, short a, short b, short c, short d);
extern void func_0B4778(Ctx *ctx, int id, unsigned int color);
extern int func_0B4298(Ctx *ctx, unsigned int a, unsigned int b);
extern int func_0B4378(Ctx *ctx, int a, int b);
extern int func_0C96F8(int index);
extern int func_0259D8(int a, int b);
extern unsigned int func_0268B0(void);
extern int func_0B4B40(Ctx *ctx, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0B4510(Ctx *ctx);

void func_0C9730(void)
{
    Q q[4];
    int i;
    int entry;
    int kind;

    func_0B4418(&D_00319668, D_001F1D10, 0x20800, 0);
    func_0A8ED8(0x1C1, q, 0.0f);
    func_0B4790(&D_00319668, q[0].v, q[1].v, q[2].v, q[3].v);
    func_0B4778(&D_00319668, 0x1C0, 0xFFFFFFFF);
    func_0B4298(&D_00319668, 0x40602020, 0xFFB07050);
    i = 0xFEF;
    do {
        func_0B4378(&D_00319668, 1, 1);
        entry = func_0C96F8(i);
        if (entry >= 0) {
            kind = D_001F1D20[entry * 16];
            if (func_0259D8(*(int *)(D_001F1D20 + (entry * 16 - 4)) * 2 + 0xA0, kind) != 0
                || D_001F1D0C != 0
                || func_0268B0() > 1) {
                func_0B4B40(&D_00319668, i, 0, entry, 0, 0, 0, 0, 0xFFFFFFFF);
            }
        }
        i++;
    } while (i < 0x101E);
    D_00319668.flags |= 0x14;
    func_0B4510(&D_00319668);
}

void func_0C98D0(void)
{
    g_RENDEREFFECT_SWIRLY_Active = 0;
}
