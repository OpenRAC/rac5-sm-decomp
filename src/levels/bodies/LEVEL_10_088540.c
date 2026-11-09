/* LEVEL_10:0x088540 -- placement copy of LEVEL_01_0881D8.c: returns a byte from the record, inverted when a flag is set. */
extern int func_02A1C8(int);

unsigned int func_088540(char *record)
{
    int state = func_02A1C8(4);
    if (state != 0) {
        return 0xffu - (unsigned char)record[8];
    }
    return (unsigned char)record[8];
}
