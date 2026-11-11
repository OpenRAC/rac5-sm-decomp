extern char D_001CD7D8[];

extern int sscanf(const char *, const char *, ...);

int func_0F92E0(void *ctx, unsigned int *value, unsigned int lo,
               unsigned int hi)
{
    if (sscanf(ctx, D_001CD7D8, value) != 1)
        return 0;
    if (*value < lo)
        *value = lo;
    if (hi != 0 && *value > hi)
        *value = hi;
    return 1;
}
