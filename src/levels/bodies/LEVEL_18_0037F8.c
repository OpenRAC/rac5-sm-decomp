extern char *D_0019C15C;

void func_0037F8(unsigned long long value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_0019C15C + 0x40);
    *flags = (*flags & ~(1ull << 10)) |
             ((value & 1ull) << 10);
}
