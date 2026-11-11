/* LEVEL_22:0x0AD430 -- placement copy of LEVEL_01_0BEF80.c: resets the screen overlay state: clears flags, rebuilds the view matrix from a template and zeroes the second matrix. */
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

extern int D_0015CED8;
extern int D_0015BED4;
extern Overlay D_0027E938;
extern Gs D_00186D40;
extern Level *D_0015332C;
extern float D_00175240[16];
extern float D_0027E850[16];
extern float D_0027E810[16];

extern void func_138908(void);
extern void func_0AD630(void);
extern void func_09CD18(float zero, int id, void *out);
extern int func_096C90(void *p);
extern int func_096CC0(void *p);
extern int func_096CF0(void *p);
extern int func_096DA8(void *p);
extern void func_0999F0(Overlay *o, short a, short b, short c, short d, unsigned int e);
extern void func_029970(int a, int b);
extern void func_029AF8(void);
extern void func_0AB230(void);
extern void func_0ABA40(void);
extern void *memset(void *dst, int value, unsigned int size);

void func_0AD430(void)
{
    int info[4];

    D_0015BED4 = 0;
    D_0015CED8 = 0;
    func_138908();
    func_0AD630();
    func_09CD18(0.0f, 0x14A, info);
    func_0999F0(&D_0027E938, func_096C90(info), func_096CC0(info), func_096CF0(info), func_096DA8(info), 0x40602020);
    *(unsigned int *)((char *)&D_0027E938 + 0x20) |= 0x840;
    D_0027E938.dirty = 0;
    D_00186D40.mask &= 0xFFFBFFFFFFFFFFFFULL;
    D_00186D40.hud->sel = D_00186D40.sel;
    if (D_0015332C->lock != 0) {
        func_029970(0, 1);
        func_029AF8();
    }
    D_0027E850[8] = D_00175240[8];
    D_0027E850[12] = 0.11500000208616257f;
    D_0027E850[9] = D_00175240[9];
    D_0027E850[11] = D_00175240[11];
    D_0027E850[1] = D_00175240[1];
    D_0027E850[2] = D_00175240[2];
    D_0027E850[3] = D_00175240[3];
    D_0027E850[4] = D_00175240[4];
    D_0027E850[6] = D_00175240[6];
    D_0027E850[7] = D_00175240[7];
    D_0027E850[15] = D_00175240[15];
    D_0027E850[0] = 1.0f;
    D_0027E850[10] = 1.0f;
    D_0027E850[14] = 0.0f;
    D_0027E850[13] = 0.0f;
    D_0027E850[5] = 1.0f;
    memset(D_0027E810, 0, 0x40);
    D_0027E810[0] = 1.0f;
    D_0027E810[5] = 1.0f;
    D_0027E810[10] = 1.0f;
    func_0AB230();
    func_0ABA40();
}
