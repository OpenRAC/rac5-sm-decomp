/* LEVEL_06:0x0A3BD0 -- placement copy of FRONTEND_00C050.c: runs the setup call sequence, then updates two flag words. */

extern unsigned int D_001EACE8;
extern unsigned int D_001EACEC;

extern void func_09B1F8(unsigned int a);
extern void func_09B398(int a, int b, int c, int d, int e);
extern void func_09B0E0(int a);
extern void func_09B100(int a);
extern void func_09B370(int a, unsigned int b, unsigned int c);
extern void func_09B250(int a, int b);
extern void func_09B258(int a, int b);
extern void func_09B260(int a, int b);
extern void func_09B270(float a, float b);

void func_0A3BD0(void)
{
    func_09B1F8(0xFFFFFFFF);
    func_09B398(0, 2, 3, 0, 0);
    func_09B0E0(4);
    func_09B100(0xA);
    func_09B100(0xB);
    func_09B100(0xC);
    func_09B100(0xD);
    func_09B100(0xE);
    func_09B100(0);
    func_09B100(1);
    func_09B100(0x11);
    func_09B370(1, 0xFFFFFFFF, 0xFFFFFFFF);
    func_09B250(1, 1);
    func_09B258(0, 1);
    func_09B260(0, 0);
    func_09B270(16.0f, 16.0f);
    func_09B100(5);
    D_001EACEC |= 1;
    D_001EACE8 |= 1;
    if ((D_001EACE8 & 4) == 0 || (D_001EACEC & 4) != 0) {
        func_09B100(9);
        D_001EACEC &= ~4;
        D_001EACE8 |= 4;
    }
}
