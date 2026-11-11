/* LEVEL_17:0x024948 -- placement copy of LEVEL_01_027528.c: tests one bit of a halfword in a table at a fixed offset. */
extern char *D_001950B4;

unsigned int func_024948(int index, unsigned int bit)
{
    unsigned int mask;
    char *base;

    base = D_001950B4;
    mask = 1u << bit;
    return *(unsigned short *)(base + 0x8c0 + index) & mask;
}
