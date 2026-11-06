extern long func_0C5128(void);
extern void func_0C5400(int a);
extern void func_0181E0(int a, int b);
extern unsigned char D_001B459C;
extern void func_124990(void);
extern void func_124998(void);
extern void func_0C5658(int a);

void func_0C46F0(void)
{
    long v = func_0C5128();

    if (v == 1)
        goto A;
    if (v == 0)
        goto C;
    if (v != 2)
        goto C;
    func_0C5400(0);
    return;
A:
    func_0C5400(0);
    func_0181E0(4, 0);
    if (D_001B459C != 0)
        func_124990();
    else
        func_124998();
    return;
B:
    func_0C5400(0);
    return;
C:
    func_0C5658(2);
    return;
}
