/* LEVEL_20:0x0F3F18 -- placement copy of LEVEL_16_121E18.c: reads the pad bits (unless the pause state is set) and starts the default action on the 0x1000 button, otherwise runs the idle step. */
extern int D_0011EC20;
extern unsigned int func_067228(int value);
extern int func_08F6B0(int index);
extern int func_096438(int a0);
extern void func_0F3CF8(void);

void func_0F3F18(void)
{
    unsigned int pad = 0;

    if (D_0011EC20 == 0) {
        pad = func_067228(0x6B10);
    }
    if (pad & 0x1000) {
        func_08F6B0(0);
        func_08F6B0(7);
        func_096438(0x2C);
    } else {
        func_0F3CF8();
    }
}
