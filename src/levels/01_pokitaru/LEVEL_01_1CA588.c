/* LEVEL_01:0x1CA588 -- registers eight fixed table entries, then looks up one handle and creates one command word and keeps both in globals. */
extern int D_00208FB0;
extern int D_00208FB4;
extern void func_0EF748(int index);
extern int func_12A068(unsigned int value);
extern int func_0DD080(int a, int b, int c, int d);

void func_1CA588(void)
{
    func_0EF748(0xD);
    func_0EF748(0x10);
    func_0EF748(0x11);
    func_0EF748(0xE);
    func_0EF748(0xF);
    func_0EF748(0x1D);
    func_0EF748(0x7);
    func_0EF748(0x20);
    D_00208FB0 = func_12A068(0xA71E0E8Bu);
    D_00208FB4 = func_0DD080(0, 7, 1, 0);
}
