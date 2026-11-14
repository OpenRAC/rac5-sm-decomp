/* LEVEL_08:0x201C90 -- placement copy of LEVEL_01_1CA588.c: registers eight fixed table entries, then looks up one handle and creates one command word and keeps both in globals. */
extern int D_00252880;
extern int D_00252884;
extern void func_0FB190(int index);
extern int func_13B5A0(unsigned int value);
extern int func_0E8050(int a, int b, int c, int d);

void func_201C90(void)
{
    func_0FB190(0xD);
    func_0FB190(0x10);
    func_0FB190(0x11);
    func_0FB190(0xE);
    func_0FB190(0xF);
    func_0FB190(0x1D);
    func_0FB190(0x7);
    func_0FB190(0x20);
    D_00252880 = func_13B5A0(0xA71E0E8Bu);
    D_00252884 = func_0E8050(0, 7, 1, 0);
}
