/* LEVEL_18:0x0AD3E8 -- placement copy of LEVEL_01_0BEF80.c: resets the screen overlay state: clears flags, rebuilds the view matrix from a template and zeroes the second matrix. */
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

extern int D_001AD058;
extern int D_001AC054;
extern Overlay D_00277038;
extern Gs D_001E4410;
extern Level *D_001A2F34;
extern float D_001CE200[16];
extern float D_00276F50[16];
extern float D_00276F10[16];

extern void func_17FF18(void);
extern void func_0AD5E8(void);
extern void func_09BE08(float zero, int id, void *out);
extern int func_095D20(void *p);
extern int func_095D50(void *p);
extern int func_095D80(void *p);
extern int func_095E38(void *p);
extern void func_098AE0(Overlay *o, short a, short b, short c, short d, unsigned int e);
extern void func_02C388(int a, int b);
extern void func_02C510(void);
extern void func_0AB1E8(void);
extern void func_0AB9F8(void);
extern void *memset(void *dst, int value, unsigned int size);

void func_0AD3E8(void)
{
    int info[4];

    D_001AC054 = 0;
    D_001AD058 = 0;
    func_17FF18();
    func_0AD5E8();
    func_09BE08(0.0f, 0x14A, info);
    func_098AE0(&D_00277038, func_095D20(info), func_095D50(info), func_095D80(info), func_095E38(info), 0x40602020);
    *(unsigned int *)((char *)&D_00277038 + 0x20) |= 0x840;
    D_00277038.dirty = 0;
    D_001E4410.mask &= 0xFFFBFFFFFFFFFFFFULL;
    D_001E4410.hud->sel = D_001E4410.sel;
    if (D_001A2F34->lock != 0) {
        func_02C388(0, 1);
        func_02C510();
    }
    D_00276F50[8] = D_001CE200[8];
    D_00276F50[12] = 0.11500000208616257f;
    D_00276F50[9] = D_001CE200[9];
    D_00276F50[11] = D_001CE200[11];
    D_00276F50[1] = D_001CE200[1];
    D_00276F50[2] = D_001CE200[2];
    D_00276F50[3] = D_001CE200[3];
    D_00276F50[4] = D_001CE200[4];
    D_00276F50[6] = D_001CE200[6];
    D_00276F50[7] = D_001CE200[7];
    D_00276F50[15] = D_001CE200[15];
    D_00276F50[0] = 1.0f;
    D_00276F50[10] = 1.0f;
    D_00276F50[14] = 0.0f;
    D_00276F50[13] = 0.0f;
    D_00276F50[5] = 1.0f;
    memset(D_00276F10, 0, 0x40);
    D_00276F10[0] = 1.0f;
    D_00276F10[5] = 1.0f;
    D_00276F10[10] = 1.0f;
    func_0AB1E8();
    func_0AB9F8();
}
