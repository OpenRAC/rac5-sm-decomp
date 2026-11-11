/* LEVEL_16:0x024FE8 -- stores one masked bit of a halfword field in a table at a computed offset. */
extern char *D_001A1AB4;

void func_024FE8(int offset, unsigned short value, unsigned char index)
{
    unsigned short *slot = (unsigned short *)(D_001A1AB4 + (offset + 0x8c0));
    unsigned int bit = 1 << index;
    unsigned short keep = ~bit;
    *slot = (*slot & keep) | ((value << index) & bit);
}
