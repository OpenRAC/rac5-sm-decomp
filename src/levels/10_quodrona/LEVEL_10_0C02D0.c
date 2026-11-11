/* LEVEL_10:0x0C02D0 -- placement copy of LEVEL_01_0BEF80.c: resets the screen overlay state: clears flags, rebuilds the view matrix from a template and zeroes the second matrix. */
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

extern int D_00206B58;
extern int D_00205B54;
extern Overlay D_00332178;
extern Gs D_0023E540;
extern Level *D_001FCFAC;
extern float D_00220D40[16];
extern float D_00332090[16];
extern float D_00332050[16];

extern void func_1CA978(void);
extern void func_0C04D0(void);
extern void func_0AF820(float zero, int id, void *out);
extern int func_0A9798(void *p);
extern int func_0A97C8(void *p);
extern int func_0A97F8(void *p);
extern int func_0A98B0(void *p);
extern void func_0AC4F8(Overlay *o, short a, short b, short c, short d, unsigned int e);
extern void func_02F450(int a, int b);
extern void func_02F5D8(void);
extern void func_0BE0D0(void);
extern void func_0BE8E0(void);
extern void *memset(void *dst, int value, unsigned int size);

void func_0C02D0(void)
{
    int info[4];

    D_00205B54 = 0;
    D_00206B58 = 0;
    func_1CA978();
    func_0C04D0();
    func_0AF820(0.0f, 0x14A, info);
    func_0AC4F8(&D_00332178, func_0A9798(info), func_0A97C8(info), func_0A97F8(info), func_0A98B0(info), 0x40602020);
    *(unsigned int *)((char *)&D_00332178 + 0x20) |= 0x840;
    D_00332178.dirty = 0;
    D_0023E540.mask &= 0xFFFBFFFFFFFFFFFFULL;
    D_0023E540.hud->sel = D_0023E540.sel;
    if (D_001FCFAC->lock != 0) {
        func_02F450(0, 1);
        func_02F5D8();
    }
    D_00332090[8] = D_00220D40[8];
    D_00332090[12] = 0.11500000208616257f;
    D_00332090[9] = D_00220D40[9];
    D_00332090[11] = D_00220D40[11];
    D_00332090[1] = D_00220D40[1];
    D_00332090[2] = D_00220D40[2];
    D_00332090[3] = D_00220D40[3];
    D_00332090[4] = D_00220D40[4];
    D_00332090[6] = D_00220D40[6];
    D_00332090[7] = D_00220D40[7];
    D_00332090[15] = D_00220D40[15];
    D_00332090[0] = 1.0f;
    D_00332090[10] = 1.0f;
    D_00332090[14] = 0.0f;
    D_00332090[13] = 0.0f;
    D_00332090[5] = 1.0f;
    memset(D_00332050, 0, 0x40);
    D_00332050[0] = 1.0f;
    D_00332050[5] = 1.0f;
    D_00332050[10] = 1.0f;
    func_0BE0D0();
    func_0BE8E0();
}
