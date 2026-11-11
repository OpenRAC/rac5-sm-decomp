/* LEVEL_03:0x027428 -- placement copy of LEVEL_16_024FE8.c: stores one masked bit of a halfword field in a table at a computed offset. */
extern char *D_0020C62C;

void func_027428(int offset, unsigned short value, unsigned char index)
{
    unsigned short *slot = (unsigned short *)(D_0020C62C + (offset + 0x8c0));
    unsigned int bit = 1 << index;
    unsigned short keep = ~bit;
    *slot = (*slot & keep) | ((value << index) & bit);
}
