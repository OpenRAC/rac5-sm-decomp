extern char *D_0019ACDC;

void func_002FA0(int value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_0019ACDC + 0x40);
    *flags = (*flags & ~(1ull << 3)) |
             ((value & 1ull) << 3);
}
