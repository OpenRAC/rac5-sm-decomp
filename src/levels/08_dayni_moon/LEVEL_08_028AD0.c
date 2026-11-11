/* LEVEL_08:0x028AD0 -- placement copy of LEVEL_01_0284A8.c: picks one bit of a helper word selected from two indices. */
extern unsigned int func_027AD8(unsigned int, unsigned int);

unsigned int func_028AD0(unsigned int first, unsigned int second)
{
    unsigned int idx = first - 1;
    unsigned int bit = second + (idx & 1) * 4 - 1;
    unsigned int value = func_027AD8((idx >> 1) + 0x84, bit & 0xff);
    return (value >> bit) & 1;
}
