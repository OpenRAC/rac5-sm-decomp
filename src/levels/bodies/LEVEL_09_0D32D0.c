extern long func_0D3D08(void);
extern void func_0D3FE0(int a);
extern void func_019C18(int a, int b);
extern unsigned char D_001EF06C;
extern void func_12EE08(void);
extern void func_12EE10(void);
extern void func_0D4238(int a);

void func_0D32D0(void)
{
    long v = func_0D3D08();

    if (v == 1)
        goto A;
    if (v == 0)
        goto C;
    if (v != 2)
        goto C;
    func_0D3FE0(0);
    return;
A:
    func_0D3FE0(0);
    func_019C18(4, 0);
    if (D_001EF06C != 0)
        func_12EE08();
    else
        func_12EE10();
    return;
B:
    func_0D3FE0(0);
    return;
C:
    func_0D4238(2);
    return;
}
