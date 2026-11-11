/* LEVEL_20:0x01F100 -- placement copy of LEVEL_01_024A38.c: returns a table entry when the index is nonzero and below 43. */
extern void *D_001016A8[];

void *func_01F100(unsigned int index)
{
    if (index == 0)
        return 0;
    if (index < 43)
        return D_001016A8[index];
    return 0;
}
