/* LEVEL_07:0x0AA928 -- placement copy of LEVEL_01_0A8928.c: scales the count returned by func_0AA6E0 for the record by a float and adds the record's first word; returns the truncated sum. */
extern int func_0AA6E0(int *record);

int func_0AA928(float scale, int *p)
{
    int n = func_0AA6E0(p);

    return (int)((float)n * scale + (float)*p);
}
