extern long func_0CD888(void);
extern void func_0CDB60(int a);
extern void func_019338(int a, int b);
extern unsigned char D_001D866C;
extern void func_127608(void);
extern void func_127610(void);
extern void func_0CDDB8(int a);

void func_0CCE50(int arg) {
    long v = func_0CD888();

    if (v == 1)
        goto A;
    if (v == 0)
        goto C;
    if (v != 2)
        goto C;
    func_0CDB60(0);
    return;
A:
    func_0CDB60(0);
    func_019338(4, 0);
    if (D_001D866C != 0)
        func_127608();
    else
        func_127610();
    return;
B:
    func_0CDB60(0);
    return;
C:
    func_0CDDB8(2);
    return;
}
