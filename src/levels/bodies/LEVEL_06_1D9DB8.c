void func_1D94F0(long long *, long long *);
void func_1D9CA0(long long *, long long *);

void func_1D9DB8(long long a0, long long a1)
{
    long long l0[4];
    long long l1[4];

    func_1D94F0(&a0, l0);
    func_1D94F0(&a1, l1);
    func_1D9CA0(l0, l1);
}
