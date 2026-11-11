extern void func_11FE90(int, void *, long long, long long, long long);

void func_11FE00(unsigned int value, long long a, long long b, long long c)
{
    func_11FE90(0x40, (void *)((value + 0x40u) & ~0x3fu), a, b, c);
}
