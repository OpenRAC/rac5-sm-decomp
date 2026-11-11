/* LEVEL_18:0x0A9368 -- placement copy of LEVEL_01_0BB340.c: removes the first queued entry when it matches the given value. */
extern char D_00276D24[];
extern int *func_0AB048(char *);
extern int func_0AB068(char *);

int func_0A9368(int value)
{
    char *base;
    int *found;

    base = D_00276D24;
    if (*(int *)(base + 0x20) == 0) {
        return 0;
    }
    found = func_0AB048(base);
    if (*found != value) {
        return 0;
    }
    func_0AB068(base);
    *(int *)(base - 4) = 0;
    return 1;
}
