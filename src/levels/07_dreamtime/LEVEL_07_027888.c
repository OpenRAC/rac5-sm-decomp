/* LEVEL_07:0x027888 -- placement copy of LEVEL_01_027528.c: tests one bit of a halfword in a table at a fixed offset. */
extern char *D_002082AC;

unsigned int func_027888(int index, unsigned int bit)
{
    unsigned int mask;
    char *base;

    base = D_002082AC;
    mask = 1u << bit;
    return *(unsigned short *)(base + 0x8c0 + index) & mask;
}
