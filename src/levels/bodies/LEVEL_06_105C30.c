extern void func_105CC0(int, void *, long long, long long, long long);

void func_105C30(unsigned int value, long long a, long long b, long long c)
{
    func_105CC0(0x40, (void *)((value + 0x40u) & ~0x3fu), a, b, c);
}
