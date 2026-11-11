/* LEVEL_15:0x01EDA0 -- placement copy of LEVEL_01_024A38.c: returns a table entry when the index is nonzero and below 43. */
extern void *D_001481A8[];

void *func_01EDA0(unsigned int index)
{
    if (index == 0)
        return 0;
    if (index < 43)
        return D_001481A8[index];
    return 0;
}
