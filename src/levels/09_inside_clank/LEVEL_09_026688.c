extern unsigned char *D_001DDDAC;

unsigned char func_026688(unsigned int index)
{
    unsigned char *record;
    if (index >= 100)
        return 0;
    record = D_001DDDAC + index;
    return record[0x1b60] & 1u;
}
