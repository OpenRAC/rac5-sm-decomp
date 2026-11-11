extern long func_0DC308(void);
extern void func_0DC5E0(int a);
extern void func_01A4A8(int a, int b);
extern unsigned char D_0021E72C;
extern void func_1422B0(void);
extern void func_1422B8(void);
extern void func_0DC838(int a);

void func_0DB8C8(int arg) {
    long v = func_0DC308();

    if (v == 1)
        goto A;
    if (v == 0)
        goto C;
    if (v != 2)
        goto C;
    func_0DC5E0(0);
    return;
A:
    func_0DC5E0(0);
    func_01A4A8(4, 0);
    if (D_0021E72C != 0)
        func_1422B0();
    else
        func_1422B8();
    return;
B:
    func_0DC5E0(0);
    return;
C:
    func_0DC838(2);
    return;
}
