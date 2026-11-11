extern long func_0C6150(void);
extern void func_0C6428(int a);
extern void func_018B98(int a, int b);
extern unsigned char D_001B311C;
extern void func_1258E0(void);
extern void func_1258E8(void);
extern void func_0C6680(int a);

void func_0C5718(int arg) {
    long v = func_0C6150();

    if (v == 1)
        goto A;
    if (v == 0)
        goto C;
    if (v != 2)
        goto C;
    func_0C6428(0);
    return;
A:
    func_0C6428(0);
    func_018B98(4, 0);
    if (D_001B311C != 0)
        func_1258E0();
    else
        func_1258E8();
    return;
B:
    func_0C6428(0);
    return;
C:
    func_0C6680(2);
    return;
}
