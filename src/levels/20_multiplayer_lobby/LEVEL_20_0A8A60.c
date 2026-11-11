/* LEVEL_20:0x0A8A60 -- placement copy of LEVEL_01_0CEE30.c: draws the 47 icon entries of the table into the text context and finishes the batch. */
typedef struct Ctx {
    char pad_00[0x14];
    unsigned int flags;
} Ctx;

typedef struct Q {
    short v;
    short pad;
} Q;

extern Ctx D_0019E1A8;
extern int D_001133A0;
extern unsigned char D_0011339C;
extern unsigned char D_001133B0[];
extern unsigned char g_RENDEREFFECT_SWIRLY_Active;

extern void func_093098(Ctx *ctx, int value, int flags, int zero);
extern void func_0874F0(int id, Q *out, float f);
extern void func_093410(Ctx *ctx, short a, short b, short c, short d);
extern void func_0933F8(Ctx *ctx, int id, unsigned int color);
extern int func_092F18(Ctx *ctx, unsigned int a, unsigned int b);
extern int func_092FF8(Ctx *ctx, int a, int b);
extern int func_0A8A28(int index);
extern int func_021B40(int a, int b);
extern unsigned int func_0229F0(void);
extern int func_0937C0(Ctx *ctx, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_093190(Ctx *ctx);

void func_0A8A60(void)
{
    Q q[4];
    int i;
    int entry;
    int kind;

    func_093098(&D_0019E1A8, D_001133A0, 0x20800, 0);
    func_0874F0(0x1C1, q, 0.0f);
    func_093410(&D_0019E1A8, q[0].v, q[1].v, q[2].v, q[3].v);
    func_0933F8(&D_0019E1A8, 0x1C0, 0xFFFFFFFF);
    func_092F18(&D_0019E1A8, 0x40602020, 0xFFB07050);
    i = 0xFEF;
    do {
        func_092FF8(&D_0019E1A8, 1, 1);
        entry = func_0A8A28(i);
        if (entry >= 0) {
            kind = D_001133B0[entry * 16];
            if (func_021B40(*(int *)(D_001133B0 + (entry * 16 - 4)) * 2 + 0xA0, kind) != 0
                || D_0011339C != 0
                || func_0229F0() > 1) {
                func_0937C0(&D_0019E1A8, i, 0, entry, 0, 0, 0, 0, 0xFFFFFFFF);
            }
        }
        i++;
    } while (i < 0x101E);
    D_0019E1A8.flags |= 0x14;
    func_093190(&D_0019E1A8);
}

void func_0A8C00(void)
{
    g_RENDEREFFECT_SWIRLY_Active = 0;
}
