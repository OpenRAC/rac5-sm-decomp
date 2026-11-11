/* LEVEL_22:0x097A10 -- placement copy of FRONTEND_00C050.c: runs the setup call sequence, then updates two flag words. */

extern unsigned int D_0015B168;
extern unsigned int D_0015B16C;

extern void func_08F0A0(unsigned int a);
extern void func_08F240(int a, int b, int c, int d, int e);
extern void func_08EF88(int a);
extern void func_08EFA8(int a);
extern void func_08F218(int a, unsigned int b, unsigned int c);
extern void func_08F0F8(int a, int b);
extern void func_08F100(int a, int b);
extern void func_08F108(int a, int b);
extern void func_08F118(float a, float b);

void func_097A10(void)
{
    func_08F0A0(0xFFFFFFFF);
    func_08F240(0, 2, 3, 0, 0);
    func_08EF88(4);
    func_08EFA8(0xA);
    func_08EFA8(0xB);
    func_08EFA8(0xC);
    func_08EFA8(0xD);
    func_08EFA8(0xE);
    func_08EFA8(0);
    func_08EFA8(1);
    func_08EFA8(0x11);
    func_08F218(1, 0xFFFFFFFF, 0xFFFFFFFF);
    func_08F0F8(1, 1);
    func_08F100(0, 1);
    func_08F108(0, 0);
    func_08F118(16.0f, 16.0f);
    func_08EFA8(5);
    D_0015B16C |= 1;
    D_0015B168 |= 1;
    if ((D_0015B168 & 4) == 0 || (D_0015B16C & 4) != 0) {
        func_08EFA8(9);
        D_0015B16C &= ~4;
        D_0015B168 |= 4;
    }
}
