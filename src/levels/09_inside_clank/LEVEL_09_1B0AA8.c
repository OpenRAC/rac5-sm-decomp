/* LEVEL_09:0x1B0AA8 -- placement copy of LEVEL_01_1CA588.c: registers eight fixed table entries, then looks up one handle and creates one command word and keeps both in globals. */
extern int D_001F2BA0;
extern int D_001F2BA4;
extern void func_0EB628(int index);
extern int func_123000(unsigned int value);
extern int func_0DA330(int a, int b, int c, int d);

void func_1B0AA8(void)
{
    func_0EB628(0xD);
    func_0EB628(0x10);
    func_0EB628(0x11);
    func_0EB628(0xE);
    func_0EB628(0xF);
    func_0EB628(0x1D);
    func_0EB628(0x7);
    func_0EB628(0x20);
    D_001F2BA0 = func_123000(0xA71E0E8Bu);
    D_001F2BA4 = func_0DA330(0, 7, 1, 0);
}
