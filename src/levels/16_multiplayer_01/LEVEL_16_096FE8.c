/* LEVEL_16:0x096FE8 -- placement copy of LEVEL_01_0A8928.c: scales the count returned by func_096D70 for the record by a float and adds the record's first word; returns the truncated sum. */
extern int func_096D70(int *record);

int func_096FE8(float scale, int *p)
{
    int n = func_096D70(p);

    return (int)((float)n * scale + (float)*p);
}
