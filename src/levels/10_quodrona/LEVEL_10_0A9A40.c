/* LEVEL_10:0x0A9A40 -- placement copy of LEVEL_01_0A8928.c: scales the count returned by func_0A97F8 for the record by a float and adds the record's first word; returns the truncated sum. */
extern int func_0A97F8(int *record);

int func_0A9A40(float scale, int *p)
{
    int n = func_0A97F8(p);

    return (int)((float)n * scale + (float)*p);
}
