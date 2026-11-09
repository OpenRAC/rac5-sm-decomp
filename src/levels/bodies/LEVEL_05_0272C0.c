/* LEVEL_05:0x0272C0 -- placement copy of LEVEL_01_0284A8.c: picks one bit of a helper word selected from two indices. */
extern unsigned int func_0261F0(unsigned int, unsigned int);

unsigned int func_0272C0(unsigned int first, unsigned int second)
{
    unsigned int idx = first - 1;
    unsigned int bit = second + (idx & 1) * 4 - 1;
    unsigned int value = func_0261F0((idx >> 1) + 0x84, bit & 0xff);
    return (value >> bit) & 1;
}
