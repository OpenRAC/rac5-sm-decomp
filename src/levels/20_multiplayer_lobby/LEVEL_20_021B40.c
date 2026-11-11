/* LEVEL_20:0x021B40 -- placement copy of LEVEL_01_027528.c: tests one bit of a halfword in a table at a fixed offset. */
extern char *D_00104194;

unsigned int func_021B40(int index, unsigned int bit)
{
    unsigned int mask;
    char *base;

    base = D_00104194;
    mask = 1u << bit;
    return *(unsigned short *)(base + 0x8c0 + index) & mask;
}
