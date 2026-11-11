/* LEVEL_23:0x0C5C68 -- placement copy of LEVEL_01_0CEE30.c: draws the 47 icon entries of the table into the text context and finishes the batch. */
typedef struct Ctx {
    char pad_00[0x14];
    unsigned int flags;
} Ctx;

typedef struct Q {
    short v;
    short pad;
} Q;

extern Ctx D_002FDD28;
extern int D_001D6210;
extern unsigned char D_001D620C;
extern unsigned char D_001D6220[];
extern unsigned char g_RENDEREFFECT_SWIRLY_Active;

extern void func_0B08B0(Ctx *ctx, int value, int flags, int zero);
extern void func_0A5478(int id, Q *out, float f);
extern void func_0B0C28(Ctx *ctx, short a, short b, short c, short d);
extern void func_0B0C10(Ctx *ctx, int id, unsigned int color);
extern int func_0B0730(Ctx *ctx, unsigned int a, unsigned int b);
extern int func_0B0810(Ctx *ctx, int a, int b);
extern int func_0C5C30(int index);
extern int func_025280(int a, int b);
extern unsigned int func_026030(void);
extern int func_0B0FD8(Ctx *ctx, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0B09A8(Ctx *ctx);

void func_0C5C68(void)
{
    Q q[4];
    int i;
    int entry;
    int kind;

    func_0B08B0(&D_002FDD28, D_001D6210, 0x20800, 0);
    func_0A5478(0x1C1, q, 0.0f);
    func_0B0C28(&D_002FDD28, q[0].v, q[1].v, q[2].v, q[3].v);
    func_0B0C10(&D_002FDD28, 0x1C0, 0xFFFFFFFF);
    func_0B0730(&D_002FDD28, 0x40602020, 0xFFB07050);
    i = 0xFEF;
    do {
        func_0B0810(&D_002FDD28, 1, 1);
        entry = func_0C5C30(i);
        if (entry >= 0) {
            kind = D_001D6220[entry * 16];
            if (func_025280(*(int *)(D_001D6220 + (entry * 16 - 4)) * 2 + 0xA0, kind) != 0
                || D_001D620C != 0
                || func_026030() > 1) {
                func_0B0FD8(&D_002FDD28, i, 0, entry, 0, 0, 0, 0, 0xFFFFFFFF);
            }
        }
        i++;
    } while (i < 0x101E);
    D_002FDD28.flags |= 0x14;
    func_0B09A8(&D_002FDD28);
}

void func_0C5E08(void)
{
    g_RENDEREFFECT_SWIRLY_Active = 0;
}
