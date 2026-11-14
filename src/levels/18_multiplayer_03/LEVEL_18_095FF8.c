/* LEVEL_18:0x095FF8 -- placement copy of LEVEL_01_0A8928.c: scales the count returned by func_095D80 for the record by a float and adds the record's first word; returns the truncated sum. */
extern int func_095D80(int *record);

int func_095FF8(float scale, int *p)
{
    int n = func_095D80(p);

    return (int)((float)n * scale + (float)*p);
}
