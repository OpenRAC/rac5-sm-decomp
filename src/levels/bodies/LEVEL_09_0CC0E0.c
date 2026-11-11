/* LEVEL_09:0x0CC0E0 -- placement copy of LEVEL_01_0CEE30.c: draws the 47 icon entries of the table into the text context and finishes the batch. */
typedef struct Ctx {
    char pad_00[0x14];
    unsigned int flags;
} Ctx;

typedef struct Q {
    short v;
    short pad;
} Q;

extern Ctx D_00314068;
extern int D_001ECC10;
extern unsigned char D_001ECC0C;
extern unsigned char D_001ECC20[];
extern unsigned char g_RENDEREFFECT_SWIRLY_Active;

extern void func_0B6DC8(Ctx *ctx, int value, int flags, int zero);
extern void func_0AB9B8(int id, Q *out, float f);
extern void func_0B7140(Ctx *ctx, short a, short b, short c, short d);
extern void func_0B7128(Ctx *ctx, int id, unsigned int color);
extern int func_0B6C48(Ctx *ctx, unsigned int a, unsigned int b);
extern int func_0B6D28(Ctx *ctx, int a, int b);
extern int func_0CC0A8(int index);
extern int func_026530(int a, int b);
extern unsigned int func_027308(void);
extern int func_0B74F0(Ctx *ctx, int a, int b, int c, int d, int e, int f, int g, unsigned int h);
extern int func_0B6EC0(Ctx *ctx);

void func_0CC0E0(void)
{
    Q q[4];
    int i;
    int entry;
    int kind;

    func_0B6DC8(&D_00314068, D_001ECC10, 0x20800, 0);
    func_0AB9B8(0x1C1, q, 0.0f);
    func_0B7140(&D_00314068, q[0].v, q[1].v, q[2].v, q[3].v);
    func_0B7128(&D_00314068, 0x1C0, 0xFFFFFFFF);
    func_0B6C48(&D_00314068, 0x40602020, 0xFFB07050);
    i = 0xFEF;
    do {
        func_0B6D28(&D_00314068, 1, 1);
        entry = func_0CC0A8(i);
        if (entry >= 0) {
            kind = D_001ECC20[entry * 16];
            if (func_026530(*(int *)(D_001ECC20 + (entry * 16 - 4)) * 2 + 0xA0, kind) != 0
                || D_001ECC0C != 0
                || func_027308() > 1) {
                func_0B74F0(&D_00314068, i, 0, entry, 0, 0, 0, 0, 0xFFFFFFFF);
            }
        }
        i++;
    } while (i < 0x101E);
    D_00314068.flags |= 0x14;
    func_0B6EC0(&D_00314068);
}

void func_0CC280(void)
{
    g_RENDEREFFECT_SWIRLY_Active = 0;
}
