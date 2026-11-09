/* LEVEL_06:0x0B5C40 -- placement copy of LEVEL_01_0BB340.c: removes the first queued entry when it matches the given value. */
extern char D_003157E4[];
extern int *func_0B74E0(char *);
extern int func_0B7500(char *);

int func_0B5C40(int value)
{
    char *base;
    int *found;

    base = D_003157E4;
    if (*(int *)(base + 0x20) == 0) {
        return 0;
    }
    found = func_0B74E0(base);
    if (*found != value) {
        return 0;
    }
    func_0B7500(base);
    *(int *)(base - 4) = 0;
    return 1;
}
