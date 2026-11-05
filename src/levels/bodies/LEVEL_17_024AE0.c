extern unsigned char *D_001950B4;

unsigned char func_024AE0(unsigned int index)
{
    unsigned char *record;
    if (index >= 100)
        return 0;
    record = D_001950B4 + index;
    return record[0x1b60] & 1u;
}
