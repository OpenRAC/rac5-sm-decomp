/* LEVEL_05:0x0A6EE8 -- placement copy of LEVEL_01_0A8928.c: scales the count returned by func_0A6CA0 for the record by a float and adds the record's first word; returns the truncated sum. */
extern int func_0A6CA0(int *record);

int func_0A6EE8(float scale, int *p)
{
    int n = func_0A6CA0(p);

    return (int)((float)n * scale + (float)*p);
}
