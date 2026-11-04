extern char D_0012D658[];

extern int sscanf(const char *, const char *, ...);

int func_0D1F18(void *ctx, unsigned int *value, unsigned int lo,
               unsigned int hi)
{
    if (sscanf(ctx, D_0012D658, value) != 1)
        return 0;
    if (*value < lo)
        *value = lo;
    if (hi != 0 && *value > hi)
        *value = hi;
    return 1;
}
