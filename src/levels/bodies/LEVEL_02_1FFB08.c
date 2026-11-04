void func_1FF240(long long *, long long *);
void func_1FF9F0(long long *, long long *);

void func_1FFB08(long long a0, long long a1)
{
    long long l0[4];
    long long l1[4];

    func_1FF240(&a0, l0);
    func_1FF240(&a1, l1);
    func_1FF9F0(l0, l1);
}
