extern char *D_001D9054;

void func_003BA0(unsigned long long value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_001D9054 + 0x40);
    *flags = (*flags & ~(1ull << 10)) |
             ((value & 1ull) << 10);
}
