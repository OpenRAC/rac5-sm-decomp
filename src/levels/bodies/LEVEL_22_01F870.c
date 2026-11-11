/* LEVEL_22:0x01F870 -- placement copy of LEVEL_01_024A38.c: returns a table entry when the index is nonzero and below 43. */
extern void *D_001528A8[];

void *func_01F870(unsigned int index)
{
    if (index == 0)
        return 0;
    if (index < 43)
        return D_001528A8[index];
    return 0;
}
