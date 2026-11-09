/* LEVEL_16:0x024FC8 -- placement copy of LEVEL_01_027528.c: tests one bit of a halfword in a table at a fixed offset. */
extern char *D_001A1AB4;

unsigned int func_024FC8(int index, unsigned int bit)
{
    unsigned int mask;
    char *base;

    base = D_001A1AB4;
    mask = 1u << bit;
    return *(unsigned short *)(base + 0x8c0 + index) & mask;
}
