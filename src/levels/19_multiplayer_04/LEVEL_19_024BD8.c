/* LEVEL_19:0x024BD8 -- placement copy of LEVEL_16_025030.c: sets and clears bits in one byte of a table at a fixed offset. */
extern unsigned char *D_001A2C38;

void func_024BD8(int index, unsigned char set, unsigned char clear)
{
    unsigned char *cell;
    unsigned int mask;

    mask = (unsigned char)clear;
    cell = D_001A2C38 + 0xc00;
    cell = cell + index;
    *cell = set | (*cell & ~mask);
}
