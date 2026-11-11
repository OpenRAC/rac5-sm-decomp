extern long func_0C5A28(void);
extern void func_0C5D00(int a);
extern void func_018898(int a, int b);
extern unsigned char D_001B429C;
extern void func_126240(void);
extern void func_126248(void);
extern void func_0C5F58(int a);

void func_0C4FF0(int arg) {
    long v = func_0C5A28();

    if (v == 1)
        goto A;
    if (v == 0)
        goto C;
    if (v != 2)
        goto C;
    func_0C5D00(0);
    return;
A:
    func_0C5D00(0);
    func_018898(4, 0);
    if (D_001B429C != 0)
        func_126240();
    else
        func_126248();
    return;
B:
    func_0C5D00(0);
    return;
C:
    func_0C5F58(2);
    return;
}
