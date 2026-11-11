/* LEVEL_01:0x027528 -- tests one bit of a halfword in a table at a fixed offset. */
extern char *D_001F3FAC;

unsigned int func_027528(int index, unsigned int bit)
{
    unsigned int mask;
    char *base;

    base = D_001F3FAC;
    mask = 1u << bit;
    return *(unsigned short *)(base + 0x8c0 + index) & mask;
}
