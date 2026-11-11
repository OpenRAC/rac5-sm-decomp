extern long func_0D1358(void);
extern void func_0D1630(int a);
extern void func_019028(int a, int b);
extern unsigned char D_001F416C;
extern void func_12C540(void);
extern void func_12C548(void);
extern void func_0D1888(int a);

void func_0D0920(int arg) {
    long v = func_0D1358();

    if (v == 1)
        goto A;
    if (v == 0)
        goto C;
    if (v != 2)
        goto C;
    func_0D1630(0);
    return;
A:
    func_0D1630(0);
    func_019028(4, 0);
    if (D_001F416C != 0)
        func_12C540();
    else
        func_12C548();
    return;
B:
    func_0D1630(0);
    return;
C:
    func_0D1888(2);
    return;
}
