/* LEVEL_04:0x1DCD10 -- placement copy of LEVEL_01_1CA588.c: registers eight fixed table entries, then looks up one handle and creates one command word and keeps both in globals. */
extern int D_00222748;
extern int D_0022274C;
extern void func_0F6C80(int index);
extern int func_1364E8(unsigned int value);
extern int func_0E2940(int a, int b, int c, int d);

void func_1DCD10(void)
{
    func_0F6C80(0xD);
    func_0F6C80(0x10);
    func_0F6C80(0x11);
    func_0F6C80(0xE);
    func_0F6C80(0xF);
    func_0F6C80(0x1D);
    func_0F6C80(0x7);
    func_0F6C80(0x20);
    D_00222748 = func_1364E8(0xA71E0E8Bu);
    D_0022274C = func_0E2940(0, 7, 1, 0);
}
