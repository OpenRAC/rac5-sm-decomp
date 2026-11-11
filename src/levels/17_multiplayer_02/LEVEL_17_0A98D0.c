/* LEVEL_17:0x0A98D0 -- placement copy of LEVEL_01_0BB340.c: removes the first queued entry when it matches the given value. */
extern char D_00267CA4[];
extern int *func_0AB5B0(char *);
extern int func_0AB5D0(char *);

int func_0A98D0(int value)
{
    char *base;
    int *found;

    base = D_00267CA4;
    if (*(int *)(base + 0x20) == 0) {
        return 0;
    }
    found = func_0AB5B0(base);
    if (*found != value) {
        return 0;
    }
    func_0AB5D0(base);
    *(int *)(base - 4) = 0;
    return 1;
}
