/* LEVEL_19:0x119C28 -- placement copy of LEVEL_16_1192B8.c: runs setup loop, sets a timestep, and resets a counter when a flag is set or it overflows. */
extern int func_0B9100(unsigned int value);
extern void func_0B8CB8(int a);
extern int func_0AAF48(void);
extern void func_113C78(float a);
extern unsigned int func_079AA0(long long value);
extern int func_0A4928(int a);
extern void func_018918(int a, int b);
extern int D_001B9690;
extern char D_0019C024;

void func_119C28(void)
{
    int i;

    for (i = 0; i < 2; i++) {
        func_0B9100(i);
        func_0B8CB8(20);
    }
    if (func_0AAF48()) {
        func_113C78(0.033333335f);
    } else {
        func_113C78(0.0f);
    }
    if ((func_079AA0(0x6B10) & 0x4000) || (float)(++D_001B9690) > 5400.1074f) {
        func_0A4928(1);
        D_0019C024 = 0;
        func_018918(20, 1);
    }
}
