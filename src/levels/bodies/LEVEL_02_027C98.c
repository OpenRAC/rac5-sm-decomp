extern unsigned char *D_00208C2C;

unsigned int func_027C98(int index, unsigned int bit)
{
    unsigned char *record = D_00208C2C + index;
    unsigned int mask = 1u << bit;
    return record[0x8c0] & mask;
}
