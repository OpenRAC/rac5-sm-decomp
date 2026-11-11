/* LEVEL_09:0x084B90 -- placement copy of LEVEL_01_0881D8.c: returns a byte from the record, inverted when a flag is set. */
extern int func_029258(int);

unsigned int func_084B90(char *record)
{
    int state = func_029258(4);
    if (state != 0) {
        return 0xffu - (unsigned char)record[8];
    }
    return (unsigned char)record[8];
}
