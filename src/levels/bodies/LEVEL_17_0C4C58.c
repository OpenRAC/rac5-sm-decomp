extern long func_0C5690(void);
extern void func_0C5968(int a);
extern void func_018518(int a, int b);
extern unsigned char D_001A671C;
extern void func_125318(void);
extern void func_125320(void);
extern void func_0C5BC0(int a);

void func_0C4C58(int arg) {
    long v = func_0C5690();

    if (v == 1)
        goto A;
    if (v == 0)
        goto C;
    if (v != 2)
        goto C;
    func_0C5968(0);
    return;
A:
    func_0C5968(0);
    func_018518(4, 0);
    if (D_001A671C != 0)
        func_125318();
    else
        func_125320();
    return;
B:
    func_0C5968(0);
    return;
C:
    func_0C5BC0(2);
    return;
}
