/* LEVEL_23:0x022AD8 -- placement copy of LEVEL_01_024A38.c: returns a table entry when the index is nonzero and below 43. */
extern void *D_001C6928[];

void *func_022AD8(unsigned int index)
{
    if (index == 0)
        return 0;
    if (index < 43)
        return D_001C6928[index];
    return 0;
}
