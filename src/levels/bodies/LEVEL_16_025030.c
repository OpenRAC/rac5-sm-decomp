/* LEVEL_16:0x025030 -- sets and clears bits in one byte of a table at a fixed offset. */
extern unsigned char *D_001A1AB8;

void func_025030(int index, unsigned char set, unsigned char clear)
{
    unsigned char *cell;
    unsigned int mask;

    mask = (unsigned char)clear;
    cell = D_001A1AB8 + 0xc00;
    cell = cell + index;
    *cell = set | (*cell & ~mask);
}
