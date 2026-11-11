extern char D_001BFA58[];

extern int sscanf(const char *, const char *, ...);

int func_0F86C8(void *ctx, unsigned int *value, unsigned int lo,
               unsigned int hi)
{
    if (sscanf(ctx, D_001BFA58, value) != 1)
        return 0;
    if (*value < lo)
        *value = lo;
    if (hi != 0 && *value > hi)
        *value = hi;
    return 1;
}
