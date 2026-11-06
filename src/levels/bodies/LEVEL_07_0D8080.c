extern long func_0D8AB8(void);
extern void func_0D8D90(int a);
extern void func_01AEE8(int a, int b);
extern unsigned char D_0021956C;
extern void func_138E70(void);
extern void func_138E78(void);
extern void func_0D8FE8(int a);

void func_0D8080(void)
{
    long v = func_0D8AB8();

    if (v == 1)
        goto A;
    if (v == 0)
        goto C;
    if (v != 2)
        goto C;
    func_0D8D90(0);
    return;
A:
    func_0D8D90(0);
    func_01AEE8(4, 0);
    if (D_0021956C != 0)
        func_138E70();
    else
        func_138E78();
    return;
B:
    func_0D8D90(0);
    return;
C:
    func_0D8FE8(2);
    return;
}
