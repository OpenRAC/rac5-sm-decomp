/* LEVEL_17:0x0B7510 -- placement copy of LEVEL_16_0B7FD0.c: queries three ids through a lookup helper, then forwards them to two draw helpers. */

extern int func_10E8A8(int a0);
extern void func_0C5B88(int a0, int a1, int a2, int a3);
extern void func_0C5BC0(int a0);

void func_0B7510(void)
{
    int s1;
    int s0;
    int v;

    s1 = func_10E8A8(0xA4C);
    s0 = func_10E8A8(0x30B);
    v = func_10E8A8(0x218);
    func_0C5B88(3, s1, s0, v);
    func_0C5BC0(0xA);
}
