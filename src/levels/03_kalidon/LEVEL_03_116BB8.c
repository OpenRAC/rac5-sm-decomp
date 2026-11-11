extern char D_00230620[];
extern int sscanf(const char *, const char *, ...);

int func_116BB8(char *str, float *out, float lo, float hi)
{
    if (sscanf(str, D_00230620, out) != 1)
        return 0;
    if (*out < lo)
        *out = lo;
    if (hi < *out)
        *out = hi;
    return 1;
}
