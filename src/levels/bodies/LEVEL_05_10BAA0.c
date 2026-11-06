extern void func_10BB30(int, void *, long long, long long, long long);

void func_10BAA0(unsigned int value, long long a, long long b, long long c)
{
    func_10BB30(0x40, (void *)((value + 0x40u) & ~0x3fu), a, b, c);
}
