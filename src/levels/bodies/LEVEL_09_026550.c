/* LEVEL_09:0x026550 -- placement copy of LEVEL_16_024FE8.c: stores one masked bit of a halfword field in a table at a computed offset. */
extern char *D_001DDDAC;

void func_026550(int offset, unsigned short value, unsigned char index)
{
    unsigned short *slot = (unsigned short *)(D_001DDDAC + (offset + 0x8c0));
    unsigned int bit = 1 << index;
    unsigned short keep = ~bit;
    *slot = (*slot & keep) | ((value << index) & bit);
}
