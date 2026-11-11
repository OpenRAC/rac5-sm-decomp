extern void func_1066F0(int, void *, long long, long long, long long);

void func_1066A0(unsigned int value, long long a, long long b, long long c)
{
    func_1066F0(0x40, (void *)((value + 0x40u) & ~0x3fu), a, b, c);
}
