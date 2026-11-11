/* LEVEL_17:0x0C9B58 -- placement copy of LEVEL_16_0CA618.c: per-frame update of the rumble/fade meter: waits out the delay, triggers the alert effects, then moves the level by the step for its direction and clamps it. */
extern int D_001A7CF8;
extern int D_001A7CCC;
extern int D_001A7CD0;
extern int D_001A7CD4;
extern unsigned char D_001A7CD8;
extern unsigned char D_001A7CD9;
extern int D_001A7CDC;
extern float D_001A7CE0;
extern char *D_001D13A8;
extern int func_10E8A8(int id);
extern int func_0C68E0(int h);
extern int func_10EFF0(int a);
extern int func_10F1D0(int a);
extern void func_0248F0(int a, int b, int c);
extern void func_0C9AF0(void);
extern void func_0C9CC8(int a);
extern void func_019760(void);

void func_0C9B58(void)
{
    int *p;
    int v;

    if (D_001A7CF8 != 0) {
        D_001A7CF8--;
        return;
    }
    if (*(unsigned char *)(D_001D13A8 + 0x15148) == 0) {
        func_0248F0(0x91, 1, 1);
    }
    if (D_001A7CCC == 0) {
        D_001A7CCC = func_10E8A8(0xA1D);
    }
    if (func_0C68E0(D_001A7CCC) != 0 || (func_10EFF0(0) != 0 && func_10F1D0(0) != 0)) {
        func_0C9AF0();
        func_0C9CC8(3);
    }
    if (D_001A7CD0 != 0) {
        D_001A7CD0--;
    }
    p = &D_001A7CD4;
    if (D_001A7CD0 == 0) {
        v = *p - D_001A7CD8;
    } else {
        v = *p + D_001A7CD9;
    }
    *p = v;
    if (D_001A7CDC < D_001A7CD4) {
        D_001A7CD4 = D_001A7CDC;
    }
    if (D_001A7CD4 < 0) {
        D_001A7CD4 = 0;
    }
    if (D_001A7CD4 != 0) {
        func_019760();
        D_001A7CE0 = D_001A7CE0 + 0.25f;
    }
}
