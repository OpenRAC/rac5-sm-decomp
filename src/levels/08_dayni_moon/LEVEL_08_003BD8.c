/* LEVEL_08:0x003BD8 -- placement copy of LEVEL_01_003B70.c: copies the low bit of the argument into bit 13 of the flag word at the start of a global record. */
extern char *D_00237DD4;

void func_003BD8(int value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_00237DD4 + 0x40);
    *flags = (*flags & ~(1ull << 13)) |
             ((value & 1ull) << 13);
}
