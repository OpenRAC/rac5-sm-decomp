void func_1D4410(double *, long long *);
int func_1D4BC0(long long *, long long *);

int func_1D4CD8(double a, double b)
{
    long long l0[4];
    long long l1[4];

    func_1D4410(&a, l0);
    func_1D4410(&b, l1);
    return func_1D4BC0(l0, l1);
}
