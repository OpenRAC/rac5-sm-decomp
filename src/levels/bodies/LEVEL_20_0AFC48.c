extern long func_0B0680(void);
extern void func_0B0958(int a);
extern void func_016950(int a, int b);
extern unsigned char D_001157FC;
extern void func_0F79A0(void);
extern void func_0F79A8(void);
extern void func_0B0BB0(int a);

void func_0AFC48(void)
{
    long v = func_0B0680();

    if (v == 1)
        goto A;
    if (v == 0)
        goto C;
    if (v != 2)
        goto C;
    func_0B0958(0);
    return;
A:
    func_0B0958(0);
    func_016950(4, 0);
    if (D_001157FC != 0)
        func_0F79A0();
    else
        func_0F79A8();
    return;
B:
    func_0B0958(0);
    return;
C:
    func_0B0BB0(2);
    return;
}
