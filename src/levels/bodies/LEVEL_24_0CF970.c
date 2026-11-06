extern long func_0D03B0(void);
extern void func_0D0688(int a);
extern void func_018E18(int a, int b);
extern unsigned char D_001D5EEC;
extern void func_12B918(void);
extern void func_12B920(void);
extern void func_0D08E0(int a);

void func_0CF970(void)
{
    long v = func_0D03B0();

    if (v == 1)
        goto A;
    if (v == 0)
        goto C;
    if (v != 2)
        goto C;
    func_0D0688(0);
    return;
A:
    func_0D0688(0);
    func_018E18(4, 0);
    if (D_001D5EEC != 0)
        func_12B918();
    else
        func_12B920();
    return;
B:
    func_0D0688(0);
    return;
C:
    func_0D08E0(2);
    return;
}
