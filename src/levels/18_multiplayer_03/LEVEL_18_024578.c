/* LEVEL_18:0x024578 -- placement copy of LEVEL_01_027528.c: tests one bit of a halfword in a table at a fixed offset. */
extern char *D_001A2F34;

unsigned int func_024578(int index, unsigned int bit)
{
    unsigned int mask;
    char *base;

    base = D_001A2F34;
    mask = 1u << bit;
    return *(unsigned short *)(base + 0x8c0 + index) & mask;
}
