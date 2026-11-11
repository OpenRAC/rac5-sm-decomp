extern long func_0E1A18(void);
extern void func_0E1CF0(int a);
extern void func_01B1A0(int a, int b);
extern unsigned char D_0024E12C;
extern void func_147310(void);
extern void func_147318(void);
extern void func_0E1F48(int a);

void func_0E0FD8(int arg) {
    long v = func_0E1A18();

    if (v == 1)
        goto A;
    if (v == 0)
        goto C;
    if (v != 2)
        goto C;
    func_0E1CF0(0);
    return;
A:
    func_0E1CF0(0);
    func_01B1A0(4, 0);
    if (D_0024E12C != 0)
        func_147310();
    else
        func_147318();
    return;
B:
    func_0E1CF0(0);
    return;
C:
    func_0E1F48(2);
    return;
}
