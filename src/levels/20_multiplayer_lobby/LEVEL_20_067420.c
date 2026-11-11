/* LEVEL_20:0x067420 -- placement copy of LEVEL_01_0881D8.c: returns a byte from the record, inverted when a flag is set. */
extern int func_024940(int);

unsigned int func_067420(char *record)
{
    int state = func_024940(4);
    if (state != 0) {
        return 0xffu - (unsigned char)record[8];
    }
    return (unsigned char)record[8];
}
