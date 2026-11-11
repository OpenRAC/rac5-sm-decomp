/* LEVEL_17:0x0BDA70 -- placement copy of LEVEL_01_0CEE30.c: draws the 47 icon entries of the table into the text context and finishes the batch. */
typedef struct Ctx {
    char pad_00[0x14];
    unsigned int flags;
} Ctx;

typedef struct Q {
    short v;
    short pad;
} Q;

extern Ctx D_0026BC68;
extern int D_001A42C0;
extern unsigned char D_001A42BC;
extern unsigned char D_001A42D0[];
extern unsigned char g_RENDEREFFECT_SWIRLY_Active;

extern void func_0A80A8(Ctx *ctx, int value, int flags, int zero);
extern void func_09C2F0(int id, Q *out, float f);
extern void func_0A8420(Ctx *ctx, short a, short b, short c, short d);
extern void func_0A8408(Ctx *ctx, int id, unsigned int color);
extern int func_0A7F28(Ctx *ctx, unsigned int a, unsigned int b);
extern int func_0A8008(Ctx *ctx, int a, int b);
extern int func_0BDA38(int index);
extern int func_024948(int a, int b);
extern unsigned int func_025850(void);
extern int func_0A87D0(Ctx *ctx, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0A81A0(Ctx *ctx);

void func_0BDA70(void)
{
    Q q[4];
    int i;
    int entry;
    int kind;

    func_0A80A8(&D_0026BC68, D_001A42C0, 0x20800, 0);
    func_09C2F0(0x1C1, q, 0.0f);
    func_0A8420(&D_0026BC68, q[0].v, q[1].v, q[2].v, q[3].v);
    func_0A8408(&D_0026BC68, 0x1C0, 0xFFFFFFFF);
    func_0A7F28(&D_0026BC68, 0x40602020, 0xFFB07050);
    i = 0xFEF;
    do {
        func_0A8008(&D_0026BC68, 1, 1);
        entry = func_0BDA38(i);
        if (entry >= 0) {
            kind = D_001A42D0[entry * 16];
            if (func_024948(*(int *)(D_001A42D0 + (entry * 16 - 4)) * 2 + 0xA0, kind) != 0
                || D_001A42BC != 0
                || func_025850() > 1) {
                func_0A87D0(&D_0026BC68, i, 0, entry, 0, 0, 0, 0, 0xFFFFFFFF);
            }
        }
        i++;
    } while (i < 0x101E);
    D_0026BC68.flags |= 0x14;
    func_0A81A0(&D_0026BC68);
}

void func_0BDC10(void)
{
    g_RENDEREFFECT_SWIRLY_Active = 0;
}
