extern char D_002613A0[];
extern int sscanf(const char *, const char *, ...);

int func_1291E8(char *str, float *out, float lo, float hi)
{
    if (sscanf(str, D_002613A0, out) != 1)
        return 0;
    if (*out < lo)
        *out = lo;
    if (hi < *out)
        *out = hi;
    return 1;
}
