/* LEVEL_06:0x025AD0 -- placement copy of LEVEL_01_027620.c: sets bit 0 of a per-index flag byte when the index is in range and the id list accepts it. */
extern unsigned char *D_001E2EAC;
extern int func_025A50(unsigned int id);

int func_025AD0(unsigned int index)
{
    unsigned char *p;

    if (index >= 100)
        return 0;
    if (func_025A50(index)) {
        p = D_001E2EAC + 0x1b60;
        p[index] |= 1;
        return 1;
    }
    return 0;
}
