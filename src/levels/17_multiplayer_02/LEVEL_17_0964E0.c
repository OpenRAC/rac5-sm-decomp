/* LEVEL_17:0x0964E0 -- placement copy of LEVEL_01_0A8928.c: scales the count returned by func_096268 for the record by a float and adds the record's first word; returns the truncated sum. */
extern int func_096268(int *record);

int func_0964E0(float scale, int *p)
{
    int n = func_096268(p);

    return (int)((float)n * scale + (float)*p);
}
