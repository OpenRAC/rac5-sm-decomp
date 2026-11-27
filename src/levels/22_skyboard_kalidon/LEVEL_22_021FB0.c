/* LEVEL_22:0x021FB0 -- placement copy of LEVEL_01_027620.c: sets bit 0 of a per-index flag byte when the index is in range and the id list accepts it. */
extern unsigned char *D_0015332C;
extern int func_021F30(unsigned int id);

int func_021FB0(unsigned int index)
{
    unsigned char *p;

    if (index >= 100)
        return 0;
    if (func_021F30(index)) {
        p = D_0015332C + 0x1b60;
        p[index] |= 1;
        return 1;
    }
    return 0;
}
