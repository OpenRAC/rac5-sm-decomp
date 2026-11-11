/* LEVEL_23:0x0252A0 -- placement copy of LEVEL_16_024FE8.c: stores one masked bit of a halfword field in a table at a computed offset. */
extern char *D_001C73AC;

void func_0252A0(int offset, unsigned short value, unsigned char index)
{
    unsigned short *slot = (unsigned short *)(D_001C73AC + (offset + 0x8c0));
    unsigned int bit = 1 << index;
    unsigned short keep = ~bit;
    *slot = (*slot & keep) | ((value << index) & bit);
}
