extern unsigned char *D_001C73AC;

unsigned int func_025208(int index, unsigned int bit)
{
    unsigned char *record = D_001C73AC + index;
    unsigned int mask = 1u << bit;
    return record[0x8c0] & mask;
}
