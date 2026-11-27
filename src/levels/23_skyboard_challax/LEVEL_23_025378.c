/* LEVEL_23:0x025378 -- placement copy of LEVEL_01_027620.c: sets bit 0 of a per-index flag byte when the index is in range and the id list accepts it. */
extern unsigned char *D_001C73AC;
extern int func_0252F8(unsigned int id);

int func_025378(unsigned int index)
{
    unsigned char *p;

    if (index >= 100)
        return 0;
    if (func_0252F8(index)) {
        p = D_001C73AC + 0x1b60;
        p[index] |= 1;
        return 1;
    }
    return 0;
}
