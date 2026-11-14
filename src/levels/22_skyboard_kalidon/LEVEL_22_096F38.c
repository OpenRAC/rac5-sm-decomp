/* LEVEL_22:0x096F38 -- placement copy of LEVEL_01_0A8928.c: scales the count returned by func_096CF0 for the record by a float and adds the record's first word; returns the truncated sum. */
extern int func_096CF0(int *record);

int func_096F38(float scale, int *p)
{
    int n = func_096CF0(p);

    return (int)((float)n * scale + (float)*p);
}
