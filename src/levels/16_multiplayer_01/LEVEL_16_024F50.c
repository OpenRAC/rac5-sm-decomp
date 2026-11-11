extern unsigned char *D_001A1AB4;

unsigned int func_024F50(int index, unsigned int bit)
{
    unsigned char *record = D_001A1AB4 + index;
    unsigned int mask = 1u << bit;
    return record[0x8c0] & mask;
}
