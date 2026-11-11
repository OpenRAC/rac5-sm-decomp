void func_023528(double *, long long *);
int func_023CD8(long long *, long long *);

int func_023DF0(double a, double b)
{
    long long l0[4];
    long long l1[4];

    func_023528(&a, l0);
    func_023528(&b, l1);
    return func_023CD8(l0, l1);
}
