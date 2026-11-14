/* LEVEL_03:0x1DACB0 -- placement copy of LEVEL_01_1CA588.c: registers eight fixed table entries, then looks up one handle and creates one command word and keeps both in globals. */
extern int D_00221E88;
extern int D_00221E8C;
extern void func_0EDFE0(int index);
extern int func_1282D0(unsigned int value);
extern int func_0DCE68(int a, int b, int c, int d);

void func_1DACB0(void)
{
    func_0EDFE0(0xD);
    func_0EDFE0(0x10);
    func_0EDFE0(0x11);
    func_0EDFE0(0xE);
    func_0EDFE0(0xF);
    func_0EDFE0(0x1D);
    func_0EDFE0(0x7);
    func_0EDFE0(0x20);
    D_00221E88 = func_1282D0(0xA71E0E8Bu);
    D_00221E8C = func_0DCE68(0, 7, 1, 0);
}
