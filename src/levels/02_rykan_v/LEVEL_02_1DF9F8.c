/* LEVEL_02:0x1DF9F8 -- placement copy of LEVEL_01_1CA588.c: registers eight fixed table entries, then looks up one handle and creates one command word and keeps both in globals. */
extern int D_0021DF10;
extern int D_0021DF14;
extern void func_0F58F8(int index);
extern int func_130418(unsigned int value);
extern int func_0E3A10(int a, int b, int c, int d);

void func_1DF9F8(void)
{
    func_0F58F8(0xD);
    func_0F58F8(0x10);
    func_0F58F8(0x11);
    func_0F58F8(0xE);
    func_0F58F8(0xF);
    func_0F58F8(0x1D);
    func_0F58F8(0x7);
    func_0F58F8(0x20);
    D_0021DF10 = func_130418(0xA71E0E8Bu);
    D_0021DF14 = func_0E3A10(0, 7, 1, 0);
}
