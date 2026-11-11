extern unsigned char *D_0015332C;

unsigned int func_021E40(int index, unsigned int bit)
{
    unsigned char *record = D_0015332C + index;
    unsigned int mask = 1u << bit;
    return record[0x8c0] & mask;
}
