extern char D_0016BEA0[];
extern int sscanf(const char *, const char *, ...);

int func_0DCDA8(char *str, float *out, float lo, float hi)
{
    if (sscanf(str, D_0016BEA0, out) != 1)
        return 0;
    if (*out < lo)
        *out = lo;
    if (hi < *out)
        *out = hi;
    return 1;
}
