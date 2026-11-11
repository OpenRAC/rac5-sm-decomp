void func_1BB280(double *, long long *);
int func_1BBA30(long long *, long long *);

int func_1BBB48(double a, double b)
{
    long long l0[4];
    long long l1[4];

    func_1BB280(&a, l0);
    func_1BB280(&b, l1);
    return func_1BBA30(l0, l1);
}
