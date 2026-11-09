/* LEVEL_02:0x0AFD10 -- placement copy of FRONTEND_00C050.c: runs the setup call sequence, then updates two flag words. */

extern unsigned int D_00210DA8;
extern unsigned int D_00210DAC;

extern void func_0A7338(unsigned int a);
extern void func_0A74D8(int a, int b, int c, int d, int e);
extern void func_0A7220(int a);
extern void func_0A7240(int a);
extern void func_0A74B0(int a, unsigned int b, unsigned int c);
extern void func_0A7390(int a, int b);
extern void func_0A7398(int a, int b);
extern void func_0A73A0(int a, int b);
extern void func_0A73B0(float a, float b);

void func_0AFD10(void)
{
    func_0A7338(0xFFFFFFFF);
    func_0A74D8(0, 2, 3, 0, 0);
    func_0A7220(4);
    func_0A7240(0xA);
    func_0A7240(0xB);
    func_0A7240(0xC);
    func_0A7240(0xD);
    func_0A7240(0xE);
    func_0A7240(0);
    func_0A7240(1);
    func_0A7240(0x11);
    func_0A74B0(1, 0xFFFFFFFF, 0xFFFFFFFF);
    func_0A7390(1, 1);
    func_0A7398(0, 1);
    func_0A73A0(0, 0);
    func_0A73B0(16.0f, 16.0f);
    func_0A7240(5);
    D_00210DAC |= 1;
    D_00210DA8 |= 1;
    if ((D_00210DA8 & 4) == 0 || (D_00210DAC & 4) != 0) {
        func_0A7240(9);
        D_00210DAC &= ~4;
        D_00210DA8 |= 4;
    }
}
