/* LEVEL_01:0x0CEE30 -- draws the 47 icon entries of the table into the text context and finishes the batch. */
typedef struct Ctx {
    char pad_00[0x14];
    unsigned int flags;
} Ctx;

typedef struct Q {
    short v;
    short pad;
} Q;

extern Ctx D_0032C8E8;
extern int D_00202E10;
extern unsigned char D_00202E0C;
extern unsigned char D_00202E20[];
extern unsigned char g_RENDEREFFECT_SWIRLY_Active;

extern void func_0B9B18(Ctx *ctx, int value, int flags, int zero);
extern void func_0AE708(int id, Q *out, float f);
extern void func_0B9E90(Ctx *ctx, short a, short b, short c, short d);
extern void func_0B9E78(Ctx *ctx, int id, unsigned int color);
extern int func_0B9998(Ctx *ctx, unsigned int a, unsigned int b);
extern int func_0B9A78(Ctx *ctx, int a, int b);
extern int func_0CEDF8(int index);
extern int func_027528(int a, int b);
extern unsigned int func_028300(void);
extern int func_0BA240(Ctx *ctx, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0B9C10(Ctx *ctx);

void func_0CEE30(void)
{
    Q q[4];
    int i;
    int entry;
    int kind;

    func_0B9B18(&D_0032C8E8, D_00202E10, 0x20800, 0);
    func_0AE708(0x1C1, q, 0.0f);
    func_0B9E90(&D_0032C8E8, q[0].v, q[1].v, q[2].v, q[3].v);
    func_0B9E78(&D_0032C8E8, 0x1C0, 0xFFFFFFFF);
    func_0B9998(&D_0032C8E8, 0x40602020, 0xFFB07050);
    i = 0xFEF;
    do {
        func_0B9A78(&D_0032C8E8, 1, 1);
        entry = func_0CEDF8(i);
        if (entry >= 0) {
            kind = D_00202E20[entry * 16];
            if (func_027528(*(int *)(D_00202E20 + (entry * 16 - 4)) * 2 + 0xA0, kind) != 0
                || D_00202E0C != 0
                || func_028300() > 1) {
                func_0BA240(&D_0032C8E8, i, 0, entry, 0, 0, 0, 0, 0xFFFFFFFF);
            }
        }
        i++;
    } while (i < 0x101E);
    D_0032C8E8.flags |= 0x14;
    func_0B9C10(&D_0032C8E8);
}

void func_0CEFD0(void)
{
    g_RENDEREFFECT_SWIRLY_Active = 0;
}
