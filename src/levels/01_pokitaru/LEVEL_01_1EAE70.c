void func_1EA5A8(double *, long long *);
int func_1EAD58(long long *, long long *);

int func_1EAE70(double a, double b)
{
    long long l0[4];
    long long l1[4];

    func_1EA5A8(&a, l0);
    func_1EA5A8(&b, l1);
    return func_1EAD58(l0, l1);
}
