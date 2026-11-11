/* LEVEL_17:0x121840 -- placement copy of LEVEL_16_121E18.c: reads the pad bits (unless the pause state is set) and starts the default action on the 0x1000 button, otherwise runs the idle step. */
extern int D_001AFB78;
extern unsigned int func_07A030(int value);
extern int func_0A4590(int index);
extern int func_0AB448(int a0);
extern void func_121620(void);

void func_121840(void)
{
    unsigned int pad = 0;

    if (D_001AFB78 == 0) {
        pad = func_07A030(0x6B10);
    }
    if (pad & 0x1000) {
        func_0A4590(0);
        func_0A4590(7);
        func_0AB448(0x2C);
    } else {
        func_121620();
    }
}
