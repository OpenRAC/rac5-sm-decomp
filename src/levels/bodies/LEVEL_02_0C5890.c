/* LEVEL_02:0x0C5890 -- placement copy of LEVEL_01_0BEF80.c: resets the screen overlay state: clears flags, rebuilds the view matrix from a template and zeroes the second matrix. */
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

extern int D_00212B18;
extern int D_00211B14;
extern Overlay D_00340278;
extern Gs D_0024C650;
extern Level *D_00208C2C;
extern float D_0022CD40[16];
extern float D_00340190[16];
extern float D_00340150[16];

extern void func_1DC520(void);
extern void func_0C5A90(void);
extern void func_0B5018(float zero, int id, void *out);
extern int func_0AEF90(void *p);
extern int func_0AEFC0(void *p);
extern int func_0AEFF0(void *p);
extern int func_0AF0A8(void *p);
extern void func_0B1CF0(Overlay *o, short a, short b, short c, short d, unsigned int e);
extern void func_02FD88(int a, int b);
extern void func_02FF10(void);
extern void func_0C3690(void);
extern void func_0C3EA0(void);
extern void *memset(void *dst, int value, unsigned int size);

void func_0C5890(void)
{
    int info[4];

    D_00211B14 = 0;
    D_00212B18 = 0;
    func_1DC520();
    func_0C5A90();
    func_0B5018(0.0f, 0x14A, info);
    func_0B1CF0(&D_00340278, func_0AEF90(info), func_0AEFC0(info), func_0AEFF0(info), func_0AF0A8(info), 0x40602020);
    *(unsigned int *)((char *)&D_00340278 + 0x20) |= 0x840;
    D_00340278.dirty = 0;
    D_0024C650.mask &= 0xFFFBFFFFFFFFFFFFULL;
    D_0024C650.hud->sel = D_0024C650.sel;
    if (D_00208C2C->lock != 0) {
        func_02FD88(0, 1);
        func_02FF10();
    }
    D_00340190[8] = D_0022CD40[8];
    D_00340190[12] = 0.11500000208616257f;
    D_00340190[9] = D_0022CD40[9];
    D_00340190[11] = D_0022CD40[11];
    D_00340190[1] = D_0022CD40[1];
    D_00340190[2] = D_0022CD40[2];
    D_00340190[3] = D_0022CD40[3];
    D_00340190[4] = D_0022CD40[4];
    D_00340190[6] = D_0022CD40[6];
    D_00340190[7] = D_0022CD40[7];
    D_00340190[15] = D_0022CD40[15];
    D_00340190[0] = 1.0f;
    D_00340190[10] = 1.0f;
    D_00340190[14] = 0.0f;
    D_00340190[13] = 0.0f;
    D_00340190[5] = 1.0f;
    memset(D_00340150, 0, 0x40);
    D_00340150[0] = 1.0f;
    D_00340150[5] = 1.0f;
    D_00340150[10] = 1.0f;
    func_0C3690();
    func_0C3EA0();
}
