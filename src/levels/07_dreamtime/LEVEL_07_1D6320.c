/* LEVEL_07:0x1D6320 -- placement copy of LEVEL_01_1CA588.c: registers eight fixed table entries, then looks up one handle and creates one command word and keeps both in globals. */
extern int D_0021DBF8;
extern int D_0021DBFC;
extern void func_0F0548(int index);
extern int func_12D068(unsigned int value);
extern int func_0DEE70(int a, int b, int c, int d);

void func_1D6320(void)
{
    func_0F0548(0xD);
    func_0F0548(0x10);
    func_0F0548(0x11);
    func_0F0548(0xE);
    func_0F0548(0xF);
    func_0F0548(0x1D);
    func_0F0548(0x7);
    func_0F0548(0x20);
    D_0021DBF8 = func_12D068(0xA71E0E8Bu);
    D_0021DBFC = func_0DEE70(0, 7, 1, 0);
}
