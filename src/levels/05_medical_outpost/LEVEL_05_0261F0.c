extern unsigned char *D_001E332C;

unsigned int func_0261F0(int index, unsigned int bit)
{
    unsigned char *record = D_001E332C + index;
    unsigned int mask = 1u << bit;
    return record[0x8c0] & mask;
}
