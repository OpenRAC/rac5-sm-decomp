/* LEVEL_01:0x024A38 -- returns a table entry when the index is nonzero and below 43. */
extern void *D_001F3528[];

void *func_024A38(unsigned int index)
{
    if (index == 0)
        return 0;
    if (index < 43)
        return D_001F3528[index];
    return 0;
}
