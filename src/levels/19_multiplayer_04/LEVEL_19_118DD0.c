/* LEVEL_19:0x118DD0 -- placement copy of LEVEL_16_118428.c: counts down a shared timer, then runs two checks and two dispatches. */
extern int D_001B9664;
extern char *func_000DD0(void);
extern int func_115D58(void);
extern int func_113490(int i);
extern void func_0A4178(int slot, int a, int b, int c, int d, int e);
extern char D_00118FB8[];

void func_118DD0(void)
{
    unsigned int s0;
    int v;
    unsigned int d = 0xFFFFFFFF;

    if (D_001B9664 != 0) {
        D_001B9664 = D_001B9664 - 1;
        return;
    }
    if (func_000DD0() == 0) {
        return;
    }
    if (func_115D58() != 0) {
        return;
    }
    for (s0 = 0; s0 < 2; s0++) {
        v = func_113490(s0);
        func_0A4178(s0, (int)D_00118FB8, v, d, 3, 0x1D6);
    }
}
