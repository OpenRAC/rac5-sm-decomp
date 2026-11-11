/* LEVEL_22:0x021ED8 -- placement copy of LEVEL_16_024FE8.c: stores one masked bit of a halfword field in a table at a computed offset. */
extern char *D_0015332C;

void func_021ED8(int offset, unsigned short value, unsigned char index)
{
    unsigned short *slot = (unsigned short *)(D_0015332C + (offset + 0x8c0));
    unsigned int bit = 1 << index;
    unsigned short keep = ~bit;
    *slot = (*slot & keep) | ((value << index) & bit);
}
