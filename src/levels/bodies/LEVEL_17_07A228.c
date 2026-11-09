/* LEVEL_17:0x07A228 -- placement copy of LEVEL_01_0881D8.c: returns a byte from the record, inverted when a flag is set. */
extern int func_0277B8(int);

unsigned int func_07A228(char *record)
{
    int state = func_0277B8(4);
    if (state != 0) {
        return 0xffu - (unsigned char)record[8];
    }
    return (unsigned char)record[8];
}
