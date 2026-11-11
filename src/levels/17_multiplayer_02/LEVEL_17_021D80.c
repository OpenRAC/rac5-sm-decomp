/* LEVEL_17:0x021D80 -- placement copy of LEVEL_01_024A38.c: returns a table entry when the index is nonzero and below 43. */
extern void *D_001925C8[];

void *func_021D80(unsigned int index)
{
    if (index == 0)
        return 0;
    if (index < 43)
        return D_001925C8[index];
    return 0;
}
