/* LEVEL_23:0x19FCD0 -- placement copy of LEVEL_01_1CA588.c: registers eight fixed table entries, then looks up one handle and creates one command word and keeps both in globals. */
extern int D_001DC288;
extern int D_001DC28C;
extern void func_0E2630(int index);
extern int func_11AEE0(unsigned int value);
extern int func_0D3C40(int a, int b, int c, int d);

void func_19FCD0(void)
{
    func_0E2630(0xD);
    func_0E2630(0x10);
    func_0E2630(0x11);
    func_0E2630(0xE);
    func_0E2630(0xF);
    func_0E2630(0x1D);
    func_0E2630(0x7);
    func_0E2630(0x20);
    D_001DC288 = func_11AEE0(0xA71E0E8Bu);
    D_001DC28C = func_0D3C40(0, 7, 1, 0);
}
