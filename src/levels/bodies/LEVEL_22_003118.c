extern char *D_0014E5D4;

void func_003118(unsigned long long value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_0014E5D4 + 0x40);
    *flags = (*flags & ~(1ull << 3)) |
             ((value & 1ull) << 3);
}
