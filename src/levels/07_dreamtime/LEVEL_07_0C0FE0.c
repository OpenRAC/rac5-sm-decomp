/* LEVEL_07:0x0C0FE0 -- placement copy of LEVEL_01_0BEF80.c: resets the screen overlay state: clears flags, rebuilds the view matrix from a template and zeroes the second matrix. */
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

extern int D_00211E58;
extern int D_00210E54;
extern Overlay D_0033E678;
extern Gs D_0024AA40;
extern Level *D_002082AC;
extern float D_0022CAC0[16];
extern float D_0033E590[16];
extern float D_0033E550[16];

extern void func_1D2E48(void);
extern void func_0C11E0(void);
extern void func_0B0708(float zero, int id, void *out);
extern int func_0AA680(void *p);
extern int func_0AA6B0(void *p);
extern int func_0AA6E0(void *p);
extern int func_0AA798(void *p);
extern void func_0AD3E0(Overlay *o, short a, short b, short c, short d, unsigned int e);
extern void func_02F900(int a, int b);
extern void func_02FA88(void);
extern void func_0BEDE0(void);
extern void func_0BF5F0(void);
extern void *memset(void *dst, int value, unsigned int size);

void func_0C0FE0(void)
{
    int info[4];

    D_00210E54 = 0;
    D_00211E58 = 0;
    func_1D2E48();
    func_0C11E0();
    func_0B0708(0.0f, 0x14A, info);
    func_0AD3E0(&D_0033E678, func_0AA680(info), func_0AA6B0(info), func_0AA6E0(info), func_0AA798(info), 0x40602020);
    *(unsigned int *)((char *)&D_0033E678 + 0x20) |= 0x840;
    D_0033E678.dirty = 0;
    D_0024AA40.mask &= 0xFFFBFFFFFFFFFFFFULL;
    D_0024AA40.hud->sel = D_0024AA40.sel;
    if (D_002082AC->lock != 0) {
        func_02F900(0, 1);
        func_02FA88();
    }
    D_0033E590[8] = D_0022CAC0[8];
    D_0033E590[12] = 0.11500000208616257f;
    D_0033E590[9] = D_0022CAC0[9];
    D_0033E590[11] = D_0022CAC0[11];
    D_0033E590[1] = D_0022CAC0[1];
    D_0033E590[2] = D_0022CAC0[2];
    D_0033E590[3] = D_0022CAC0[3];
    D_0033E590[4] = D_0022CAC0[4];
    D_0033E590[6] = D_0022CAC0[6];
    D_0033E590[7] = D_0022CAC0[7];
    D_0033E590[15] = D_0022CAC0[15];
    D_0033E590[0] = 1.0f;
    D_0033E590[10] = 1.0f;
    D_0033E590[14] = 0.0f;
    D_0033E590[13] = 0.0f;
    D_0033E590[5] = 1.0f;
    memset(D_0033E550, 0, 0x40);
    D_0033E550[0] = 1.0f;
    D_0033E550[5] = 1.0f;
    D_0033E550[10] = 1.0f;
    func_0BEDE0();
    func_0BF5F0();
}
