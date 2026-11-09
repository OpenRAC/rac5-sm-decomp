/* LEVEL_05:0x085B30 -- placement copy of LEVEL_01_0881D8.c: returns a byte from the record, inverted when a flag is set. */
extern int func_029068(int);

unsigned int func_085B30(char *record)
{
    int state = func_029068(4);
    if (state != 0) {
        return 0xffu - (unsigned char)record[8];
    }
    return (unsigned char)record[8];
}
