void func_1D94F0(double *, long long *);
int func_1D9CA0(long long *, long long *);

int func_1D9DB8(double a, double b)
{
    long long l0[4];
    long long l1[4];

    func_1D94F0(&a, l0);
    func_1D94F0(&b, l1);
    return func_1D9CA0(l0, l1);
}
