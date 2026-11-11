/* LEVEL_05:0x0CD3D8 -- placement copy of LEVEL_01_0CEE30.c: draws the 47 icon entries of the table into the text context and finishes the batch. */
typedef struct Ctx {
    char pad_00[0x14];
    unsigned int flags;
} Ctx;

typedef struct Q {
    short v;
    short pad;
} Q;

extern Ctx D_003187A8;
extern int D_001F2190;
extern unsigned char D_001F218C;
extern unsigned char D_001F21A0[];
extern unsigned char g_RENDEREFFECT_SWIRLY_Active;

extern void func_0B80C0(Ctx *ctx, int value, int flags, int zero);
extern void func_0ACCC8(int id, Q *out, float f);
extern void func_0B8438(Ctx *ctx, short a, short b, short c, short d);
extern void func_0B8420(Ctx *ctx, int id, unsigned int color);
extern int func_0B7F40(Ctx *ctx, unsigned int a, unsigned int b);
extern int func_0B8020(Ctx *ctx, int a, int b);
extern int func_0CD3A0(int index);
extern int func_026268(int a, int b);
extern unsigned int func_027118(void);
extern int func_0B87E8(Ctx *ctx, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0B81B8(Ctx *ctx);

void func_0CD3D8(void)
{
    Q q[4];
    int i;
    int entry;
    int kind;

    func_0B80C0(&D_003187A8, D_001F2190, 0x20800, 0);
    func_0ACCC8(0x1C1, q, 0.0f);
    func_0B8438(&D_003187A8, q[0].v, q[1].v, q[2].v, q[3].v);
    func_0B8420(&D_003187A8, 0x1C0, 0xFFFFFFFF);
    func_0B7F40(&D_003187A8, 0x40602020, 0xFFB07050);
    i = 0xFEF;
    do {
        func_0B8020(&D_003187A8, 1, 1);
        entry = func_0CD3A0(i);
        if (entry >= 0) {
            kind = D_001F21A0[entry * 16];
            if (func_026268(*(int *)(D_001F21A0 + (entry * 16 - 4)) * 2 + 0xA0, kind) != 0
                || D_001F218C != 0
                || func_027118() > 1) {
                func_0B87E8(&D_003187A8, i, 0, entry, 0, 0, 0, 0, 0xFFFFFFFF);
            }
        }
        i++;
    } while (i < 0x101E);
    D_003187A8.flags |= 0x14;
    func_0B81B8(&D_003187A8);
}

void func_0CD578(void)
{
    g_RENDEREFFECT_SWIRLY_Active = 0;
}
