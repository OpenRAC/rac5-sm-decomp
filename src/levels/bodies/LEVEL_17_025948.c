/* LEVEL_17:0x025948 -- placement copy of LEVEL_01_0284A8.c: picks one bit of a helper word selected from two indices. */
extern unsigned int func_0248D0(unsigned int, unsigned int);

unsigned int func_025948(unsigned int first, unsigned int second)
{
    unsigned int idx = first - 1;
    unsigned int bit = second + (idx & 1) * 4 - 1;
    unsigned int value = func_0248D0((idx >> 1) + 0x84, bit & 0xff);
    return (value >> bit) & 1;
}
