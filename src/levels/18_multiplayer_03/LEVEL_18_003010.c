extern char *D_0019C15C;

void func_003010(int value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_0019C15C + 0x40);
    *flags = (*flags & ~(1ull << 3)) |
             ((value & 1ull) << 3);
}
