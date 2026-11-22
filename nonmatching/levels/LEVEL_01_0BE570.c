/* USA LEVEL_01.REL:0x0BE570, 528-byte candidate (22 November 2026).
 * Measured gnu-ee-trial: 2 differing words; first difference at 0x80.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
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

extern int D_001FCACC;
extern int D_001FCAE0;
extern int D_001FCADC;
extern int D_001FCAD0;
extern int D_001FCAD8;
extern int D_001FCAD4;
extern int D_001FCAA4;
extern int D_001FCAA8;
extern int D_001FCAC0;
extern int D_001FCAC4;
extern int D_001FCAC8;
extern float D_001FCAB4;
extern char D_00328AD0[16];
extern char D_00328AE0[16];
extern Gs D_00235140;
extern Level *D_001F3FAC;
extern float D_00217DC0[16];
extern float D_00328B30[16];
extern float D_00328AF0[16];
extern int D_00328B74;

extern void func_1C70D0(void);
extern void func_0AE708(float zero, int id, void *out);
extern int func_0A86B0(void *p);
extern void func_03A040(Gs *g, int flag);
extern void func_02F5C8(int a, int b);
extern void func_02F750(void);
extern void func_0BCD80(void);
extern void func_0BD590(void);
extern void *memset(void *dst, int value, unsigned int size);

void func_0BE570(void)
{
    float zero;

    D_001FCACC = 0;
    D_001FCAE0 = 0;
    func_1C70D0();
    D_001FCAB4 = 0.0f;
    zero = D_001FCAB4;
    D_001FCADC = 0;
    D_001FCAA8 = 2;
    D_001FCAD0 = 0;
    D_001FCAD8 = 0;
    D_001FCAD4 = 0;
    D_001FCAA4 = 2;
    func_0AE708(zero, D_001FCAC4 + 0x159, D_00328AD0);
    func_0AE708(zero, D_001FCAC8 + D_001FCAC4 * 7, D_00328AE0);
    D_001FCAC0 = func_0A86B0(D_00328AD0);
    func_03A040(&D_00235140, 1);
    D_00235140.mask &= 0xFFFBFFFFFFFFFFFFULL;
    D_00235140.hud->sel = D_00235140.sel;
    if (D_001F3FAC->lock != 0) {
        func_02F5C8(0, 1);
        func_02F750();
    }
    D_00328B74 = 0;
    D_00328B30[12] = 0.11500000208616257f;
    D_00328B30[8] = D_00217DC0[8];
    D_00328B30[9] = D_00217DC0[9];
    D_00328B30[11] = D_00217DC0[11];
    D_00328B30[1] = D_00217DC0[1];
    D_00328B30[2] = D_00217DC0[2];
    D_00328B30[3] = D_00217DC0[3];
    D_00328B30[4] = D_00217DC0[4];
    D_00328B30[6] = D_00217DC0[6];
    D_00328B30[7] = D_00217DC0[7];
    D_00328B30[15] = D_00217DC0[15];
    D_00328B30[0] = 1.0f;
    D_00328B30[10] = 1.0f;
    D_00328B30[14] = zero;
    D_00328B30[13] = zero;
    D_00328B30[5] = 1.0f;
    memset(D_00328AF0, 0, 0x40);
    D_00328AF0[0] = 1.0f;
    D_00328AF0[5] = 1.0f;
    D_00328AF0[10] = 1.0f;
    func_0BCD80();
    func_0BD590();
}
