/* LEVEL_16:0x0AE410 -- placement copy of LEVEL_01_0BEF80.c: resets the screen overlay state: clears flags, rebuilds the view matrix from a template and zeroes the second matrix. */
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

extern int D_001ABBD8;
extern int D_001AABD4;
extern Overlay D_00276CB8;
extern Gs D_001E4090;
extern Level *D_001A1AB4;
extern float D_001CCC80[16];
extern float D_00276BD0[16];
extern float D_00276B90[16];

extern void func_17F8E0(void);
extern void func_0AE610(void);
extern void func_09CDF8(float zero, int id, void *out);
extern int func_096D10(void *p);
extern int func_096D40(void *p);
extern int func_096D70(void *p);
extern int func_096E28(void *p);
extern void func_099AD0(Overlay *o, short a, short b, short c, short d, unsigned int e);
extern void func_02CDD8(int a, int b);
extern void func_02CF60(void);
extern void func_0AC210(void);
extern void func_0ACA20(void);
extern void *memset(void *dst, int value, unsigned int size);

void func_0AE410(void)
{
    int info[4];

    D_001AABD4 = 0;
    D_001ABBD8 = 0;
    func_17F8E0();
    func_0AE610();
    func_09CDF8(0.0f, 0x14A, info);
    func_099AD0(&D_00276CB8, func_096D10(info), func_096D40(info), func_096D70(info), func_096E28(info), 0x40602020);
    *(unsigned int *)((char *)&D_00276CB8 + 0x20) |= 0x840;
    D_00276CB8.dirty = 0;
    D_001E4090.mask &= 0xFFFBFFFFFFFFFFFFULL;
    D_001E4090.hud->sel = D_001E4090.sel;
    if (D_001A1AB4->lock != 0) {
        func_02CDD8(0, 1);
        func_02CF60();
    }
    D_00276BD0[8] = D_001CCC80[8];
    D_00276BD0[12] = 0.11500000208616257f;
    D_00276BD0[9] = D_001CCC80[9];
    D_00276BD0[11] = D_001CCC80[11];
    D_00276BD0[1] = D_001CCC80[1];
    D_00276BD0[2] = D_001CCC80[2];
    D_00276BD0[3] = D_001CCC80[3];
    D_00276BD0[4] = D_001CCC80[4];
    D_00276BD0[6] = D_001CCC80[6];
    D_00276BD0[7] = D_001CCC80[7];
    D_00276BD0[15] = D_001CCC80[15];
    D_00276BD0[0] = 1.0f;
    D_00276BD0[10] = 1.0f;
    D_00276BD0[14] = 0.0f;
    D_00276BD0[13] = 0.0f;
    D_00276BD0[5] = 1.0f;
    memset(D_00276B90, 0, 0x40);
    D_00276B90[0] = 1.0f;
    D_00276B90[5] = 1.0f;
    D_00276B90[10] = 1.0f;
    func_0AC210();
    func_0ACA20();
}
