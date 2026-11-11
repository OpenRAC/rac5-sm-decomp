/* LEVEL_16:0x022400 -- placement copy of LEVEL_01_024A38.c: returns a table entry when the index is nonzero and below 43. */
extern void *D_0019EFC8[];

void *func_022400(unsigned int index)
{
    if (index == 0)
        return 0;
    if (index < 43)
        return D_0019EFC8[index];
    return 0;
}
