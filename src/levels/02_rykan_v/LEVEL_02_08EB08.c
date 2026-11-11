/* LEVEL_02:0x08EB08 -- placement copy of LEVEL_01_0881D8.c: returns a byte from the record, inverted when a flag is set. */
extern int func_02ABB8(int);

unsigned int func_08EB08(char *record)
{
    int state = func_02ABB8(4);
    if (state != 0) {
        return 0xffu - (unsigned char)record[8];
    }
    return (unsigned char)record[8];
}
