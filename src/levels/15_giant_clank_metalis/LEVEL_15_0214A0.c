extern unsigned char *D_00148C2C;

unsigned int func_0214A0(int index, unsigned int bit)
{
    unsigned char *record = D_00148C2C + index;
    unsigned int mask = 1u << bit;
    return record[0x8c0] & mask;
}
