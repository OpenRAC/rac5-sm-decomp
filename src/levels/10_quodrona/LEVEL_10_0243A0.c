/* LEVEL_10:0x0243A0 -- placement copy of LEVEL_01_024A38.c: returns a table entry when the index is nonzero and below 43. */
extern void *D_001FC528[];

void *func_0243A0(unsigned int index)
{
    if (index == 0)
        return 0;
    if (index < 43)
        return D_001FC528[index];
    return 0;
}
