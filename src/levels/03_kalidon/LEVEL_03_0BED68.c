/* LEVEL_03:0x0BED68 -- placement copy of LEVEL_01_0BEF80.c: resets the screen overlay state: clears flags, rebuilds the view matrix from a template and zeroes the second matrix. */
typedef struct Overlay {
    char pad_00[0x20];
    unsigned int flags;
    char pad_24[0x15];
    unsigned char dirty;
} Overlay;

typedef struct Hud {
    char pad_00[0x74];
    short sel;
} Hud;

typedef struct Gs {
    char pad_000[0x10C];
    unsigned short sel;
    char pad_10E[0x48E];
    Hud *hud;
    char pad_5A0[0x3C0];
    unsigned long long mask;
} Gs;

typedef struct Level {
    char pad_00[0x1C7E];
    char lock;
} Level;

extern int D_002161D8;
extern int D_002151D4;
extern Overlay D_00343BF8;
extern Gs D_0024FFC0;
extern Level *D_0020C62C;
extern float D_00230CC0[16];
extern float D_00343B10[16];
extern float D_00343AD0[16];

extern void func_1D77F8(void);
extern void func_0BEF68(void);
extern void func_0AE488(float zero, int id, void *out);
extern int func_0A8400(void *p);
extern int func_0A8430(void *p);
extern int func_0A8460(void *p);
extern int func_0A8518(void *p);
extern void func_0AB160(Overlay *o, short a, short b, short c, short d, unsigned int e);
extern void func_02F3B8(int a, int b);
extern void func_02F540(void);
extern void func_0BCB68(void);
extern void func_0BD378(void);
extern void *memset(void *dst, int value, unsigned int size);

void func_0BED68(void)
{
    int info[4];

    D_002151D4 = 0;
    D_002161D8 = 0;
    func_1D77F8();
    func_0BEF68();
    func_0AE488(0.0f, 0x14A, info);
    func_0AB160(&D_00343BF8, func_0A8400(info), func_0A8430(info), func_0A8460(info), func_0A8518(info), 0x40602020);
    *(unsigned int *)((char *)&D_00343BF8 + 0x20) |= 0x840;
    D_00343BF8.dirty = 0;
    D_0024FFC0.mask &= 0xFFFBFFFFFFFFFFFFULL;
    D_0024FFC0.hud->sel = D_0024FFC0.sel;
    if (D_0020C62C->lock != 0) {
        func_02F3B8(0, 1);
        func_02F540();
    }
    D_00343B10[8] = D_00230CC0[8];
    D_00343B10[12] = 0.11500000208616257f;
    D_00343B10[9] = D_00230CC0[9];
    D_00343B10[11] = D_00230CC0[11];
    D_00343B10[1] = D_00230CC0[1];
    D_00343B10[2] = D_00230CC0[2];
    D_00343B10[3] = D_00230CC0[3];
    D_00343B10[4] = D_00230CC0[4];
    D_00343B10[6] = D_00230CC0[6];
    D_00343B10[7] = D_00230CC0[7];
    D_00343B10[15] = D_00230CC0[15];
    D_00343B10[0] = 1.0f;
    D_00343B10[10] = 1.0f;
    D_00343B10[14] = 0.0f;
    D_00343B10[13] = 0.0f;
    D_00343B10[5] = 1.0f;
    memset(D_00343AD0, 0, 0x40);
    D_00343AD0[0] = 1.0f;
    D_00343AD0[5] = 1.0f;
    D_00343AD0[10] = 1.0f;
    func_0BCB68();
    func_0BD378();
}
