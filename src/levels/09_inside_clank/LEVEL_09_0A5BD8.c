/* LEVEL_09:0x0A5BD8 -- placement copy of LEVEL_01_0A8928.c: scales the count returned by func_0A5990 for the record by a float and adds the record's first word; returns the truncated sum. */
extern int func_0A5990(int *record);

int func_0A5BD8(float scale, int *p)
{
    int n = func_0A5990(p);

    return (int)((float)n * scale + (float)*p);
}
