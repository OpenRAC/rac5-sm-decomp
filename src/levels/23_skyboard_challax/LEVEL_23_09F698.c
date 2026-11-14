/* LEVEL_23:0x09F698 -- placement copy of LEVEL_01_0A8928.c: scales the count returned by func_09F450 for the record by a float and adds the record's first word; returns the truncated sum. */
extern int func_09F450(int *record);

int func_09F698(float scale, int *p)
{
    int n = func_09F450(p);

    return (int)((float)n * scale + (float)*p);
}
