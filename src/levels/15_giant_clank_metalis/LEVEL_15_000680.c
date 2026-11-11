/* LEVEL_15:0x000680 -- placement copy of LEVEL_01_0008D0.c. */
extern char D_0015FEE8[];

char *func_000680(unsigned int index)
{
    if (index >= 14)
        return 0;
    return D_0015FEE8 + index * 0xc;
}
