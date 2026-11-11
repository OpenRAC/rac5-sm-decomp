void func_202C38(double *, long long *);
int func_2033E8(long long *, long long *);

int dpcmp(double a, double b)
{
    long long l0[4];
    long long l1[4];

    func_202C38(&a, l0);
    func_202C38(&b, l1);
    return func_2033E8(l0, l1);
}
