/* LEVEL_19:0x097380 -- placement copy of FRONTEND_00C050.c: runs the setup call sequence, then updates two flag words. */

extern unsigned int D_001AAF28;
extern unsigned int D_001AAF2C;

extern void func_08F580(unsigned int a);
extern void func_08F720(int a, int b, int c, int d, int e);
extern void func_08F460(int a);
extern void func_08F480(int a);
extern void func_08F6F8(int a, unsigned int b, unsigned int c);
extern void func_08F5D8(int a, int b);
extern void func_08F5E0(int a, int b);
extern void func_08F5E8(int a, int b);
extern void func_08F5F8(float a, float b);

void func_097380(void)
{
    func_08F580(0xFFFFFFFF);
    func_08F720(0, 2, 3, 0, 0);
    func_08F460(4);
    func_08F480(0xA);
    func_08F480(0xB);
    func_08F480(0xC);
    func_08F480(0xD);
    func_08F480(0xE);
    func_08F480(0);
    func_08F480(1);
    func_08F480(0x11);
    func_08F6F8(1, 0xFFFFFFFF, 0xFFFFFFFF);
    func_08F5D8(1, 1);
    func_08F5E0(0, 1);
    func_08F5E8(0, 0);
    func_08F5F8(16.0f, 16.0f);
    func_08F480(5);
    D_001AAF2C |= 1;
    D_001AAF28 |= 1;
    if ((D_001AAF28 & 4) == 0 || (D_001AAF2C & 4) != 0) {
        func_08F480(9);
        D_001AAF2C &= ~4;
        D_001AAF28 |= 4;
    }
}
