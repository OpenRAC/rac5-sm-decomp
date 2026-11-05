extern unsigned char *D_001DDDAC;

unsigned int func_0264B8(int index, unsigned int bit)
{
    unsigned char *record = D_001DDDAC + index;
    unsigned int mask = 1u << bit;
    return record[0x8c0] & mask;
}
