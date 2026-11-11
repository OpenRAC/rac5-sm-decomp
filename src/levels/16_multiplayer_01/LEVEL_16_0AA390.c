/* LEVEL_16:0x0AA390 -- placement copy of LEVEL_01_0BB340.c: removes the first queued entry when it matches the given value. */
extern char D_002769A4[];
extern int *func_0AC070(char *);
extern int func_0AC090(char *);

int func_0AA390(int value)
{
    char *base;
    int *found;

    base = D_002769A4;
    if (*(int *)(base + 0x20) == 0) {
        return 0;
    }
    found = func_0AC070(base);
    if (*found != value) {
        return 0;
    }
    func_0AC090(base);
    *(int *)(base - 4) = 0;
    return 1;
}
