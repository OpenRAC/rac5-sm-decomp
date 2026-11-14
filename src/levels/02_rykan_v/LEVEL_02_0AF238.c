/* LEVEL_02:0x0AF238 -- placement copy of LEVEL_01_0A8928.c: scales the count returned by func_0AEFF0 for the record by a float and adds the record's first word; returns the truncated sum. */
extern int func_0AEFF0(int *record);

int func_0AF238(float scale, int *p)
{
    int n = func_0AEFF0(p);

    return (int)((float)n * scale + (float)*p);
}
