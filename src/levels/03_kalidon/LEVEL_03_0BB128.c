/* LEVEL_03:0x0BB128 -- placement copy of LEVEL_01_0BB340.c: removes the first queued entry when it matches the given value. */
extern char D_003438E4[];
extern int *func_0BC9C8(char *);
extern int func_0BC9E8(char *);

int func_0BB128(int value)
{
    char *base;
    int *found;

    base = D_003438E4;
    if (*(int *)(base + 0x20) == 0) {
        return 0;
    }
    found = func_0BC9C8(base);
    if (*found != value) {
        return 0;
    }
    func_0BC9E8(base);
    *(int *)(base - 4) = 0;
    return 1;
}
