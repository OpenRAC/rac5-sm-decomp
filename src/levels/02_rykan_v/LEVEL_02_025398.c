/* LEVEL_02:0x025398 -- placement copy of LEVEL_01_024A38.c: returns a table entry when the index is nonzero and below 43. */
extern void *D_002081A8[];

void *func_025398(unsigned int index)
{
    if (index == 0)
        return 0;
    if (index < 43)
        return D_002081A8[index];
    return 0;
}
