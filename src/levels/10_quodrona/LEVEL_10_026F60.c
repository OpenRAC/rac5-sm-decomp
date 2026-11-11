extern unsigned char *D_001FCFAC;

unsigned char func_026F60(unsigned int index)
{
    unsigned char *record;
    if (index >= 100)
        return 0;
    record = D_001FCFAC + index;
    return record[0x1b60] & 1u;
}
