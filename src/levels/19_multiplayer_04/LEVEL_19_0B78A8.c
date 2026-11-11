/* LEVEL_19:0x0B78A8 -- placement copy of LEVEL_16_0B7FD0.c: queries three ids through a lookup helper, then forwards them to two draw helpers. */

extern int func_10F9D0(int a0);
extern void func_0C5F20(int a0, int a1, int a2, int a3);
extern void func_0C5F58(int a0);

void func_0B78A8(void)
{
    int s1;
    int s0;
    int v;

    s1 = func_10F9D0(0xA4C);
    s0 = func_10F9D0(0x30B);
    v = func_10F9D0(0x218);
    func_0C5F20(3, s1, s0, v);
    func_0C5F58(0xA);
}
