/* LEVEL_02:0x027E08 -- placement copy of LEVEL_01_027620.c: sets bit 0 of a per-index flag byte when the index is in range and the id list accepts it. */
extern unsigned char *D_00208C2C;
extern int func_027D88(unsigned int id);

int func_027E08(unsigned int index)
{
    unsigned char *p;

    if (index >= 100)
        return 0;
    if (func_027D88(index)) {
        p = D_00208C2C + 0x1b60;
        p[index] |= 1;
        return 1;
    }
    return 0;
}
