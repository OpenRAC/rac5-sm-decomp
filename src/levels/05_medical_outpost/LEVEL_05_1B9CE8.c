/* LEVEL_05:0x1B9CE8 -- placement copy of LEVEL_01_1CA588.c: registers eight fixed table entries, then looks up one handle and creates one command word and keeps both in globals. */
extern int D_001F7F30;
extern int D_001F7F34;
extern void func_0EB888(int index);
extern int func_1259E0(unsigned int value);
extern int func_0DB3B8(int a, int b, int c, int d);

void func_1B9CE8(void)
{
    func_0EB888(0xD);
    func_0EB888(0x10);
    func_0EB888(0x11);
    func_0EB888(0xE);
    func_0EB888(0xF);
    func_0EB888(0x1D);
    func_0EB888(0x7);
    func_0EB888(0x20);
    D_001F7F30 = func_1259E0(0xA71E0E8Bu);
    D_001F7F34 = func_0DB3B8(0, 7, 1, 0);
}
