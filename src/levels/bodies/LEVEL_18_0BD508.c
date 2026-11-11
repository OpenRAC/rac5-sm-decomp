/* LEVEL_18:0x0BD508 -- placement copy of LEVEL_01_0CEE30.c: draws the 47 icon entries of the table into the text context and finishes the batch. */
typedef struct Ctx {
    char pad_00[0x14];
    unsigned int flags;
} Ctx;

typedef struct Q {
    short v;
    short pad;
} Q;

extern Ctx D_0027ACE8;
extern int D_001B2140;
extern unsigned char D_001B213C;
extern unsigned char D_001B2150[];
extern unsigned char g_RENDEREFFECT_SWIRLY_Active;

extern void func_0A7B40(Ctx *ctx, int value, int flags, int zero);
extern void func_09BE08(int id, Q *out, float f);
extern void func_0A7EB8(Ctx *ctx, short a, short b, short c, short d);
extern void func_0A7EA0(Ctx *ctx, int id, unsigned int color);
extern int func_0A79C0(Ctx *ctx, unsigned int a, unsigned int b);
extern int func_0A7AA0(Ctx *ctx, int a, int b);
extern int func_0BD4D0(int index);
extern int func_024578(int a, int b);
extern unsigned int func_025480(void);
extern int func_0A8268(Ctx *ctx, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0A7C38(Ctx *ctx);

void func_0BD508(void)
{
    Q q[4];
    int i;
    int entry;
    int kind;

    func_0A7B40(&D_0027ACE8, D_001B2140, 0x20800, 0);
    func_09BE08(0x1C1, q, 0.0f);
    func_0A7EB8(&D_0027ACE8, q[0].v, q[1].v, q[2].v, q[3].v);
    func_0A7EA0(&D_0027ACE8, 0x1C0, 0xFFFFFFFF);
    func_0A79C0(&D_0027ACE8, 0x40602020, 0xFFB07050);
    i = 0xFEF;
    do {
        func_0A7AA0(&D_0027ACE8, 1, 1);
        entry = func_0BD4D0(i);
        if (entry >= 0) {
            kind = D_001B2150[entry * 16];
            if (func_024578(*(int *)(D_001B2150 + (entry * 16 - 4)) * 2 + 0xA0, kind) != 0
                || D_001B213C != 0
                || func_025480() > 1) {
                func_0A8268(&D_0027ACE8, i, 0, entry, 0, 0, 0, 0, 0xFFFFFFFF);
            }
        }
        i++;
    } while (i < 0x101E);
    D_0027ACE8.flags |= 0x14;
    func_0A7C38(&D_0027ACE8);
}

void func_0BD6A8(void)
{
    g_RENDEREFFECT_SWIRLY_Active = 0;
}
