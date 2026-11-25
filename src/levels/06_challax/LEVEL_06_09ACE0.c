/* LEVEL_06:0x09ACE0 -- placement copy of LEVEL_01_0A0508.c: placement copy of LEVEL_01_0A0508.c: returns the address 0x10 bytes into an object, or null for a null object. */
char *func_09ACE0(char *p)
{
    if (p == 0) {
        return 0;
    }
    return p + 0x10;
}
