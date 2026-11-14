/* LEVEL_22:0x13BDC0 -- placement copy of LEVEL_01_1CA588.c: registers eight fixed table entries, then looks up one handle and creates one command word and keeps both in globals. */
extern int D_00166938;
extern int D_0016693C;
extern void func_0D5658(int index);
extern int func_100C58(unsigned int value);
extern int func_0CAE28(int a, int b, int c, int d);

void func_13BDC0(void)
{
    func_0D5658(0xD);
    func_0D5658(0x10);
    func_0D5658(0x11);
    func_0D5658(0xE);
    func_0D5658(0xF);
    func_0D5658(0x1D);
    func_0D5658(0x7);
    func_0D5658(0x20);
    D_00166938 = func_100C58(0xA71E0E8Bu);
    D_0016693C = func_0CAE28(0, 7, 1, 0);
}
