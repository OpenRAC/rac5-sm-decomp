void func_1FE920(double *, long long *);
int func_1FF0D0(long long *, long long *);

int dpcmp(double a, double b)
{
    long long l0[4];
    long long l1[4];

    func_1FE920(&a, l0);
    func_1FE920(&b, l1);
    return func_1FF0D0(l0, l1);
}
