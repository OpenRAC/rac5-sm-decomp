/* LEVEL_20:0x021BA8 -- placement copy of LEVEL_16_025030.c: sets and clears bits in one byte of a table at a fixed offset. */
extern unsigned char *D_00104198;

void func_021BA8(int index, unsigned char set, unsigned char clear)
{
    unsigned char *cell;
    unsigned int mask;

    mask = (unsigned char)clear;
    cell = D_00104198 + 0xc00;
    cell = cell + index;
    *cell = set | (*cell & ~mask);
}
