/* LEVEL_03:0x088030 -- placement copy of LEVEL_01_0881D8.c: returns a byte from the record, inverted when a flag is set. */
extern int func_02A1E8(int);

unsigned int func_088030(char *record)
{
    int state = func_02A1E8(4);
    if (state != 0) {
        return 0xffu - (unsigned char)record[8];
    }
    return (unsigned char)record[8];
}
