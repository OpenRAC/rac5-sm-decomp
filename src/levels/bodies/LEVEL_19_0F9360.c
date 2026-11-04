extern char D_001CD7E0[];
extern int sscanf(const char *, const char *, ...);

int func_0F9360(char *str, float *out, float lo, float hi)
{
    if (sscanf(str, D_001CD7E0, out) != 1)
        return 0;
    if (*out < lo)
        *out = lo;
    if (hi < *out)
        *out = hi;
    return 1;
}
