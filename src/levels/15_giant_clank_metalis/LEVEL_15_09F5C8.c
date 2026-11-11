/* LEVEL_15:0x09F5C8 -- placement copy of LEVEL_01_0BEF80.c: resets the screen overlay state: clears flags, rebuilds the view matrix from a template and zeroes the second matrix. */
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

extern int D_001527D8;
extern int D_001517D4;
extern Overlay D_002405B8;
extern Gs D_0017D2C0;
extern Level *D_00148C2C;
extern float D_0016C540[16];
extern float D_002404D0[16];
extern float D_00240490[16];

extern void func_0F4F10(void);
extern void func_09F7C8(void);
extern void func_08EFD0(float zero, int id, void *out);
extern int func_088F48(void *p);
extern int func_088F78(void *p);
extern int func_088FA8(void *p);
extern int func_089060(void *p);
extern void func_08BCA8(Overlay *o, short a, short b, short c, short d, unsigned int e);
extern void func_028B50(int a, int b);
extern void func_028CD8(void);
extern void func_09D3C8(void);
extern void func_09DBD8(void);
extern void *memset(void *dst, int value, unsigned int size);

void func_09F5C8(void)
{
    int info[4];

    D_001517D4 = 0;
    D_001527D8 = 0;
    func_0F4F10();
    func_09F7C8();
    func_08EFD0(0.0f, 0x14A, info);
    func_08BCA8(&D_002405B8, func_088F48(info), func_088F78(info), func_088FA8(info), func_089060(info), 0x40602020);
    *(unsigned int *)((char *)&D_002405B8 + 0x20) |= 0x840;
    D_002405B8.dirty = 0;
    D_0017D2C0.mask &= 0xFFFBFFFFFFFFFFFFULL;
    D_0017D2C0.hud->sel = D_0017D2C0.sel;
    if (D_00148C2C->lock != 0) {
        func_028B50(0, 1);
        func_028CD8();
    }
    D_002404D0[8] = D_0016C540[8];
    D_002404D0[12] = 0.11500000208616257f;
    D_002404D0[9] = D_0016C540[9];
    D_002404D0[11] = D_0016C540[11];
    D_002404D0[1] = D_0016C540[1];
    D_002404D0[2] = D_0016C540[2];
    D_002404D0[3] = D_0016C540[3];
    D_002404D0[4] = D_0016C540[4];
    D_002404D0[6] = D_0016C540[6];
    D_002404D0[7] = D_0016C540[7];
    D_002404D0[15] = D_0016C540[15];
    D_002404D0[0] = 1.0f;
    D_002404D0[10] = 1.0f;
    D_002404D0[14] = 0.0f;
    D_002404D0[13] = 0.0f;
    D_002404D0[5] = 1.0f;
    memset(D_00240490, 0, 0x40);
    D_00240490[0] = 1.0f;
    D_00240490[5] = 1.0f;
    D_00240490[10] = 1.0f;
    func_09D3C8();
    func_09DBD8();
}
