void func_1BD9E8(double *, long long *);
int func_1BE198(long long *, long long *);

int dpcmp(double a, double b)
{
    long long l0[4];
    long long l1[4];

    func_1BD9E8(&a, l0);
    func_1BD9E8(&b, l1);
    return func_1BE198(l0, l1);
}
