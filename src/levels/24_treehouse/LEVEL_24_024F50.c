/* LEVEL_24:0x024F50 -- placement copy of LEVEL_01_027620.c: sets bit 0 of a per-index flag byte when the index is in range and the id list accepts it. */
extern unsigned char *D_001C4C2C;
extern int func_024ED0(unsigned int id);

int func_024F50(unsigned int index)
{
    unsigned char *p;

    if (index >= 100)
        return 0;
    if (func_024ED0(index)) {
        p = D_001C4C2C + 0x1b60;
        p[index] |= 1;
        return 1;
    }
    return 0;
}
