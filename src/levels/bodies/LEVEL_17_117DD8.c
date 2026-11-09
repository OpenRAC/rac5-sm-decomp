/* LEVEL_17:0x117DD8 -- placement copy of LEVEL_16_118428.c: counts down a shared timer, then runs two checks and two dispatches. */
extern int D_001ABAE4;
extern char *func_000DD0(void);
extern int func_114D40(void);
extern int func_112478(int i);
extern void func_0A3DE0(int slot, int a, int b, int c, int d, int e);
extern char D_00117FC0[];

void func_117DD8(void)
{
    unsigned int s0;
    int v;
    unsigned int d = 0xFFFFFFFF;

    if (D_001ABAE4 != 0) {
        D_001ABAE4 = D_001ABAE4 - 1;
        return;
    }
    if (func_000DD0() == 0) {
        return;
    }
    if (func_114D40() != 0) {
        return;
    }
    for (s0 = 0; s0 < 2; s0++) {
        v = func_112478(s0);
        func_0A3DE0(s0, (int)D_00117FC0, v, d, 3, 0x1D6);
    }
}
