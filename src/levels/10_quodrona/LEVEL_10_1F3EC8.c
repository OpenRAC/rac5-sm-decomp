void func_1F3600(double *, long long *);
int func_1F3DB0(long long *, long long *);

int func_1F3EC8(double a, double b)
{
    long long l0[4];
    long long l1[4];

    func_1F3600(&a, l0);
    func_1F3600(&b, l1);
    return func_1F3DB0(l0, l1);
}
