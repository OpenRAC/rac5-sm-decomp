/* LEVEL_10:0x0BC688 -- placement copy of LEVEL_01_0BB340.c: removes the first queued entry when it matches the given value. */
extern char D_00331E64[];
extern int *func_0BDF30(char *);
extern int func_0BDF50(char *);

int func_0BC688(int value)
{
    char *base;
    int *found;

    base = D_00331E64;
    if (*(int *)(base + 0x20) == 0) {
        return 0;
    }
    found = func_0BDF30(base);
    if (*found != value) {
        return 0;
    }
    func_0BDF50(base);
    *(int *)(base - 4) = 0;
    return 1;
}
