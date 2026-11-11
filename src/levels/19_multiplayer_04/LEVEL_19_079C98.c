/* LEVEL_19:0x079C98 -- placement copy of LEVEL_01_0881D8.c: returns a byte from the record, inverted when a flag is set. */
extern int func_0279E0(int);

unsigned int func_079C98(char *record)
{
    int state = func_0279E0(4);
    if (state != 0) {
        return 0xffu - (unsigned char)record[8];
    }
    return (unsigned char)record[8];
}
