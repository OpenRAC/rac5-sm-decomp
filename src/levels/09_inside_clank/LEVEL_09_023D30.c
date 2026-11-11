/* LEVEL_09:0x023D30 -- placement copy of LEVEL_01_024A38.c: returns a table entry when the index is nonzero and below 43. */
extern void *D_001DD328[];

void *func_023D30(unsigned int index)
{
    if (index == 0)
        return 0;
    if (index < 43)
        return D_001DD328[index];
    return 0;
}
