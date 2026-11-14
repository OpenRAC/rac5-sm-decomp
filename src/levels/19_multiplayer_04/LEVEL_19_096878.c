/* LEVEL_19:0x096878 -- placement copy of LEVEL_01_0A8928.c: scales the count returned by func_096600 for the record by a float and adds the record's first word; returns the truncated sum. */
extern int func_096600(int *record);

int func_096878(float scale, int *p)
{
    int n = func_096600(p);

    return (int)((float)n * scale + (float)*p);
}
