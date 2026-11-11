extern long func_0C4F98(void);
extern void func_0C5270(int a);
extern void func_016E40(int a, int b);
extern unsigned char D_001645EC;
extern void func_10D358(void);
extern void func_10D360(void);
extern void func_0C54C8(int a);

void func_0C4560(int arg) {
    long v = func_0C4F98();

    if (v == 1)
        goto A;
    if (v == 0)
        goto C;
    if (v != 2)
        goto C;
    func_0C5270(0);
    return;
A:
    func_0C5270(0);
    func_016E40(4, 0);
    if (D_001645EC != 0)
        func_10D358();
    else
        func_10D360();
    return;
B:
    func_0C5270(0);
    return;
C:
    func_0C54C8(2);
    return;
}
