void func_1F3600(long long *, long long *);
void func_1F3DB0(long long *, long long *);

void func_1F3EC8(long long a0, long long a1)
{
    long long l0[4];
    long long l1[4];

    func_1F3600(&a0, l0);
    func_1F3600(&a1, l1);
    func_1F3DB0(l0, l1);
}
