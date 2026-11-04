extern char D_002310A0[];
extern int sscanf(const char *, const char *, ...);

int func_123FB0(char *str, float *out, float lo, float hi)
{
    if (sscanf(str, D_002310A0, out) != 1)
        return 0;
    if (*out < lo)
        *out = lo;
    if (hi < *out)
        *out = hi;
    return 1;
}
