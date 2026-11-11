void func_1974E8(double *, long long *);
int func_197C98(long long *, long long *);

int dpcmp(double a, double b)
{
    long long l0[4];
    long long l1[4];

    func_1974E8(&a, l0);
    func_1974E8(&b, l1);
    return func_197C98(l0, l1);
}
