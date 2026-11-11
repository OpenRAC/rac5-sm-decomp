/* LEVEL_18:0x120ED0 -- placement copy of LEVEL_16_121E18.c: reads the pad bits (unless the pause state is set) and starts the default action on the 0x1000 button, otherwise runs the idle step. */
extern int D_001BDA00;
extern unsigned int func_078F38(int value);
extern int func_0A40A8(int index);
extern int func_0AAEE0(int a0);
extern void func_120CB0(void);

void func_120ED0(void)
{
    unsigned int pad = 0;

    if (D_001BDA00 == 0) {
        pad = func_078F38(0x6B10);
    }
    if (pad & 0x1000) {
        func_0A40A8(0);
        func_0A40A8(7);
        func_0AAEE0(0x2C);
    } else {
        func_120CB0();
    }
}
