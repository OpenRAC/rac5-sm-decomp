extern unsigned char *D_002082AC;

unsigned int func_027810(int index, unsigned int bit)
{
    unsigned char *record = D_002082AC + index;
    unsigned int mask = 1u << bit;
    return record[0x8c0] & mask;
}
