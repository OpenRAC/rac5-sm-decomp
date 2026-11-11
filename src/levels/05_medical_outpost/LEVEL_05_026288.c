/* LEVEL_05:0x026288 -- placement copy of LEVEL_16_024FE8.c: stores one masked bit of a halfword field in a table at a computed offset. */
extern char *D_001E332C;

void func_026288(int offset, unsigned short value, unsigned char index)
{
    unsigned short *slot = (unsigned short *)(D_001E332C + (offset + 0x8c0));
    unsigned int bit = 1 << index;
    unsigned short keep = ~bit;
    *slot = (*slot & keep) | ((value << index) & bit);
}
