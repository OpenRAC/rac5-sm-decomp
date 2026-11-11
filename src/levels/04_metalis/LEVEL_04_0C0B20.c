/* LEVEL_04:0x0C0B20 -- placement copy of LEVEL_01_0BB340.c: removes the first queued entry when it matches the given value. */
extern char D_00343264[];
extern int *func_0C23F8(char *);
extern int func_0C2418(char *);

int func_0C0B20(int value)
{
    char *base;
    int *found;

    base = D_00343264;
    if (*(int *)(base + 0x20) == 0) {
        return 0;
    }
    found = func_0C23F8(base);
    if (*found != value) {
        return 0;
    }
    func_0C2418(base);
    *(int *)(base - 4) = 0;
    return 1;
}
