/* LEVEL_01:0x0BB340 -- removes the first queued entry when it matches the given value. */
extern char D_00328A64[];
extern int *func_0BCBE0(char *);
extern int func_0BCC00(char *);

int func_0BB340(int value)
{
    char *base;
    int *found;

    base = D_00328A64;
    if (*(int *)(base + 0x20) == 0) {
        return 0;
    }
    found = func_0BCBE0(base);
    if (*found != value) {
        return 0;
    }
    func_0BCC00(base);
    *(int *)(base - 4) = 0;
    return 1;
}
