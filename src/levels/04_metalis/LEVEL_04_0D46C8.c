/* LEVEL_04:0x0D46C8 -- placement copy of LEVEL_01_0CEE30.c: draws the 47 icon entries of the table into the text context and finishes the batch. */
typedef struct Ctx {
    char pad_00[0x14];
    unsigned int flags;
} Ctx;

typedef struct Q {
    short v;
    short pad;
} Q;

extern Ctx D_003470E8;
extern int D_0021C2D0;
extern unsigned char D_0021C2CC;
extern unsigned char D_0021C2E0[];
extern unsigned char g_RENDEREFFECT_SWIRLY_Active;

extern void func_0BF2F8(Ctx *ctx, int value, int flags, int zero);
extern void func_0B3958(int id, Q *out, float f);
extern void func_0BF670(Ctx *ctx, short a, short b, short c, short d);
extern void func_0BF658(Ctx *ctx, int id, unsigned int color);
extern int func_0BF178(Ctx *ctx, unsigned int a, unsigned int b);
extern int func_0BF258(Ctx *ctx, int a, int b);
extern int func_0D4690(int index);
extern int func_0271B8(int a, int b);
extern unsigned int func_027F68(void);
extern int func_0BFA20(Ctx *ctx, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0BF3F0(Ctx *ctx);

void func_0D46C8(void)
{
    Q q[4];
    int i;
    int entry;
    int kind;

    func_0BF2F8(&D_003470E8, D_0021C2D0, 0x20800, 0);
    func_0B3958(0x1C1, q, 0.0f);
    func_0BF670(&D_003470E8, q[0].v, q[1].v, q[2].v, q[3].v);
    func_0BF658(&D_003470E8, 0x1C0, 0xFFFFFFFF);
    func_0BF178(&D_003470E8, 0x40602020, 0xFFB07050);
    i = 0xFEF;
    do {
        func_0BF258(&D_003470E8, 1, 1);
        entry = func_0D4690(i);
        if (entry >= 0) {
            kind = D_0021C2E0[entry * 16];
            if (func_0271B8(*(int *)(D_0021C2E0 + (entry * 16 - 4)) * 2 + 0xA0, kind) != 0
                || D_0021C2CC != 0
                || func_027F68() > 1) {
                func_0BFA20(&D_003470E8, i, 0, entry, 0, 0, 0, 0, 0xFFFFFFFF);
            }
        }
        i++;
    } while (i < 0x101E);
    D_003470E8.flags |= 0x14;
    func_0BF3F0(&D_003470E8);
}

void func_0D4868(void)
{
    g_RENDEREFFECT_SWIRLY_Active = 0;
}
