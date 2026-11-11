extern char *D_001BFED4;

void func_0039A8(int value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_001BFED4 + 0x40);
    *flags = (*flags & ~(1ull << 10)) |
             ((value & 1ull) << 10);
}
