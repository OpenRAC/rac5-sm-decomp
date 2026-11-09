/* LEVEL_06:0x081050 -- placement copy of LEVEL_01_0881D8.c: returns a byte from the record, inverted when a flag is set. */
extern int func_0287D8(int);

unsigned int func_081050(char *record)
{
    int state = func_0287D8(4);
    if (state != 0) {
        return 0xffu - (unsigned char)record[8];
    }
    return (unsigned char)record[8];
}
