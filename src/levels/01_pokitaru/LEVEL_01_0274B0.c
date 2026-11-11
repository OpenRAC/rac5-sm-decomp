extern unsigned char *D_001F3FAC;

unsigned int func_0274B0(int index, unsigned int bit)
{
    unsigned char *record = D_001F3FAC + index;
    unsigned int mask = 1u << bit;
    return record[0x8c0] & mask;
}
