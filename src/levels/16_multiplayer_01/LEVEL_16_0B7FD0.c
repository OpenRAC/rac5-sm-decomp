/* LEVEL_16:0x0B7FD0 -- queries three ids through a lookup helper, then forwards them to two draw helpers. */

extern int func_10F330(int a0);
extern void func_0C6648(int a0, int a1, int a2, int a3);
extern void func_0C6680(int a0);

void func_0B7FD0(void)
{
    int s1;
    int s0;
    int v;

    s1 = func_10F330(0xA4C);
    s0 = func_10F330(0x30B);
    v = func_10F330(0x218);
    func_0C6648(3, s1, s0, v);
    func_0C6680(0xA);
}
