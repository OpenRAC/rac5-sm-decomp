/* LEVEL_17:0x0249B0 -- placement copy of LEVEL_16_025030.c: sets and clears bits in one byte of a table at a fixed offset. */
extern unsigned char *D_001950B8;

void func_0249B0(int index, unsigned char set, unsigned char clear)
{
    unsigned char *cell;
    unsigned int mask;

    mask = (unsigned char)clear;
    cell = D_001950B8 + 0xc00;
    cell = cell + index;
    *cell = set | (*cell & ~mask);
}
