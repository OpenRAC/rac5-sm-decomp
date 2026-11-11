/* LEVEL_04:0x0271D8 -- placement copy of LEVEL_16_024FE8.c: stores one masked bit of a halfword field in a table at a computed offset. */
extern char *D_0020D12C;

void func_0271D8(int offset, unsigned short value, unsigned char index)
{
    unsigned short *slot = (unsigned short *)(D_0020D12C + (offset + 0x8c0));
    unsigned int bit = 1 << index;
    unsigned short keep = ~bit;
    *slot = (*slot & keep) | ((value << index) & bit);
}
