/* LEVEL_15:0x09B988 -- placement copy of LEVEL_01_0BB340.c: removes the first queued entry when it matches the given value. */
extern char D_002402A4[];
extern int *func_09D228(char *);
extern int func_09D248(char *);

int func_09B988(int value)
{
    char *base;
    int *found;

    base = D_002402A4;
    if (*(int *)(base + 0x20) == 0) {
        return 0;
    }
    found = func_09D228(base);
    if (*found != value) {
        return 0;
    }
    func_09D248(base);
    *(int *)(base - 4) = 0;
    return 1;
}
