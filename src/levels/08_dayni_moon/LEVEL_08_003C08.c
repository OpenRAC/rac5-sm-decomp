extern char *D_00237DD4;

void func_003C08(int value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_00237DD4 + 0x40);
    *flags = (*flags & ~(1ull << 10)) |
             ((value & 1ull) << 10);
}
