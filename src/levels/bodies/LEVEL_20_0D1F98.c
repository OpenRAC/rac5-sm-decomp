extern char D_0012D660[];
extern int sscanf(const char *, const char *, ...);

int func_0D1F98(char *str, float *out, float lo, float hi)
{
    if (sscanf(str, D_0012D660, out) != 1)
        return 0;
    if (*out < lo)
        *out = lo;
    if (hi < *out)
        *out = hi;
    return 1;
}
