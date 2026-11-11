/* LEVEL_19:0x022040 -- placement copy of LEVEL_01_024A38.c: returns a table entry when the index is nonzero and below 43. */
extern void *D_001A0148[];

void *func_022040(unsigned int index)
{
    if (index == 0)
        return 0;
    if (index < 43)
        return D_001A0148[index];
    return 0;
}
