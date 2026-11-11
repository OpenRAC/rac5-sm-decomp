/* LEVEL_05:0x0239D0 -- placement copy of LEVEL_01_024A38.c: returns a table entry when the index is nonzero and below 43. */
extern void *D_001E28A8[];

void *func_0239D0(unsigned int index)
{
    if (index == 0)
        return 0;
    if (index < 43)
        return D_001E28A8[index];
    return 0;
}
