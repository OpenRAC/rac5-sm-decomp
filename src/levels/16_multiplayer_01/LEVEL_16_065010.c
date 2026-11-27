/* LEVEL_16:0x065010 -- placement copy of LEVEL_01_074128.c: checks the nested state flags, then reports whether the lookup found nothing. */
extern char *func_065C98(void *);

long long func_065010(char *r)
{
    long long result;
    int t;
    char *s = *(char **)(*(char **)(r + 0x40) + 0x10);

    if (*(unsigned int *)(s + 0x3c) & 0x2002)
        return 0;
    result = 0;
    if (*(int *)(r + 0x48) != 0) {
        if ((*(unsigned int *)(r + 0x64) & 0x4000) == 0) {
            t = func_065C98(r) == 0;
            result = t;
        }
    }
    return result;
}
