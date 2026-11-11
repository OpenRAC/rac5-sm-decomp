/* LEVEL_10:0x0D0270 -- placement copy of LEVEL_01_0CEE30.c: draws the 47 icon entries of the table into the text context and finishes the batch. */
typedef struct Ctx {
    char pad_00[0x14];
    unsigned int flags;
} Ctx;

typedef struct Q {
    short v;
    short pad;
} Q;

extern Ctx D_00335CE8;
extern int D_0020BE10;
extern unsigned char D_0020BE0C;
extern unsigned char D_0020BE20[];
extern unsigned char g_RENDEREFFECT_SWIRLY_Active;

extern void func_0BAE60(Ctx *ctx, int value, int flags, int zero);
extern void func_0AF820(int id, Q *out, float f);
extern void func_0BB1D8(Ctx *ctx, short a, short b, short c, short d);
extern void func_0BB1C0(Ctx *ctx, int id, unsigned int color);
extern int func_0BACE0(Ctx *ctx, unsigned int a, unsigned int b);
extern int func_0BADC0(Ctx *ctx, int a, int b);
extern int func_0D0238(int index);
extern int func_026E08(int a, int b);
extern unsigned int func_027C08(void);
extern int func_0BB588(Ctx *ctx, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0BAF58(Ctx *ctx);

void func_0D0270(void)
{
    Q q[4];
    int i;
    int entry;
    int kind;

    func_0BAE60(&D_00335CE8, D_0020BE10, 0x20800, 0);
    func_0AF820(0x1C1, q, 0.0f);
    func_0BB1D8(&D_00335CE8, q[0].v, q[1].v, q[2].v, q[3].v);
    func_0BB1C0(&D_00335CE8, 0x1C0, 0xFFFFFFFF);
    func_0BACE0(&D_00335CE8, 0x40602020, 0xFFB07050);
    i = 0xFEF;
    do {
        func_0BADC0(&D_00335CE8, 1, 1);
        entry = func_0D0238(i);
        if (entry >= 0) {
            kind = D_0020BE20[entry * 16];
            if (func_026E08(*(int *)(D_0020BE20 + (entry * 16 - 4)) * 2 + 0xA0, kind) != 0
                || D_0020BE0C != 0
                || func_027C08() > 1) {
                func_0BB588(&D_00335CE8, i, 0, entry, 0, 0, 0, 0, 0xFFFFFFFF);
            }
        }
        i++;
    } while (i < 0x101E);
    D_00335CE8.flags |= 0x14;
    func_0BAF58(&D_00335CE8);
}

void func_0D0410(void)
{
    g_RENDEREFFECT_SWIRLY_Active = 0;
}
