extern unsigned char *D_001C4C2C;

unsigned int func_024DE0(int index, unsigned int bit)
{
    unsigned char *record = D_001C4C2C + index;
    unsigned int mask = 1u << bit;
    return record[0x8c0] & mask;
}
