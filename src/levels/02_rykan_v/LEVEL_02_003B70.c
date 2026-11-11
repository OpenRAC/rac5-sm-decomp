/* LEVEL_02:0x003B70 -- placement copy of LEVEL_01_003B70.c: copies the low bit of the argument into bit 13 of the flag word at the start of a global record. */
extern char *D_00203ED4;

void func_003B70(int value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_00203ED4 + 0x40);
    *flags = (*flags & ~(1ull << 13)) |
             ((value & 1ull) << 13);
}
