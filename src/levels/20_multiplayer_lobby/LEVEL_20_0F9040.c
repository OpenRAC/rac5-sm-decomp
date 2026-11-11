void func_0F8778(double *, long long *);
int func_0F8F28(long long *, long long *);

int func_0F9040(double a, double b)
{
    long long l0[4];
    long long l1[4];

    func_0F8778(&a, l0);
    func_0F8778(&b, l1);
    return func_0F8F28(l0, l1);
}
