extern long func_0D5000(void);
extern void func_0D52D8(int a);
extern void func_019DC0(int a, int b);
extern unsigned char D_001F45EC;
extern void func_1317F8(void);
extern void func_131800(void);
extern void func_0D5530(int a);

void func_0D45C8(int arg) {
    long v = func_0D5000();

    if (v == 1)
        goto A;
    if (v == 0)
        goto C;
    if (v != 2)
        goto C;
    func_0D52D8(0);
    return;
A:
    func_0D52D8(0);
    func_019DC0(4, 0);
    if (D_001F45EC != 0)
        func_1317F8();
    else
        func_131800();
    return;
B:
    func_0D52D8(0);
    return;
C:
    func_0D5530(2);
    return;
}
