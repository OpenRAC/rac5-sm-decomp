extern unsigned char *D_001950B4;

unsigned int func_0248D0(int index, unsigned int bit)
{
    unsigned char *record = D_001950B4 + index;
    unsigned int mask = 1u << bit;
    return record[0x8c0] & mask;
}
