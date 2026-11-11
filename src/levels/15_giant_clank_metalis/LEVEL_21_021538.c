/* LEVEL_21:0x021538 -- placement copy of LEVEL_16_024FE8.c: stores one masked bit of a halfword field in a table at a computed offset. */
extern char *D_00148C2C;

void func_021538(int offset, unsigned short value, unsigned char index)
{
    unsigned short *slot = (unsigned short *)(D_00148C2C + (offset + 0x8c0));
    unsigned int bit = 1 << index;
    unsigned short keep = ~bit;
    *slot = (*slot & keep) | ((value << index) & bit);
}
