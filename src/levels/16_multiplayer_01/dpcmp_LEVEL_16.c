void func_196048(double *, long long *);
int func_1967F8(long long *, long long *);

int dpcmp(double a, double b)
{
    long long l0[4];
    long long l1[4];

    func_196048(&a, l0);
    func_196048(&b, l1);
    return func_1967F8(l0, l1);
}
