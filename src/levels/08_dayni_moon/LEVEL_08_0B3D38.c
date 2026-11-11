/* LEVEL_08:0x0B3D38 -- placement copy of FRONTEND_00C050.c: runs the setup call sequence, then updates two flag words. */

extern unsigned int D_00244CA8;
extern unsigned int D_00244CAC;

extern void func_0AB320(unsigned int a);
extern void func_0AB4C0(int a, int b, int c, int d, int e);
extern void func_0AB208(int a);
extern void func_0AB228(int a);
extern void func_0AB498(int a, unsigned int b, unsigned int c);
extern void func_0AB378(int a, int b);
extern void func_0AB380(int a, int b);
extern void func_0AB388(int a, int b);
extern void func_0AB398(float a, float b);

void func_0B3D38(void)
{
    func_0AB320(0xFFFFFFFF);
    func_0AB4C0(0, 2, 3, 0, 0);
    func_0AB208(4);
    func_0AB228(0xA);
    func_0AB228(0xB);
    func_0AB228(0xC);
    func_0AB228(0xD);
    func_0AB228(0xE);
    func_0AB228(0);
    func_0AB228(1);
    func_0AB228(0x11);
    func_0AB498(1, 0xFFFFFFFF, 0xFFFFFFFF);
    func_0AB378(1, 1);
    func_0AB380(0, 1);
    func_0AB388(0, 0);
    func_0AB398(16.0f, 16.0f);
    func_0AB228(5);
    D_00244CAC |= 1;
    D_00244CA8 |= 1;
    if ((D_00244CA8 & 4) == 0 || (D_00244CAC & 4) != 0) {
        func_0AB228(9);
        D_00244CAC &= ~4;
        D_00244CA8 |= 4;
    }
}
