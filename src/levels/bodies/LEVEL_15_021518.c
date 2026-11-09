/* LEVEL_15:0x021518 -- placement copy of LEVEL_01_027528.c: tests one bit of a halfword in a table at a fixed offset. */
extern char *D_00148C2C;

unsigned int func_021518(int index, unsigned int bit)
{
    unsigned int mask;
    char *base;

    base = D_00148C2C;
    mask = 1u << bit;
    return *(unsigned short *)(base + 0x8c0 + index) & mask;
}
