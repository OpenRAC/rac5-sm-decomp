/* LEVEL_15:0x089CC8 -- placement copy of FRONTEND_00C050.c: runs the setup call sequence, then updates two flag words. */

extern unsigned int D_00150A68;
extern unsigned int D_00150A6C;

extern void func_081388(unsigned int a);
extern void func_081528(int a, int b, int c, int d, int e);
extern void func_081270(int a);
extern void func_081290(int a);
extern void func_081500(int a, unsigned int b, unsigned int c);
extern void func_0813E0(int a, int b);
extern void func_0813E8(int a, int b);
extern void func_0813F0(int a, int b);
extern void func_081400(float a, float b);

void func_089CC8(void)
{
    func_081388(0xFFFFFFFF);
    func_081528(0, 2, 3, 0, 0);
    func_081270(4);
    func_081290(0xA);
    func_081290(0xB);
    func_081290(0xC);
    func_081290(0xD);
    func_081290(0xE);
    func_081290(0);
    func_081290(1);
    func_081290(0x11);
    func_081500(1, 0xFFFFFFFF, 0xFFFFFFFF);
    func_0813E0(1, 1);
    func_0813E8(0, 1);
    func_0813F0(0, 0);
    func_081400(16.0f, 16.0f);
    func_081290(5);
    D_00150A6C |= 1;
    D_00150A68 |= 1;
    if ((D_00150A68 & 4) == 0 || (D_00150A6C & 4) != 0) {
        func_081290(9);
        D_00150A6C &= ~4;
        D_00150A68 |= 4;
    }
}
