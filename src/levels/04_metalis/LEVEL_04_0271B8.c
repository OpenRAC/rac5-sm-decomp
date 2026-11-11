/* LEVEL_04:0x0271B8 -- placement copy of LEVEL_01_027528.c: tests one bit of a halfword in a table at a fixed offset. */
extern char *D_0020D12C;

unsigned int func_0271B8(int index, unsigned int bit)
{
    unsigned int mask;
    char *base;

    base = D_0020D12C;
    mask = 1u << bit;
    return *(unsigned short *)(base + 0x8c0 + index) & mask;
}
