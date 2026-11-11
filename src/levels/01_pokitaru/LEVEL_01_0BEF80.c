/* LEVEL_01:0x0BEF80 -- resets the screen overlay state: clears flags, rebuilds the view matrix from a template and zeroes the second matrix. */
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

extern int D_001FDB58;
extern int D_001FCB54;
extern Overlay D_00328D78;
extern Gs D_00235140;
extern Level *D_001F3FAC;
extern float D_00217DC0[16];
extern float D_00328C90[16];
extern float D_00328C50[16];

extern void func_1C70D0(void);
extern void func_0BF180(void);
extern void func_0AE708(float zero, int id, void *out);
extern int func_0A8680(void *p);
extern int func_0A86B0(void *p);
extern int func_0A86E0(void *p);
extern int func_0A8798(void *p);
extern void func_0AB3E0(Overlay *o, short a, short b, short c, short d, unsigned int e);
extern void func_02F5C8(int a, int b);
extern void func_02F750(void);
extern void func_0BCD80(void);
extern void func_0BD590(void);
extern void *memset(void *dst, int value, unsigned int size);

void func_0BEF80(void)
{
    int info[4];

    D_001FCB54 = 0;
    D_001FDB58 = 0;
    func_1C70D0();
    func_0BF180();
    func_0AE708(0.0f, 0x14A, info);
    func_0AB3E0(&D_00328D78, func_0A8680(info), func_0A86B0(info), func_0A86E0(info), func_0A8798(info), 0x40602020);
    *(unsigned int *)((char *)&D_00328D78 + 0x20) |= 0x840;
    D_00328D78.dirty = 0;
    D_00235140.mask &= 0xFFFBFFFFFFFFFFFFULL;
    D_00235140.hud->sel = D_00235140.sel;
    if (D_001F3FAC->lock != 0) {
        func_02F5C8(0, 1);
        func_02F750();
    }
    D_00328C90[8] = D_00217DC0[8];
    D_00328C90[12] = 0.11500000208616257f;
    D_00328C90[9] = D_00217DC0[9];
    D_00328C90[11] = D_00217DC0[11];
    D_00328C90[1] = D_00217DC0[1];
    D_00328C90[2] = D_00217DC0[2];
    D_00328C90[3] = D_00217DC0[3];
    D_00328C90[4] = D_00217DC0[4];
    D_00328C90[6] = D_00217DC0[6];
    D_00328C90[7] = D_00217DC0[7];
    D_00328C90[15] = D_00217DC0[15];
    D_00328C90[0] = 1.0f;
    D_00328C90[10] = 1.0f;
    D_00328C90[14] = 0.0f;
    D_00328C90[13] = 0.0f;
    D_00328C90[5] = 1.0f;
    memset(D_00328C50, 0, 0x40);
    D_00328C50[0] = 1.0f;
    D_00328C50[5] = 1.0f;
    D_00328C50[10] = 1.0f;
    func_0BCD80();
    func_0BD590();
}
