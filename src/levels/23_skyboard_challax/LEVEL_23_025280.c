/* LEVEL_23:0x025280 -- placement copy of LEVEL_01_027528.c: tests one bit of a halfword in a table at a fixed offset. */
extern char *D_001C73AC;

unsigned int func_025280(int index, unsigned int bit)
{
    unsigned int mask;
    char *base;

    base = D_001C73AC;
    mask = 1u << bit;
    return *(unsigned short *)(base + 0x8c0 + index) & mask;
}
