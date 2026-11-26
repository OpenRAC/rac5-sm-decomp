/* LEVEL_07:0x027980 -- placement copy of LEVEL_01_027620.c: sets bit 0 of a per-index flag byte when the index is in range and the id list accepts it. */
extern unsigned char *D_002082AC;
extern int func_027900(unsigned int id);

int func_027980(unsigned int index)
{
    unsigned char *p;

    if (index >= 100)
        return 0;
    if (func_027900(index)) {
        p = D_002082AC + 0x1b60;
        p[index] |= 1;
        return 1;
    }
    return 0;
}
