extern char D_00201318[];

int func_000000(void *, void *, void *);

int func_111DB8(void *ctx, unsigned int *value, unsigned int lo,
               unsigned int hi)
{
    if (func_000000(ctx, D_00201318, value) != 1)
        return 0;
    if (*value < lo)
        *value = lo;
    if (hi != 0 && *value > hi)
        *value = hi;
    return 1;
}
