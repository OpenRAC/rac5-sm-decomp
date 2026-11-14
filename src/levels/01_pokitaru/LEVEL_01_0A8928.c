/* LEVEL_01:0x0A8928 -- scales the count returned by func_0A86E0 for the record by a float and adds the record's first word; returns the truncated sum. */
extern int func_0A86E0(int *record);

int func_0A8928(float scale, int *p)
{
    int n = func_0A86E0(p);

    return (int)((float)n * scale + (float)*p);
}
