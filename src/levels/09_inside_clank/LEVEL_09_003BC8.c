extern char *D_001D9054;

void func_003BC8(unsigned long long value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_001D9054 + 0x40);
    *flags = (*flags & ~(1ull << 11)) |
             ((value & 1ull) << 11);
}
