/* LEVEL_18:0x0246B0 -- placement copy of LEVEL_01_027620.c: sets bit 0 of a per-index flag byte when the index is in range and the id list accepts it. */
extern unsigned char *D_001A2F34;
extern int func_024630(unsigned int id);

int func_0246B0(unsigned int index)
{
    unsigned char *p;

    if (index >= 100)
        return 0;
    if (func_024630(index)) {
        p = D_001A2F34 + 0x1b60;
        p[index] |= 1;
        return 1;
    }
    return 0;
}
