extern char D_00174BA0[];
extern int sscanf(const char *, const char *, ...);

int func_0F2F08(char *str, float *out, float lo, float hi)
{
    if (sscanf(str, D_00174BA0, out) != 1)
        return 0;
    if (*out < lo)
        *out = lo;
    if (hi < *out)
        *out = hi;
    return 1;
}
