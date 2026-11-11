/* LEVEL_19:0x122780 -- placement copy of LEVEL_16_121E18.c: reads the pad bits (unless the pause state is set) and starts the default action on the 0x1000 button, otherwise runs the idle step. */
extern int D_001BD6F8;
extern unsigned int func_079AA0(int value);
extern int func_0A4928(int index);
extern int func_0AB7E0(int a0);
extern void func_122560(void);

void func_122780(void)
{
    unsigned int pad = 0;

    if (D_001BD6F8 == 0) {
        pad = func_079AA0(0x6B10);
    }
    if (pad & 0x1000) {
        func_0A4928(0);
        func_0A4928(7);
        func_0AB7E0(0x2C);
    } else {
        func_122560();
    }
}
