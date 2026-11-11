/* LEVEL_19:0x024B90 -- placement copy of LEVEL_16_024FE8.c: stores one masked bit of a halfword field in a table at a computed offset. */
extern char *D_001A2C34;

void func_024B90(int offset, unsigned short value, unsigned char index)
{
    unsigned short *slot = (unsigned short *)(D_001A2C34 + (offset + 0x8c0));
    unsigned int bit = 1 << index;
    unsigned short keep = ~bit;
    *slot = (*slot & keep) | ((value << index) & bit);
}
