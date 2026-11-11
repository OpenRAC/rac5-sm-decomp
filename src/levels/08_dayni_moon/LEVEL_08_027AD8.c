extern unsigned char *D_0023CB2C;

unsigned int func_027AD8(int index, unsigned int bit)
{
    unsigned char *record = D_0023CB2C + index;
    unsigned int mask = 1u << bit;
    return record[0x8c0] & mask;
}
