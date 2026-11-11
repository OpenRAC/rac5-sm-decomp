extern unsigned char *D_001FCFAC;

unsigned int func_026D90(int index, unsigned int bit)
{
    unsigned char *record = D_001FCFAC + index;
    unsigned int mask = 1u << bit;
    return record[0x8c0] & mask;
}
