/* LEVEL_22:0x08EB88 -- placement copy of LEVEL_01_0A0508.c: placement copy of LEVEL_01_0A0508.c: returns the address 0x10 bytes into an object, or null for a null object. */
char *func_08EB88(char *p)
{
    if (p == 0) {
        return 0;
    }
    return p + 0x10;
}
