/* LEVEL_19:0x024CA8 -- placement copy of LEVEL_01_027620.c: sets bit 0 of a per-index flag byte when the index is in range and the id list accepts it. */
extern unsigned char *D_001A2C34;
extern int func_024C28(unsigned int id);

int func_024CA8(unsigned int index)
{
    unsigned char *p;

    if (index >= 100)
        return 0;
    if (func_024C28(index)) {
        p = D_001A2C34 + 0x1b60;
        p[index] |= 1;
        return 1;
    }
    return 0;
}
