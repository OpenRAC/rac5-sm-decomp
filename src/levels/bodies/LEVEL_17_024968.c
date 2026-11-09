/* LEVEL_17:0x024968 -- placement copy of LEVEL_16_024FE8.c: stores one masked bit of a halfword field in a table at a computed offset. */
extern char *D_001950B4;

void func_024968(int offset, unsigned short value, unsigned char index)
{
    unsigned short *slot = (unsigned short *)(D_001950B4 + (offset + 0x8c0));
    unsigned int bit = 1 << index;
    unsigned short keep = ~bit;
    *slot = (*slot & keep) | ((value << index) & bit);
}
