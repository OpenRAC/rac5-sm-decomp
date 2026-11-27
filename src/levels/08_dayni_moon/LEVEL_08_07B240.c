/* LEVEL_08:0x07B240 -- placement copy of LEVEL_01_074128.c: checks the nested state flags, then reports whether the lookup found nothing. */
extern char *func_07BE78(void *);

long long func_07B240(char *r)
{
    long long result;
    int t;
    char *s = *(char **)(*(char **)(r + 0x40) + 0x10);

    if (*(unsigned int *)(s + 0x3c) & 0x2002)
        return 0;
    result = 0;
    if (*(int *)(r + 0x48) != 0) {
        if ((*(unsigned int *)(r + 0x64) & 0x4000) == 0) {
            t = func_07BE78(r) == 0;
            result = t;
        }
    }
    return result;
}
