extern unsigned char *D_001E2EAC;

unsigned int func_025960(int index, unsigned int bit)
{
    unsigned char *record = D_001E2EAC + index;
    unsigned int mask = 1u << bit;
    return record[0x8c0] & mask;
}
