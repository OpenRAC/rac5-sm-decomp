/* LEVEL_06:0x1B6D40 -- placement copy of LEVEL_01_1CA588.c: registers eight fixed table entries, then looks up one handle and creates one command word and keeps both in globals. */
extern int D_001F7E78;
extern int D_001F7E7C;
extern void func_0E8808(int index);
extern int func_1206C0(unsigned int value);
extern int func_0D7980(int a, int b, int c, int d);

void func_1B6D40(void)
{
    func_0E8808(0xD);
    func_0E8808(0x10);
    func_0E8808(0x11);
    func_0E8808(0xE);
    func_0E8808(0xF);
    func_0E8808(0x1D);
    func_0E8808(0x7);
    func_0E8808(0x20);
    D_001F7E78 = func_1206C0(0xA71E0E8Bu);
    D_001F7E7C = func_0D7980(0, 7, 1, 0);
}
