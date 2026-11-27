/* LEVEL_05:0x026360 -- placement copy of LEVEL_01_027620.c: sets bit 0 of a per-index flag byte when the index is in range and the id list accepts it. */
extern unsigned char *D_001E332C;
extern int func_0262E0(unsigned int id);

int func_026360(unsigned int index)
{
    unsigned char *p;

    if (index >= 100)
        return 0;
    if (func_0262E0(index)) {
        p = D_001E332C + 0x1b60;
        p[index] |= 1;
        return 1;
    }
    return 0;
}
