/* LEVEL_15:0x0891F0 -- placement copy of LEVEL_01_0A8928.c: scales the count returned by func_088FA8 for the record by a float and adds the record's first word; returns the truncated sum. */
extern int func_088FA8(int *record);

int func_0891F0(float scale, int *p)
{
    int n = func_088FA8(p);

    return (int)((float)n * scale + (float)*p);
}
