extern long func_0DD3E8(void);
extern void func_0DD6C0(int a);
extern void func_01B188(int a, int b);
extern unsigned char D_0021A22C;
extern void func_13C218(void);
extern void func_13C220(void);
extern void func_0DD918(int a);

void func_0DC9B0(void)
{
    long v = func_0DD3E8();

    if (v == 1)
        goto A;
    if (v == 0)
        goto C;
    if (v != 2)
        goto C;
    func_0DD6C0(0);
    return;
A:
    func_0DD6C0(0);
    func_01B188(4, 0);
    if (D_0021A22C != 0)
        func_13C218();
    else
        func_13C220();
    return;
B:
    func_0DD6C0(0);
    return;
C:
    func_0DD918(2);
    return;
}
