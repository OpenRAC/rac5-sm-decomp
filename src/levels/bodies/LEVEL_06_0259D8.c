/* LEVEL_06:0x0259D8 -- placement copy of LEVEL_01_027528.c: tests one bit of a halfword in a table at a fixed offset. */
extern char *D_001E2EAC;

unsigned int func_0259D8(int index, unsigned int bit)
{
    unsigned int mask;
    char *base;

    base = D_001E2EAC;
    mask = 1u << bit;
    return *(unsigned short *)(base + 0x8c0 + index) & mask;
}
