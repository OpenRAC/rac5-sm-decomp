/* LEVEL_10:0x1CDE30 -- placement copy of LEVEL_01_1CA588.c: registers eight fixed table entries, then looks up one handle and creates one command word and keeps both in globals. */
extern int D_00211F28;
extern int D_00211F2C;
extern void func_0EF088(int index);
extern int func_127EC8(unsigned int value);
extern int func_0DE4C0(int a, int b, int c, int d);

void func_1CDE30(void)
{
    func_0EF088(0xD);
    func_0EF088(0x10);
    func_0EF088(0x11);
    func_0EF088(0xE);
    func_0EF088(0xF);
    func_0EF088(0x1D);
    func_0EF088(0x7);
    func_0EF088(0x20);
    D_00211F28 = func_127EC8(0xA71E0E8Bu);
    D_00211F2C = func_0DE4C0(0, 7, 1, 0);
}
