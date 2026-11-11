extern unsigned char *D_0020D12C;

unsigned int func_027140(int index, unsigned int bit)
{
    unsigned char *record = D_0020D12C + index;
    unsigned int mask = 1u << bit;
    return record[0x8c0] & mask;
}
