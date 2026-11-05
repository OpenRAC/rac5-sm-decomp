extern char *D_001F8254;

void func_003988(unsigned long long value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_001F8254 + 0x40);
    *flags = (*flags & ~(1ull << 11)) |
             ((value & 1ull) << 11);
}
