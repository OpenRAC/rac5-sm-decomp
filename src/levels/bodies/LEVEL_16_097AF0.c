/* LEVEL_16:0x097AF0 -- placement copy of FRONTEND_00C050.c: runs the setup call sequence, then updates two flag words. */

extern unsigned int D_001A9DA8;
extern unsigned int D_001A9DAC;

extern void func_08FCE8(unsigned int a);
extern void func_08FE90(int a, int b, int c, int d, int e);
extern void func_08FBC8(int a);
extern void func_08FBE8(int a);
extern void func_08FE68(int a, unsigned int b, unsigned int c);
extern void func_08FD48(int a, int b);
extern void func_08FD50(int a, int b);
extern void func_08FD58(int a, int b);
extern void func_08FD68(float a, float b);

void func_097AF0(void)
{
    func_08FCE8(0xFFFFFFFF);
    func_08FE90(0, 2, 3, 0, 0);
    func_08FBC8(4);
    func_08FBE8(0xA);
    func_08FBE8(0xB);
    func_08FBE8(0xC);
    func_08FBE8(0xD);
    func_08FBE8(0xE);
    func_08FBE8(0);
    func_08FBE8(1);
    func_08FBE8(0x11);
    func_08FE68(1, 0xFFFFFFFF, 0xFFFFFFFF);
    func_08FD48(1, 1);
    func_08FD50(0, 1);
    func_08FD58(0, 0);
    func_08FD68(16.0f, 16.0f);
    func_08FBE8(5);
    D_001A9DAC |= 1;
    D_001A9DA8 |= 1;
    if ((D_001A9DA8 & 4) == 0 || (D_001A9DAC & 4) != 0) {
        func_08FBE8(9);
        D_001A9DAC &= ~4;
        D_001A9DA8 |= 4;
    }
}
