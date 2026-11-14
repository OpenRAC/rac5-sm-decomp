/* LEVEL_16:0x182D78 -- placement copy of LEVEL_01_1CA588.c: registers eight fixed table entries, then looks up one handle and creates one command word and keeps both in globals. */
extern int D_001BE3F8;
extern int D_001BE3FC;
extern void func_0DAAA8(int index);
extern int func_106E98(unsigned int value);
extern int func_0CC6C0(int a, int b, int c, int d);

void func_182D78(void)
{
    func_0DAAA8(0xD);
    func_0DAAA8(0x10);
    func_0DAAA8(0x11);
    func_0DAAA8(0xE);
    func_0DAAA8(0xF);
    func_0DAAA8(0x1D);
    func_0DAAA8(0x7);
    func_0DAAA8(0x20);
    D_001BE3F8 = func_106E98(0xA71E0E8Bu);
    D_001BE3FC = func_0CC6C0(0, 7, 1, 0);
}
