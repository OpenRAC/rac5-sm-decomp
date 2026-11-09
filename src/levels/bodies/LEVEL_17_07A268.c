/* LEVEL_17:0x07A268 -- placement copy of LEVEL_01_088218.c: returns the byte at +10, or its complement from 0xFF when the flag is set. */
extern int func_0277B8(int);

unsigned int func_07A268(char *record)
{
    int state = func_0277B8(4);
    if (state != 0) {
        unsigned int value = (unsigned char)record[10];
        return 0xffu - value;
    }
    return (unsigned char)record[10];
}
