/* LEVEL_04:0x0ADB78 -- placement copy of LEVEL_01_0A8928.c: scales the count returned by func_0AD8F0 for the record by a float and adds the record's first word; returns the truncated sum. */
extern int func_0AD8F0(int *record);

int func_0ADB78(float scale, int *p)
{
    int n = func_0AD8F0(p);

    return (int)((float)n * scale + (float)*p);
}
