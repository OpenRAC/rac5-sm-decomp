extern long func_0D6A58(void);
extern void func_0D6D30(int a);
extern void func_01A828(int a, int b);
extern unsigned char D_0020526C;
extern void func_135E78(void);
extern void func_135E80(void);
extern void func_0D6F88(int a);

void func_0D6020(void)
{
    long v = func_0D6A58();

    if (v == 1)
        goto A;
    if (v == 0)
        goto C;
    if (v != 2)
        goto C;
    func_0D6D30(0);
    return;
A:
    func_0D6D30(0);
    func_01A828(4, 0);
    if (D_0020526C != 0)
        func_135E78();
    else
        func_135E80();
    return;
B:
    func_0D6D30(0);
    return;
C:
    func_0D6F88(2);
    return;
}
