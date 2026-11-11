/* LEVEL_08:0x0252B8 -- placement copy of LEVEL_01_024A38.c: returns a table entry when the index is nonzero and below 43. */
extern void *D_0023C0A8[];

void *func_0252B8(unsigned int index)
{
    if (index == 0)
        return 0;
    if (index < 43)
        return D_0023C0A8[index];
    return 0;
}
