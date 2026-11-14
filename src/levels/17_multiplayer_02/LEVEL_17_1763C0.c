/* LEVEL_17:0x1763C0 -- placement copy of LEVEL_01_1CA588.c: registers eight fixed table entries, then looks up one handle and creates one command word and keeps both in globals. */
extern int D_001B18D0;
extern int D_001B18D4;
extern void func_0D99D0(int index);
extern int func_106410(unsigned int value);
extern int func_0CB990(int a, int b, int c, int d);

void func_1763C0(void)
{
    func_0D99D0(0xD);
    func_0D99D0(0x10);
    func_0D99D0(0x11);
    func_0D99D0(0xE);
    func_0D99D0(0xF);
    func_0D99D0(0x1D);
    func_0D99D0(0x7);
    func_0D99D0(0x20);
    D_001B18D0 = func_106410(0xA71E0E8Bu);
    D_001B18D4 = func_0CB990(0, 7, 1, 0);
}
