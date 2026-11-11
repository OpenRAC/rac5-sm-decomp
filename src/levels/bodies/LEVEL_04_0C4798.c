/* LEVEL_04:0x0C4798 -- placement copy of LEVEL_01_0BEF80.c: resets the screen overlay state: clears flags, rebuilds the view matrix from a template and zeroes the second matrix. */
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

extern int D_00217018;
extern int D_00216014;
extern Overlay D_00343578;
extern Gs D_0024F950;
extern Level *D_0020D12C;
extern float D_00231740[16];
extern float D_00343490[16];
extern float D_00343450[16];

extern void func_1D9858(void);
extern void func_0C4998(void);
extern void func_0B3958(float zero, int id, void *out);
extern int func_0AD890(void *p);
extern int func_0AD8C0(void *p);
extern int func_0AD8F0(void *p);
extern int func_0AD9A8(void *p);
extern void func_0B0630(Overlay *o, short a, short b, short c, short d, unsigned int e);
extern void func_02F268(int a, int b);
extern void func_02F3F0(void);
extern void func_0C2598(void);
extern void func_0C2DA8(void);
extern void *memset(void *dst, int value, unsigned int size);

void func_0C4798(void)
{
    int info[4];

    D_00216014 = 0;
    D_00217018 = 0;
    func_1D9858();
    func_0C4998();
    func_0B3958(0.0f, 0x14A, info);
    func_0B0630(&D_00343578, func_0AD890(info), func_0AD8C0(info), func_0AD8F0(info), func_0AD9A8(info), 0x40602020);
    *(unsigned int *)((char *)&D_00343578 + 0x20) |= 0x840;
    D_00343578.dirty = 0;
    D_0024F950.mask &= 0xFFFBFFFFFFFFFFFFULL;
    D_0024F950.hud->sel = D_0024F950.sel;
    if (D_0020D12C->lock != 0) {
        func_02F268(0, 1);
        func_02F3F0();
    }
    D_00343490[8] = D_00231740[8];
    D_00343490[12] = 0.11500000208616257f;
    D_00343490[9] = D_00231740[9];
    D_00343490[11] = D_00231740[11];
    D_00343490[1] = D_00231740[1];
    D_00343490[2] = D_00231740[2];
    D_00343490[3] = D_00231740[3];
    D_00343490[4] = D_00231740[4];
    D_00343490[6] = D_00231740[6];
    D_00343490[7] = D_00231740[7];
    D_00343490[15] = D_00231740[15];
    D_00343490[0] = 1.0f;
    D_00343490[10] = 1.0f;
    D_00343490[14] = 0.0f;
    D_00343490[13] = 0.0f;
    D_00343490[5] = 1.0f;
    memset(D_00343450, 0, 0x40);
    D_00343450[0] = 1.0f;
    D_00343450[5] = 1.0f;
    D_00343450[10] = 1.0f;
    func_0C2598();
    func_0C2DA8();
}
