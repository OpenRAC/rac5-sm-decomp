/* LEVEL_05:0x0B98E8 -- placement copy of LEVEL_01_0BB340.c: removes the first queued entry when it matches the given value. */
extern char D_00314924[];
extern int *func_0BB188(char *);
extern int func_0BB1A8(char *);

int func_0B98E8(int value)
{
    char *base;
    int *found;

    base = D_00314924;
    if (*(int *)(base + 0x20) == 0) {
        return 0;
    }
    found = func_0BB188(base);
    if (*found != value) {
        return 0;
    }
    func_0BB1A8(base);
    *(int *)(base - 4) = 0;
    return 1;
}
