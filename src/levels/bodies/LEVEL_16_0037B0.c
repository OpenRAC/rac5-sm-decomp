extern char *D_0019ACDC;

void func_0037B0(unsigned long long value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_0019ACDC + 0x40);
    *flags = (*flags & ~(1ull << 11)) |
             ((value & 1ull) << 11);
}
