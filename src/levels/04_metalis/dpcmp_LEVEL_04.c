void func_203768(double *, long long *);
int func_203F18(long long *, long long *);

int dpcmp(double a, double b)
{
    long long l0[4];
    long long l1[4];

    func_203768(&a, l0);
    func_203768(&b, l1);
    return func_203F18(l0, l1);
}
