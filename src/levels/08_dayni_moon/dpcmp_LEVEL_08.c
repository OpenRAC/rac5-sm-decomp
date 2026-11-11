void func_233130(double *, long long *);
int func_2338E0(long long *, long long *);

int dpcmp(double a, double b)
{
    long long l0[4];
    long long l1[4];

    func_233130(&a, l0);
    func_233130(&b, l1);
    return func_2338E0(l0, l1);
}
