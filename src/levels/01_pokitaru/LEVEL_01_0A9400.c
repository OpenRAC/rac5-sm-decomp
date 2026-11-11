/* LEVEL_01:0x0A9400 -- placement copy of FRONTEND_00C050.c: runs the setup call sequence, then updates two flag words. */

extern unsigned int D_001FBDE8;
extern unsigned int D_001FBDEC;

extern void func_0A0A20(unsigned int a);
extern void func_0A0BC8(int a, int b, int c, int d, int e);
extern void func_0A0908(int a);
extern void func_0A0928(int a);
extern void func_0A0BA0(int a, unsigned int b, unsigned int c);
extern void func_0A0A80(int a, int b);
extern void func_0A0A88(int a, int b);
extern void func_0A0A90(int a, int b);
extern void func_0A0AA0(float a, float b);

void func_0A9400(void)
{
    func_0A0A20(0xFFFFFFFF);
    func_0A0BC8(0, 2, 3, 0, 0);
    func_0A0908(4);
    func_0A0928(0xA);
    func_0A0928(0xB);
    func_0A0928(0xC);
    func_0A0928(0xD);
    func_0A0928(0xE);
    func_0A0928(0);
    func_0A0928(1);
    func_0A0928(0x11);
    func_0A0BA0(1, 0xFFFFFFFF, 0xFFFFFFFF);
    func_0A0A80(1, 1);
    func_0A0A88(0, 1);
    func_0A0A90(0, 0);
    func_0A0AA0(16.0f, 16.0f);
    func_0A0928(5);
    D_001FBDEC |= 1;
    D_001FBDE8 |= 1;
    if ((D_001FBDE8 & 4) == 0 || (D_001FBDEC & 4) != 0) {
        func_0A0928(9);
        D_001FBDEC &= ~4;
        D_001FBDE8 |= 4;
    }
}
