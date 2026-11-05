extern unsigned char *D_0020C62C;

unsigned int func_027390(int index, unsigned int bit)
{
    unsigned char *record = D_0020C62C + index;
    unsigned int mask = 1u << bit;
    return record[0x8c0] & mask;
}
