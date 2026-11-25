/* LEVEL_20:0x079EC8 -- placement copy of LEVEL_01_0A0508.c: placement copy of LEVEL_01_0A0508.c: returns the address 0x10 bytes into an object, or null for a null object. */
char *func_079EC8(char *p)
{
    if (p == 0) {
        return 0;
    }
    return p + 0x10;
}
