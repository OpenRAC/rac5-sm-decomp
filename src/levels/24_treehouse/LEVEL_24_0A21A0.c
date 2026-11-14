/* LEVEL_24:0x0A21A0 -- placement copy of LEVEL_01_0A8928.c: scales the count returned by func_0A1F58 for the record by a float and adds the record's first word; returns the truncated sum. */
extern int func_0A1F58(int *record);

int func_0A21A0(float scale, int *p)
{
    int n = func_0A1F58(p);

    return (int)((float)n * scale + (float)*p);
}
