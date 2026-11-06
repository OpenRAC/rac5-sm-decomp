extern long func_0D6840(void);
extern void func_0D6B18(int a);
extern void func_01A590(int a, int b);
extern unsigned char D_0021D8EC;
extern void func_134240(void);
extern void func_134248(void);
extern void func_0D6D70(int a);

void func_0D5E08(void)
{
    long v = func_0D6840();

    if (v == 1)
        goto A;
    if (v == 0)
        goto C;
    if (v != 2)
        goto C;
    func_0D6B18(0);
    return;
A:
    func_0D6B18(0);
    func_01A590(4, 0);
    if (D_0021D8EC != 0)
        func_134240();
    else
        func_134248();
    return;
B:
    func_0D6B18(0);
    return;
C:
    func_0D6D70(2);
    return;
}
