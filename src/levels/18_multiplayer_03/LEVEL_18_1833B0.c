/* LEVEL_18:0x1833B0 -- placement copy of LEVEL_01_1CA588.c: registers eight fixed table entries, then looks up one handle and creates one command word and keeps both in globals. */
extern int D_001BF920;
extern int D_001BF924;
extern void func_0D8868(int index);
extern int func_105B48(unsigned int value);
extern int func_0CB698(int a, int b, int c, int d);

void func_1833B0(void)
{
    func_0D8868(0xD);
    func_0D8868(0x10);
    func_0D8868(0x11);
    func_0D8868(0xE);
    func_0D8868(0xF);
    func_0D8868(0x1D);
    func_0D8868(0x7);
    func_0D8868(0x20);
    D_001BF920 = func_105B48(0xA71E0E8Bu);
    D_001BF924 = func_0CB698(0, 7, 1, 0);
}
