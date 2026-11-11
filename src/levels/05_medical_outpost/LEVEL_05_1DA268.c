void func_1D99A0(double *, long long *);
int func_1DA150(long long *, long long *);

int func_1DA268(double a, double b)
{
    long long l0[4];
    long long l1[4];

    func_1D99A0(&a, l0);
    func_1D99A0(&b, l1);
    return func_1DA150(l0, l1);
}
