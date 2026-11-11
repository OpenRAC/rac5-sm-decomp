/* LEVEL_20:0x098940 -- placement copy of LEVEL_01_0BEF80.c: resets the screen overlay state: clears flags, rebuilds the view matrix from a template and zeroes the second matrix. */
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

extern int D_0010E2B8;
extern int D_0010D2B4;
extern Overlay D_0019A4F8;
extern Gs D_0013BA10;
extern Level *D_00104194;
extern float D_0012DD00[16];
extern float D_0019A410[16];
extern float D_0019A3D0[16];

extern void func_0F7B50(void);
extern void func_098B40(void);
extern void func_0874F0(float zero, int id, void *out);
extern int func_081408(void *p);
extern int func_081438(void *p);
extern int func_081468(void *p);
extern int func_081520(void *p);
extern void func_0841C8(Overlay *o, short a, short b, short c, short d, unsigned int e);
extern void func_0298E0(int a, int b);
extern void func_029A68(void);
extern void func_096740(void);
extern void func_096F50(void);
extern void *memset(void *dst, int value, unsigned int size);

void func_098940(void)
{
    int info[4];

    D_0010D2B4 = 0;
    D_0010E2B8 = 0;
    func_0F7B50();
    func_098B40();
    func_0874F0(0.0f, 0x14A, info);
    func_0841C8(&D_0019A4F8, func_081408(info), func_081438(info), func_081468(info), func_081520(info), 0x40602020);
    *(unsigned int *)((char *)&D_0019A4F8 + 0x20) |= 0x840;
    D_0019A4F8.dirty = 0;
    D_0013BA10.mask &= 0xFFFBFFFFFFFFFFFFULL;
    D_0013BA10.hud->sel = D_0013BA10.sel;
    if (D_00104194->lock != 0) {
        func_0298E0(0, 1);
        func_029A68();
    }
    D_0019A410[8] = D_0012DD00[8];
    D_0019A410[12] = 0.11500000208616257f;
    D_0019A410[9] = D_0012DD00[9];
    D_0019A410[11] = D_0012DD00[11];
    D_0019A410[1] = D_0012DD00[1];
    D_0019A410[2] = D_0012DD00[2];
    D_0019A410[3] = D_0012DD00[3];
    D_0019A410[4] = D_0012DD00[4];
    D_0019A410[6] = D_0012DD00[6];
    D_0019A410[7] = D_0012DD00[7];
    D_0019A410[15] = D_0012DD00[15];
    D_0019A410[0] = 1.0f;
    D_0019A410[10] = 1.0f;
    D_0019A410[14] = 0.0f;
    D_0019A410[13] = 0.0f;
    D_0019A410[5] = 1.0f;
    memset(D_0019A3D0, 0, 0x40);
    D_0019A3D0[0] = 1.0f;
    D_0019A3D0[5] = 1.0f;
    D_0019A3D0[10] = 1.0f;
    func_096740();
    func_096F50();
}
