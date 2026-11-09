/* LEVEL_24:0x0B4BD0 -- placement copy of LEVEL_01_0BB340.c: removes the first queued entry when it matches the given value. */
extern char D_002F4924[];
extern int *func_0B64A8(char *);
extern int func_0B64C8(char *);

int func_0B4BD0(int value)
{
    char *base;
    int *found;

    base = D_002F4924;
    if (*(int *)(base + 0x20) == 0) {
        return 0;
    }
    found = func_0B64A8(base);
    if (*found != value) {
        return 0;
    }
    func_0B64C8(base);
    *(int *)(base - 4) = 0;
    return 1;
}
