/* LEVEL_08:0x0902D0 -- placement copy of LEVEL_01_0881D8.c: returns a byte from the record, inverted when a flag is set. */
extern int func_02A968(int);

unsigned int func_0902D0(char *record)
{
    int state = func_02A968(4);
    if (state != 0) {
        return 0xffu - (unsigned char)record[8];
    }
    return (unsigned char)record[8];
}
