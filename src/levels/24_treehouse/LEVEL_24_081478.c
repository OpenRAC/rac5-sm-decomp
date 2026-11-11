/* LEVEL_24:0x081478 -- placement copy of LEVEL_01_0881D8.c: returns a byte from the record, inverted when a flag is set. */
extern int func_027930(int);

unsigned int func_081478(char *record)
{
    int state = func_027930(4);
    if (state != 0) {
        return 0xffu - (unsigned char)record[8];
    }
    return (unsigned char)record[8];
}
