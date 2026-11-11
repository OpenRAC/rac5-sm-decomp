/* LEVEL_24:0x022810 -- placement copy of LEVEL_01_024A38.c: returns a table entry when the index is nonzero and below 43. */
extern void *D_001C41A8[];

void *func_022810(unsigned int index)
{
    if (index == 0)
        return 0;
    if (index < 43)
        return D_001C41A8[index];
    return 0;
}
