extern char D_00230618[];

int func_000000(void *, void *, void *);

int func_116B38(void *ctx, unsigned int *value, unsigned int lo,
               unsigned int hi)
{
    if (func_000000(ctx, D_00230618, value) != 1)
        return 0;
    if (*value < lo)
        *value = lo;
    if (hi != 0 && *value > hi)
        *value = hi;
    return 1;
}
