/* LEVEL_05:0x0BD528 -- placement copy of LEVEL_01_0BEF80.c: resets the screen overlay state: clears flags, rebuilds the view matrix from a template and zeroes the second matrix. */
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

extern int D_001ECED8;
extern int D_001EBED4;
extern Overlay D_00314C38;
extern Gs D_00220E40;
extern Level *D_001E332C;
extern float D_00206CC0[16];
extern float D_00314B50[16];
extern float D_00314B10[16];

extern void func_1B6810(void);
extern void func_0BD728(void);
extern void func_0ACCC8(float zero, int id, void *out);
extern int func_0A6C40(void *p);
extern int func_0A6C70(void *p);
extern int func_0A6CA0(void *p);
extern int func_0A6D58(void *p);
extern void func_0A99A0(Overlay *o, short a, short b, short c, short d, unsigned int e);
extern void func_02E280(int a, int b);
extern void func_02E408(void);
extern void func_0BB328(void);
extern void func_0BBB38(void);
extern void *memset(void *dst, int value, unsigned int size);

void func_0BD528(void)
{
    int info[4];

    D_001EBED4 = 0;
    D_001ECED8 = 0;
    func_1B6810();
    func_0BD728();
    func_0ACCC8(0.0f, 0x14A, info);
    func_0A99A0(&D_00314C38, func_0A6C40(info), func_0A6C70(info), func_0A6CA0(info), func_0A6D58(info), 0x40602020);
    *(unsigned int *)((char *)&D_00314C38 + 0x20) |= 0x840;
    D_00314C38.dirty = 0;
    D_00220E40.mask &= 0xFFFBFFFFFFFFFFFFULL;
    D_00220E40.hud->sel = D_00220E40.sel;
    if (D_001E332C->lock != 0) {
        func_02E280(0, 1);
        func_02E408();
    }
    D_00314B50[8] = D_00206CC0[8];
    D_00314B50[12] = 0.11500000208616257f;
    D_00314B50[9] = D_00206CC0[9];
    D_00314B50[11] = D_00206CC0[11];
    D_00314B50[1] = D_00206CC0[1];
    D_00314B50[2] = D_00206CC0[2];
    D_00314B50[3] = D_00206CC0[3];
    D_00314B50[4] = D_00206CC0[4];
    D_00314B50[6] = D_00206CC0[6];
    D_00314B50[7] = D_00206CC0[7];
    D_00314B50[15] = D_00206CC0[15];
    D_00314B50[0] = 1.0f;
    D_00314B50[10] = 1.0f;
    D_00314B50[14] = 0.0f;
    D_00314B50[13] = 0.0f;
    D_00314B50[5] = 1.0f;
    memset(D_00314B10, 0, 0x40);
    D_00314B10[0] = 1.0f;
    D_00314B10[5] = 1.0f;
    D_00314B10[10] = 1.0f;
    func_0BB328();
    func_0BBB38();
}
