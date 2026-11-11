/* LEVEL_01:0x0881D8 -- returns a byte from the record, inverted when a flag is set. */
extern int func_02A3F0(int);

unsigned int func_0881D8(char *record)
{
    int state = func_02A3F0(4);
    if (state != 0) {
        return 0xffu - (unsigned char)record[8];
    }
    return (unsigned char)record[8];
}
