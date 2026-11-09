/* LEVEL_20:0x0948C0 -- placement copy of LEVEL_01_0BB340.c: removes the first queued entry when it matches the given value. */
extern char D_0019A1E4[];
extern int *func_0965A0(char *);
extern int func_0965C0(char *);

int func_0948C0(int value)
{
    char *base;
    int *found;

    base = D_0019A1E4;
    if (*(int *)(base + 0x20) == 0) {
        return 0;
    }
    found = func_0965A0(base);
    if (*found != value) {
        return 0;
    }
    func_0965C0(base);
    *(int *)(base - 4) = 0;
    return 1;
}
