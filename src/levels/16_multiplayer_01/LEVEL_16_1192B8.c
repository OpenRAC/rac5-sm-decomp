/* LEVEL_16:0x1192B8 -- runs setup loop, sets a timestep, and resets a counter when a flag is set or it overflows. */
extern int func_0B9828(unsigned int value);
extern void func_0B93E0(int a);
extern int func_0AB670(void);
extern void func_1134D0(float a);
extern unsigned int func_0795B8(int value);
extern int func_0A50B0(int a);
extern int func_018C18(int a, int b);
extern int D_001B8518;
extern char D_0019AEA4;

void func_1192B8(void)
{
    int i;

    for (i = 0; i < 2; i++) {
        func_0B9828(i);
        func_0B93E0(20);
    }
    if (func_0AB670()) {
        func_1134D0(0.033333335f);
    } else {
        func_1134D0(0.0f);
    }
    if ((func_0795B8(0x6B10) & 0x4000) || (float)(++D_001B8518) > 5400.1074f) {
        func_0A50B0(1);
        D_0019AEA4 = 0;
        func_018C18(20, 1);
    }
}
