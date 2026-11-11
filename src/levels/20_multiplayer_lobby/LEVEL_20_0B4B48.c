/* LEVEL_20:0x0B4B48 -- placement copy of LEVEL_16_0CA618.c: per-frame update of the rumble/fade meter: waits out the delay, triggers the alert effects, then moves the level by the step for its direction and clamps it. */
extern int D_00116DD8;
extern int D_00116DAC;
extern int D_00116DB0;
extern int D_00116DB4;
extern unsigned char D_00116DB8;
extern unsigned char D_00116DB9;
extern int D_00116DBC;
extern float D_00116DC0;
extern char *D_00137A28;
extern int func_0E2118(int id);
extern int func_0B18D0(int h);
extern int func_0E2860(int a);
extern int func_0E2A40(int a);
extern void func_021AE8(int a, int b, int c);
extern void func_0B4AE0(void);
extern void func_0B4CB8(int a);
extern void func_017B98(void);

void func_0B4B48(void)
{
    int *p;
    int v;

    if (D_00116DD8 != 0) {
        D_00116DD8--;
        return;
    }
    if (*(unsigned char *)(D_00137A28 + 0x15148) == 0) {
        func_021AE8(0x91, 1, 1);
    }
    if (D_00116DAC == 0) {
        D_00116DAC = func_0E2118(0xA1D);
    }
    if (func_0B18D0(D_00116DAC) != 0 || (func_0E2860(0) != 0 && func_0E2A40(0) != 0)) {
        func_0B4AE0();
        func_0B4CB8(3);
    }
    if (D_00116DB0 != 0) {
        D_00116DB0--;
    }
    p = &D_00116DB4;
    if (D_00116DB0 == 0) {
        v = *p - D_00116DB8;
    } else {
        v = *p + D_00116DB9;
    }
    *p = v;
    if (D_00116DBC < D_00116DB4) {
        D_00116DB4 = D_00116DBC;
    }
    if (D_00116DB4 < 0) {
        D_00116DB4 = 0;
    }
    if (D_00116DB4 != 0) {
        func_017B98();
        D_00116DC0 = D_00116DC0 + 0.25f;
    }
}
