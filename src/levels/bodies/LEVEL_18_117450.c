/* LEVEL_18:0x117450 -- placement copy of LEVEL_16_118428.c: counts down a shared timer, then runs two checks and two dispatches. */
extern int D_001B996C;
extern char *func_000E40(void);
extern int func_114388(void);
extern int func_111AA0(int i);
extern void func_0A38F8(int slot, int a, int b, int c, int d, int e);
extern char D_00117638[];

void func_117450(void)
{
    unsigned int s0;
    int v;
    unsigned int d = 0xFFFFFFFF;

    if (D_001B996C != 0) {
        D_001B996C = D_001B996C - 1;
        return;
    }
    if (func_000E40() == 0) {
        return;
    }
    if (func_114388() != 0) {
        return;
    }
    for (s0 = 0; s0 < 2; s0++) {
        v = func_111AA0(s0);
        func_0A38F8(s0, (int)D_00117638, v, d, 3, 0x1D6);
    }
}
