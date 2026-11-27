/* LEVEL_01:0x074128 -- checks the nested state flags, then reports whether the lookup found nothing. */
extern char *func_074D60(void *);

long long func_074128(char *r)
{
    long long result;
    int t;
    char *s = *(char **)(*(char **)(r + 0x40) + 0x10);

    if (*(unsigned int *)(s + 0x3c) & 0x2002)
        return 0;
    result = 0;
    if (*(int *)(r + 0x48) != 0) {
        if ((*(unsigned int *)(r + 0x64) & 0x4000) == 0) {
            t = func_074D60(r) == 0;
            result = t;
        }
    }
    return result;
}
