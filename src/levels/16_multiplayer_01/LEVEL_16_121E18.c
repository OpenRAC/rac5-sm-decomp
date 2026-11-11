/* LEVEL_16:0x121E18 -- reads the pad bits (unless the pause state is set) and starts the default action on the 0x1000 button, otherwise runs the idle step. */
extern int D_001BC580;
extern unsigned int func_0795B8(int value);
extern int func_0A50B0(int index);
extern int func_0ABF08(int a0);
extern void func_121BF8(void);

void func_121E18(void)
{
    unsigned int pad = 0;

    if (D_001BC580 == 0) {
        pad = func_0795B8(0x6B10);
    }
    if (pad & 0x1000) {
        func_0A50B0(0);
        func_0A50B0(7);
        func_0ABF08(0x2C);
    } else {
        func_121BF8();
    }
}
