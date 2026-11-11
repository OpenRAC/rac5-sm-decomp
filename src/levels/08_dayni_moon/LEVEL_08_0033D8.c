extern char *D_00237DD4;

void func_0033D8(int value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_00237DD4 + 0x40);
    *flags = (*flags & ~(1ull << 3)) |
             ((value & 1ull) << 3);
}
