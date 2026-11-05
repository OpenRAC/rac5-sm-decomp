extern unsigned char *D_001A2C34;

unsigned int func_024AF8(int index, unsigned int bit)
{
    unsigned char *record = D_001A2C34 + index;
    unsigned int mask = 1u << bit;
    return record[0x8c0] & mask;
}
