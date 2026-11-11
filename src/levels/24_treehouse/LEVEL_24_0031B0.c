extern char *D_001BFED4;

void func_0031B0(int value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_001BFED4 + 0x40);
    *flags = (*flags & ~(1ull << 3)) |
             ((value & 1ull) << 3);
}
