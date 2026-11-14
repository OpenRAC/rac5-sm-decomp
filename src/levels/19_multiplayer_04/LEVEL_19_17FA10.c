/* LEVEL_19:0x17FA10 -- placement copy of LEVEL_01_1CA588.c: registers eight fixed table entries, then looks up one handle and creates one command word and keeps both in globals. */
extern int D_001BF600;
extern int D_001BF604;
extern void func_0D9168(int index);
extern int func_107538(unsigned int value);
extern int func_0CBF98(int a, int b, int c, int d);

void func_17FA10(void)
{
    func_0D9168(0xD);
    func_0D9168(0x10);
    func_0D9168(0x11);
    func_0D9168(0xE);
    func_0D9168(0xF);
    func_0D9168(0x1D);
    func_0D9168(0x7);
    func_0D9168(0x20);
    D_001BF600 = func_107538(0xA71E0E8Bu);
    D_001BF604 = func_0CBF98(0, 7, 1, 0);
}
