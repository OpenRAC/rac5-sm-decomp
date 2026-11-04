extern char D_001EA898[];

extern int sscanf(const char *, const char *, ...);

int func_109F30(void *ctx, unsigned int *value, unsigned int lo,
               unsigned int hi)
{
    if (sscanf(ctx, D_001EA898, value) != 1)
        return 0;
    if (*value < lo)
        *value = lo;
    if (hi != 0 && *value > hi)
        *value = hi;
    return 1;
}
