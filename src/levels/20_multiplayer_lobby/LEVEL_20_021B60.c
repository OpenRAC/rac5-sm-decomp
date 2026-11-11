/* LEVEL_20:0x021B60 -- placement copy of LEVEL_16_024FE8.c: stores one masked bit of a halfword field in a table at a computed offset. */
extern char *D_00104194;

void func_021B60(int offset, unsigned short value, unsigned char index)
{
    unsigned short *slot = (unsigned short *)(D_00104194 + (offset + 0x8c0));
    unsigned int bit = 1 << index;
    unsigned short keep = ~bit;
    *slot = (*slot & keep) | ((value << index) & bit);
}
