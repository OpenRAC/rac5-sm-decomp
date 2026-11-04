void func_1D4410(long long *, long long *);
void func_1D4BC0(long long *, long long *);

void func_1D4CD8(long long a0, long long a1)
{
    long long l0[4];
    long long l1[4];

    func_1D4410(&a0, l0);
    func_1D4410(&a1, l1);
    func_1D4BC0(l0, l1);
}
