extern unsigned char *D_00104194;

unsigned int func_021AC8(int index, unsigned int bit)
{
    unsigned char *record = D_00104194 + index;
    unsigned int mask = 1u << bit;
    return record[0x8c0] & mask;
}
