/* LEVEL_10:0x003930 -- placement copy of LEVEL_01_003B70.c: copies the low bit of the argument into bit 13 of the flag word at the start of a global record. */
extern char *D_001F8254;

void func_003930(int value)
{
    unsigned long long *flags =
        (unsigned long long *)(D_001F8254 + 0x40);
    *flags = (*flags & ~(1ull << 13)) |
             ((value & 1ull) << 13);
}
