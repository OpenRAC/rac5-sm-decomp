/* LEVEL_18:0x021A48 -- placement copy of LEVEL_01_024A38.c: returns a table entry when the index is nonzero and below 43. */
extern void *D_001A0448[];

void *func_021A48(unsigned int index)
{
    if (index == 0)
        return 0;
    if (index < 43)
        return D_001A0448[index];
    return 0;
}
