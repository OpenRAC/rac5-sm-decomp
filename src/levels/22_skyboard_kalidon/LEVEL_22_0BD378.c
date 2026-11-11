/* LEVEL_22:0x0BD378 -- placement copy of LEVEL_01_0CEE30.c: draws the 47 icon entries of the table into the text context and finishes the batch. */
typedef struct Ctx {
    char pad_00[0x14];
    unsigned int flags;
} Ctx;

typedef struct Q {
    short v;
    short pad;
} Q;

extern Ctx D_002824A8;
extern int D_00162190;
extern unsigned char D_0016218C;
extern unsigned char D_001621A0[];
extern unsigned char g_RENDEREFFECT_SWIRLY_Active;

extern void func_0A7FC0(Ctx *ctx, int value, int flags, int zero);
extern void func_09CD18(int id, Q *out, float f);
extern void func_0A8338(Ctx *ctx, short a, short b, short c, short d);
extern void func_0A8320(Ctx *ctx, int id, unsigned int color);
extern int func_0A7E40(Ctx *ctx, unsigned int a, unsigned int b);
extern int func_0A7F20(Ctx *ctx, int a, int b);
extern int func_0BD340(int index);
extern int func_021EB8(int a, int b);
extern unsigned int func_022B98(void);
extern int func_0A86E8(Ctx *ctx, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0A80B8(Ctx *ctx);

void func_0BD378(void)
{
    Q q[4];
    int i;
    int entry;
    int kind;

    func_0A7FC0(&D_002824A8, D_00162190, 0x20800, 0);
    func_09CD18(0x1C1, q, 0.0f);
    func_0A8338(&D_002824A8, q[0].v, q[1].v, q[2].v, q[3].v);
    func_0A8320(&D_002824A8, 0x1C0, 0xFFFFFFFF);
    func_0A7E40(&D_002824A8, 0x40602020, 0xFFB07050);
    i = 0xFEF;
    do {
        func_0A7F20(&D_002824A8, 1, 1);
        entry = func_0BD340(i);
        if (entry >= 0) {
            kind = D_001621A0[entry * 16];
            if (func_021EB8(*(int *)(D_001621A0 + (entry * 16 - 4)) * 2 + 0xA0, kind) != 0
                || D_0016218C != 0
                || func_022B98() > 1) {
                func_0A86E8(&D_002824A8, i, 0, entry, 0, 0, 0, 0, 0xFFFFFFFF);
            }
        }
        i++;
    } while (i < 0x101E);
    D_002824A8.flags |= 0x14;
    func_0A80B8(&D_002824A8);
}

void func_0BD518(void)
{
    g_RENDEREFFECT_SWIRLY_Active = 0;
}
