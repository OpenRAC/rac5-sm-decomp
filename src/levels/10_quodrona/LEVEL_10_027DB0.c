/* LEVEL_10:0x027DB0 -- placement copy of LEVEL_01_0284A8.c: picks one bit of a helper word selected from two indices. */
extern unsigned int func_026D90(unsigned int, unsigned int);

unsigned int func_027DB0(unsigned int first, unsigned int second)
{
    unsigned int idx = first - 1;
    unsigned int bit = second + (idx & 1) * 4 - 1;
    unsigned int value = func_026D90((idx >> 1) + 0x84, bit & 0xff);
    return (value >> bit) & 1;
}
