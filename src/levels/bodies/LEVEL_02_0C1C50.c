/* LEVEL_02:0x0C1C50 -- placement copy of LEVEL_01_0BB340.c: removes the first queued entry when it matches the given value. */
extern char D_0033FF64[];
extern int *func_0C34F0(char *);
extern int func_0C3510(char *);

int func_0C1C50(int value)
{
    char *base;
    int *found;

    base = D_0033FF64;
    if (*(int *)(base + 0x20) == 0) {
        return 0;
    }
    found = func_0C34F0(base);
    if (*found != value) {
        return 0;
    }
    func_0C3510(base);
    *(int *)(base - 4) = 0;
    return 1;
}
