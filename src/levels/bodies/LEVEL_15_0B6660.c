extern long func_0B7098(void);
extern void func_0B7370(int a);
extern void func_016A10(int a, int b);
extern unsigned char D_00159EEC;
extern void func_0F52B0(void);
extern void func_0F52D8(void);
extern void func_0B75C8(int a);

void func_0B6660(int arg) {
    long v = func_0B7098();

    if (v == 1)
        goto A;
    if (v == 0)
        goto C;
    if (v != 2)
        goto C;
    func_0B7370(0);
    return;
A:
    func_0B7370(0);
    func_016A10(4, 0);
    if (D_00159EEC != 0)
        func_0F52B0();
    else
        func_0F52D8();
    return;
B:
    func_0B7370(0);
    return;
C:
    func_0B75C8(2);
    return;
}
