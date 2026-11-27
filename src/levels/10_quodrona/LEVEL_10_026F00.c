/* LEVEL_10:0x026F00 -- placement copy of LEVEL_01_027620.c: sets bit 0 of a per-index flag byte when the index is in range and the id list accepts it. */
extern unsigned char *D_001FCFAC;
extern int func_026E80(unsigned int id);

int func_026F00(unsigned int index)
{
    unsigned char *p;

    if (index >= 100)
        return 0;
    if (func_026E80(index)) {
        p = D_001FCFAC + 0x1b60;
        p[index] |= 1;
        return 1;
    }
    return 0;
}
