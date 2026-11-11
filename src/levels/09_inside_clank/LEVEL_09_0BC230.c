/* LEVEL_09:0x0BC230 -- placement copy of LEVEL_01_0BEF80.c: resets the screen overlay state: clears flags, rebuilds the view matrix from a template and zeroes the second matrix. */
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

extern int D_001E7958;
extern int D_001E6954;
extern Overlay D_003104F8;
extern Gs D_0021C8C0;
extern Level *D_001DDDAC;
extern float D_002019C0[16];
extern float D_00310410[16];
extern float D_003103D0[16];

extern void func_1AD5F0(void);
extern void func_0BC430(void);
extern void func_0AB9B8(float zero, int id, void *out);
extern int func_0A5930(void *p);
extern int func_0A5960(void *p);
extern int func_0A5990(void *p);
extern int func_0A5A48(void *p);
extern void func_0A8690(Overlay *o, short a, short b, short c, short d, unsigned int e);
extern void func_02E428(int a, int b);
extern void func_02E5B0(void);
extern void func_0BA030(void);
extern void func_0BA840(void);
extern void *memset(void *dst, int value, unsigned int size);

void func_0BC230(void)
{
    int info[4];

    D_001E6954 = 0;
    D_001E7958 = 0;
    func_1AD5F0();
    func_0BC430();
    func_0AB9B8(0.0f, 0x14A, info);
    func_0A8690(&D_003104F8, func_0A5930(info), func_0A5960(info), func_0A5990(info), func_0A5A48(info), 0x40602020);
    *(unsigned int *)((char *)&D_003104F8 + 0x20) |= 0x840;
    D_003104F8.dirty = 0;
    D_0021C8C0.mask &= 0xFFFBFFFFFFFFFFFFULL;
    D_0021C8C0.hud->sel = D_0021C8C0.sel;
    if (D_001DDDAC->lock != 0) {
        func_02E428(0, 1);
        func_02E5B0();
    }
    D_00310410[8] = D_002019C0[8];
    D_00310410[12] = 0.11500000208616257f;
    D_00310410[9] = D_002019C0[9];
    D_00310410[11] = D_002019C0[11];
    D_00310410[1] = D_002019C0[1];
    D_00310410[2] = D_002019C0[2];
    D_00310410[3] = D_002019C0[3];
    D_00310410[4] = D_002019C0[4];
    D_00310410[6] = D_002019C0[6];
    D_00310410[7] = D_002019C0[7];
    D_00310410[15] = D_002019C0[15];
    D_00310410[0] = 1.0f;
    D_00310410[10] = 1.0f;
    D_00310410[14] = 0.0f;
    D_00310410[13] = 0.0f;
    D_00310410[5] = 1.0f;
    memset(D_003103D0, 0, 0x40);
    D_003103D0[0] = 1.0f;
    D_003103D0[5] = 1.0f;
    D_003103D0[10] = 1.0f;
    func_0BA030();
    func_0BA840();
}
