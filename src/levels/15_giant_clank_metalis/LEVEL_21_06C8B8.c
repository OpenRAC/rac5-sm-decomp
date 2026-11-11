/* LEVEL_21:0x06C8B8 -- placement copy of LEVEL_01_0881D8.c: returns a byte from the record, inverted when a flag is set. */
extern int func_023BC8(int);

unsigned int func_06C8B8(char *record)
{
    int state = func_023BC8(4);
    if (state != 0) {
        return 0xffu - (unsigned char)record[8];
    }
    return (unsigned char)record[8];
}
