/* LEVEL_08:0x0B3260 -- placement copy of LEVEL_01_0A8928.c: scales the count returned by func_0B2FD8 for the record by a float and adds the record's first word; returns the truncated sum. */
extern int func_0B2FD8(int *record);

int func_0B3260(float scale, int *p)
{
    int n = func_0B2FD8(p);

    return (int)((float)n * scale + (float)*p);
}
