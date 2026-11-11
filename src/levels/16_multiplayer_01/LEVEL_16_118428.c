/* LEVEL_16:0x118428 -- counts down a shared timer, then runs two checks and two dispatches. */
extern int D_001B84EC;
extern char *func_000DD0(void);
extern int func_1155E0(void);
extern int func_112CE8(int i);
extern void func_0A4900(int slot, int a, int b, int c, int d, int e);
extern char D_00118648[];

void func_118428(void)
{
    unsigned int s0;
    int v;
    unsigned int d = 0xFFFFFFFF;

    if (D_001B84EC != 0) {
        D_001B84EC = D_001B84EC - 1;
        return;
    }
    if (func_000DD0() == 0) {
        return;
    }
    if (func_1155E0() != 0) {
        return;
    }
    for (s0 = 0; s0 < 2; s0++) {
        v = func_112CE8(s0);
        func_0A4900(s0, (int)D_00118648, v, d, 3, 0x1D6);
    }
}
