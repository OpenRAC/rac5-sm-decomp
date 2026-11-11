extern long func_0D7E98(void);
extern void func_0D8170(int a);
extern void func_019EA8(int a, int b);
extern unsigned char D_0020E26C;
extern void func_133CE8(void);
extern void func_133CF0(void);
extern void func_0D83C8(int a);

void func_0D7460(int arg) {
    long v = func_0D7E98();

    if (v == 1)
        goto A;
    if (v == 0)
        goto C;
    if (v != 2)
        goto C;
    func_0D8170(0);
    return;
A:
    func_0D8170(0);
    func_019EA8(4, 0);
    if (D_0020E26C != 0)
        func_133CE8();
    else
        func_133CF0();
    return;
B:
    func_0D8170(0);
    return;
C:
    func_0D83C8(2);
    return;
}
