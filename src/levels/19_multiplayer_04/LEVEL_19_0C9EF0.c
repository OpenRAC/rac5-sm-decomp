/* LEVEL_19:0x0C9EF0 -- placement copy of LEVEL_16_0CA618.c: per-frame update of the rumble/fade meter: waits out the delay, triggers the alert effects, then moves the level by the step for its direction and clamps it. */
extern int D_001B5878;
extern int D_001B584C;
extern int D_001B5850;
extern int D_001B5854;
extern unsigned char D_001B5858;
extern unsigned char D_001B5859;
extern int D_001B585C;
extern float D_001B5860;
extern char *D_001E0228;
extern int func_10F9D0(int id);
extern int func_0C6C78(int h);
extern int func_110118(int a);
extern int func_1102F8(int a);
extern void func_024B18(int a, int b, int c);
extern void func_0C9E88(void);
extern void func_0CA060(int a);
extern void func_019AE0(void);

void func_0C9EF0(void)
{
    int *p;
    int v;

    if (D_001B5878 != 0) {
        D_001B5878--;
        return;
    }
    if (*(unsigned char *)(D_001E0228 + 0x15148) == 0) {
        func_024B18(0x91, 1, 1);
    }
    if (D_001B584C == 0) {
        D_001B584C = func_10F9D0(0xA1D);
    }
    if (func_0C6C78(D_001B584C) != 0 || (func_110118(0) != 0 && func_1102F8(0) != 0)) {
        func_0C9E88();
        func_0CA060(3);
    }
    if (D_001B5850 != 0) {
        D_001B5850--;
    }
    p = &D_001B5854;
    if (D_001B5850 == 0) {
        v = *p - D_001B5858;
    } else {
        v = *p + D_001B5859;
    }
    *p = v;
    if (D_001B585C < D_001B5854) {
        D_001B5854 = D_001B585C;
    }
    if (D_001B5854 < 0) {
        D_001B5854 = 0;
    }
    if (D_001B5854 != 0) {
        func_019AE0();
        D_001B5860 = D_001B5860 + 0.25f;
    }
}
