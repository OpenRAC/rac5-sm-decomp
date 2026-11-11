/* LEVEL_01:0x088218 -- returns the byte at +10, or its complement from 0xFF when the flag is set. */
extern int func_02A3F0(int);

unsigned int func_088218(char *record)
{
    int state = func_02A3F0(4);
    if (state != 0) {
        unsigned int value = (unsigned char)record[10];
        return 0xffu - value;
    }
    return (unsigned char)record[10];
}
