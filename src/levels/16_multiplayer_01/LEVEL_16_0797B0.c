/* LEVEL_16:0x0797B0 -- placement copy of LEVEL_01_0881D8.c: returns a byte from the record, inverted when a flag is set. */
extern int func_027E38(int);

unsigned int func_0797B0(char *record)
{
    int state = func_027E38(4);
    if (state != 0) {
        return 0xffu - (unsigned char)record[8];
    }
    return (unsigned char)record[8];
}
