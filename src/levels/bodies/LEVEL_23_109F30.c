extern char D_001EA898[];

int func_000000(void *, void *, void *);

int func_109F30(void *ctx, unsigned int *value, unsigned int lo,
               unsigned int hi)
{
    if (func_000000(ctx, D_001EA898, value) != 1)
        return 0;
    if (*value < lo)
        *value = lo;
    if (hi != 0 && *value > hi)
        *value = hi;
    return 1;
}
