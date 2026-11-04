extern char D_0022C420[];
extern int sscanf(const char *, const char *, ...);

int func_11BA98(char *str, float *out, float lo, float hi)
{
    if (sscanf(str, D_0022C420, out) != 1)
        return 0;
    if (*out < lo)
        *out = lo;
    if (hi < *out)
        *out = hi;
    return 1;
}
