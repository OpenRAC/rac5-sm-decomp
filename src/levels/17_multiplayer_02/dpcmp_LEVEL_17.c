void func_189690(double *, long long *);
int func_189E40(long long *, long long *);

int dpcmp(double a, double b)
{
    long long l0[4];
    long long l1[4];

    func_189690(&a, l0);
    func_189690(&b, l1);
    return func_189E40(l0, l1);
}
