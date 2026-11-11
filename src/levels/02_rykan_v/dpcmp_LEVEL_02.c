void func_1FF240(double *, long long *);
int func_1FF9F0(long long *, long long *);

int dpcmp(double a, double b)
{
    long long l0[4];
    long long l1[4];

    func_1FF240(&a, l0);
    func_1FF240(&b, l1);
    return func_1FF9F0(l0, l1);
}
