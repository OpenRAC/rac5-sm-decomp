/* LEVEL_24:0x0C8778 -- placement copy of LEVEL_01_0CEE30.c: draws the 47 icon entries of the table into the text context and finishes the batch. */
typedef struct Ctx {
    char pad_00[0x14];
    unsigned int flags;
} Ctx;

typedef struct Q {
    short v;
    short pad;
} Q;

extern Ctx D_002F87A8;
extern int D_001D3A90;
extern unsigned char D_001D3A8C;
extern unsigned char D_001D3AA0[];
extern unsigned char g_RENDEREFFECT_SWIRLY_Active;

extern void func_0B33A8(Ctx *ctx, int value, int flags, int zero);
extern void func_0A7F80(int id, Q *out, float f);
extern void func_0B3720(Ctx *ctx, short a, short b, short c, short d);
extern void func_0B3708(Ctx *ctx, int id, unsigned int color);
extern int func_0B3228(Ctx *ctx, unsigned int a, unsigned int b);
extern int func_0B3308(Ctx *ctx, int a, int b);
extern int func_0C8740(int index);
extern int func_024E58(int a, int b);
extern unsigned int func_025B38(void);
extern int func_0B3AD0(Ctx *ctx, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0B34A0(Ctx *ctx);

void func_0C8778(void)
{
    Q q[4];
    int i;
    int entry;
    int kind;

    func_0B33A8(&D_002F87A8, D_001D3A90, 0x20800, 0);
    func_0A7F80(0x1C1, q, 0.0f);
    func_0B3720(&D_002F87A8, q[0].v, q[1].v, q[2].v, q[3].v);
    func_0B3708(&D_002F87A8, 0x1C0, 0xFFFFFFFF);
    func_0B3228(&D_002F87A8, 0x40602020, 0xFFB07050);
    i = 0xFEF;
    do {
        func_0B3308(&D_002F87A8, 1, 1);
        entry = func_0C8740(i);
        if (entry >= 0) {
            kind = D_001D3AA0[entry * 16];
            if (func_024E58(*(int *)(D_001D3AA0 + (entry * 16 - 4)) * 2 + 0xA0, kind) != 0
                || D_001D3A8C != 0
                || func_025B38() > 1) {
                func_0B3AD0(&D_002F87A8, i, 0, entry, 0, 0, 0, 0, 0xFFFFFFFF);
            }
        }
        i++;
    } while (i < 0x101E);
    D_002F87A8.flags |= 0x14;
    func_0B34A0(&D_002F87A8);
}

void func_0C8918(void)
{
    g_RENDEREFFECT_SWIRLY_Active = 0;
}
