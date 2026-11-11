void func_13F2A0(double *, long long *);
int func_13FA50(long long *, long long *);

int func_13FB68(double a, double b)
{
    long long l0[4];
    long long l1[4];

    func_13F2A0(&a, l0);
    func_13F2A0(&b, l1);
    return func_13FA50(l0, l1);
}
