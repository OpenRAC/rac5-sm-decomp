extern char D_00201320[];
extern int sscanf(const char *, const char *, ...);

int func_111E38(char *str, float *out, float lo, float hi)
{
    if (sscanf(str, D_00201320, out) != 1)
        return 0;
    if (*out < lo)
        *out = lo;
    if (hi < *out)
        *out = hi;
    return 1;
}
