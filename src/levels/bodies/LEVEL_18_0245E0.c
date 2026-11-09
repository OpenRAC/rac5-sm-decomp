/* LEVEL_18:0x0245E0 -- placement copy of LEVEL_16_025030.c: sets and clears bits in one byte of a table at a fixed offset. */
extern unsigned char *D_001A2F38;

void func_0245E0(int index, unsigned char set, unsigned char clear)
{
    unsigned char *cell;
    unsigned int mask;

    mask = (unsigned char)clear;
    cell = D_001A2F38 + 0xc00;
    cell = cell + index;
    *cell = set | (*cell & ~mask);
}
