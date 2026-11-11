/* LEVEL_07:0x025000 -- placement copy of LEVEL_01_024A38.c: returns a table entry when the index is nonzero and below 43. */
extern void *D_00207828[];

void *func_025000(unsigned int index)
{
    if (index == 0)
        return 0;
    if (index < 43)
        return D_00207828[index];
    return 0;
}
