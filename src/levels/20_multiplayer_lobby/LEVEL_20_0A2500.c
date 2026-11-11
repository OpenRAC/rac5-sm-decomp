/* LEVEL_20:0x0A2500 -- placement copy of LEVEL_16_0B7FD0.c: queries three ids through a lookup helper, then forwards them to two draw helpers. */

extern int func_0E2118(int a0);
extern void func_0B0B78(int a0, int a1, int a2, int a3);
extern void func_0B0BB0(int a0);

void func_0A2500(void)
{
    int s1;
    int s0;
    int v;

    s1 = func_0E2118(0xA4C);
    s0 = func_0E2118(0x30B);
    v = func_0E2118(0x218);
    func_0B0B78(3, s1, s0, v);
    func_0B0BB0(0xA);
}
