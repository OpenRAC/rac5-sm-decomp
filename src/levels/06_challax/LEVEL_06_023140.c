/* LEVEL_06:0x023140 -- placement copy of LEVEL_01_024A38.c: returns a table entry when the index is nonzero and below 43. */
extern void *D_001E2428[];

void *func_023140(unsigned int index)
{
    if (index == 0)
        return 0;
    if (index < 43)
        return D_001E2428[index];
    return 0;
}
