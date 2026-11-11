/* LEVEL_15:0x0AF478 -- placement copy of LEVEL_01_0CEE30.c: draws the 47 icon entries of the table into the text context and finishes the batch. */
typedef struct Ctx {
    char pad_00[0x14];
    unsigned int flags;
} Ctx;

typedef struct Q {
    short v;
    short pad;
} Q;

extern Ctx D_00244128;
extern int D_00157A90;
extern unsigned char D_00157A8C;
extern unsigned char D_00157AA0[];
extern unsigned char g_RENDEREFFECT_SWIRLY_Active;

extern void func_09A160(Ctx *ctx, int value, int flags, int zero);
extern void func_08EFD0(int id, Q *out, float f);
extern void func_09A4D8(Ctx *ctx, short a, short b, short c, short d);
extern void func_09A4C0(Ctx *ctx, int id, unsigned int color);
extern int func_099FE0(Ctx *ctx, unsigned int a, unsigned int b);
extern int func_09A0C0(Ctx *ctx, int a, int b);
extern int func_0AF440(int index);
extern int func_021518(int a, int b);
extern unsigned int func_0221B8(void);
extern int func_09A888(Ctx *ctx, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_09A258(Ctx *ctx);

void func_0AF478(void)
{
    Q q[4];
    int i;
    int entry;
    int kind;

    func_09A160(&D_00244128, D_00157A90, 0x20800, 0);
    func_08EFD0(0x1C1, q, 0.0f);
    func_09A4D8(&D_00244128, q[0].v, q[1].v, q[2].v, q[3].v);
    func_09A4C0(&D_00244128, 0x1C0, 0xFFFFFFFF);
    func_099FE0(&D_00244128, 0x40602020, 0xFFB07050);
    i = 0xFEF;
    do {
        func_09A0C0(&D_00244128, 1, 1);
        entry = func_0AF440(i);
        if (entry >= 0) {
            kind = D_00157AA0[entry * 16];
            if (func_021518(*(int *)(D_00157AA0 + (entry * 16 - 4)) * 2 + 0xA0, kind) != 0
                || D_00157A8C != 0
                || func_0221B8() > 1) {
                func_09A888(&D_00244128, i, 0, entry, 0, 0, 0, 0, 0xFFFFFFFF);
            }
        }
        i++;
    } while (i < 0x101E);
    D_00244128.flags |= 0x14;
    func_09A258(&D_00244128);
}

void func_0AF618(void)
{
    g_RENDEREFFECT_SWIRLY_Active = 0;
}
