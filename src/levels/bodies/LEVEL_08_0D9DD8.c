/* LEVEL_08:0x0D9DD8 -- placement copy of LEVEL_01_0CEE30.c: draws the 47 icon entries of the table into the text context and finishes the batch. */
typedef struct Ctx {
    char pad_00[0x14];
    unsigned int flags;
} Ctx;

typedef struct Q {
    short v;
    short pad;
} Q;

extern Ctx D_0037BB68;
extern int D_0024BCD0;
extern unsigned char D_0024BCCC;
extern unsigned char D_0024BCE0[];
extern unsigned char g_RENDEREFFECT_SWIRLY_Active;

extern void func_0C4A08(Ctx *ctx, int value, int flags, int zero);
extern void func_0B9040(int id, Q *out, float f);
extern void func_0C4D80(Ctx *ctx, short a, short b, short c, short d);
extern void func_0C4D68(Ctx *ctx, int id, unsigned int color);
extern int func_0C4888(Ctx *ctx, unsigned int a, unsigned int b);
extern int func_0C4968(Ctx *ctx, int a, int b);
extern int func_0D9DA0(int index);
extern int func_027B50(int a, int b);
extern unsigned int func_028928(void);
extern int func_0C5130(Ctx *ctx, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0C4B00(Ctx *ctx);

void func_0D9DD8(void)
{
    Q q[4];
    int i;
    int entry;
    int kind;

    func_0C4A08(&D_0037BB68, D_0024BCD0, 0x20800, 0);
    func_0B9040(0x1C1, q, 0.0f);
    func_0C4D80(&D_0037BB68, q[0].v, q[1].v, q[2].v, q[3].v);
    func_0C4D68(&D_0037BB68, 0x1C0, 0xFFFFFFFF);
    func_0C4888(&D_0037BB68, 0x40602020, 0xFFB07050);
    i = 0xFEF;
    do {
        func_0C4968(&D_0037BB68, 1, 1);
        entry = func_0D9DA0(i);
        if (entry >= 0) {
            kind = D_0024BCE0[entry * 16];
            if (func_027B50(*(int *)(D_0024BCE0 + (entry * 16 - 4)) * 2 + 0xA0, kind) != 0
                || D_0024BCCC != 0
                || func_028928() > 1) {
                func_0C5130(&D_0037BB68, i, 0, entry, 0, 0, 0, 0, 0xFFFFFFFF);
            }
        }
        i++;
    } while (i < 0x101E);
    D_0037BB68.flags |= 0x14;
    func_0C4B00(&D_0037BB68);
}

void func_0D9F78(void)
{
    g_RENDEREFFECT_SWIRLY_Active = 0;
}
