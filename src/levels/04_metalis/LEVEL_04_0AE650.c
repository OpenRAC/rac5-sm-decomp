/* LEVEL_04:0x0AE650 -- placement copy of FRONTEND_00C050.c: runs the setup call sequence, then updates two flag words. */

extern unsigned int D_002152A8;
extern unsigned int D_002152AC;

extern void func_0A5C38(unsigned int a);
extern void func_0A5DD8(int a, int b, int c, int d, int e);
extern void func_0A5B20(int a);
extern void func_0A5B40(int a);
extern void func_0A5DB0(int a, unsigned int b, unsigned int c);
extern void func_0A5C90(int a, int b);
extern void func_0A5C98(int a, int b);
extern void func_0A5CA0(int a, int b);
extern void func_0A5CB0(float a, float b);

void func_0AE650(void)
{
    func_0A5C38(0xFFFFFFFF);
    func_0A5DD8(0, 2, 3, 0, 0);
    func_0A5B20(4);
    func_0A5B40(0xA);
    func_0A5B40(0xB);
    func_0A5B40(0xC);
    func_0A5B40(0xD);
    func_0A5B40(0xE);
    func_0A5B40(0);
    func_0A5B40(1);
    func_0A5B40(0x11);
    func_0A5DB0(1, 0xFFFFFFFF, 0xFFFFFFFF);
    func_0A5C90(1, 1);
    func_0A5C98(0, 1);
    func_0A5CA0(0, 0);
    func_0A5CB0(16.0f, 16.0f);
    func_0A5B40(5);
    D_002152AC |= 1;
    D_002152A8 |= 1;
    if ((D_002152A8 & 4) == 0 || (D_002152AC & 4) != 0) {
        func_0A5B40(9);
        D_002152AC &= ~4;
        D_002152A8 |= 4;
    }
}
