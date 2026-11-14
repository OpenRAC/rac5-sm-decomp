/* LEVEL_24:0x19E838 -- placement copy of LEVEL_01_1CA588.c: registers eight fixed table entries, then looks up one handle and creates one command word and keeps both in globals. */
extern int D_001D9E70;
extern int D_001D9E74;
extern void func_0E7358(int index);
extern int func_11FB68(unsigned int value);
extern int func_0D6778(int a, int b, int c, int d);

void func_19E838(void)
{
    func_0E7358(0xD);
    func_0E7358(0x10);
    func_0E7358(0x11);
    func_0E7358(0xE);
    func_0E7358(0xF);
    func_0E7358(0x1D);
    func_0E7358(0x7);
    func_0E7358(0x20);
    D_001D9E70 = func_11FB68(0xA71E0E8Bu);
    D_001D9E74 = func_0D6778(0, 7, 1, 0);
}
