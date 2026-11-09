/* LEVEL_23:0x07E098 -- placement copy of LEVEL_01_0881D8.c: returns a byte from the record, inverted when a flag is set. */
extern int func_027F60(int);

unsigned int func_07E098(char *record)
{
    int state = func_027F60(4);
    if (state != 0) {
        return 0xffu - (unsigned char)record[8];
    }
    return (unsigned char)record[8];
}
