/* LEVEL_04:0x08B470 -- placement copy of LEVEL_01_0881D8.c: returns a byte from the record, inverted when a flag is set. */
extern int func_029E98(int);

unsigned int func_08B470(char *record)
{
    int state = func_029E98(4);
    if (state != 0) {
        return 0xffu - (unsigned char)record[8];
    }
    return (unsigned char)record[8];
}
