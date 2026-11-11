/* LEVEL_23:0x0B20D8 -- placement copy of LEVEL_01_0BB340.c: removes the first queued entry when it matches the given value. */
extern char D_002F9EA4[];
extern int *func_0B3980(char *);
extern int func_0B39A0(char *);

int func_0B20D8(int value)
{
    char *base;
    int *found;

    base = D_002F9EA4;
    if (*(int *)(base + 0x20) == 0) {
        return 0;
    }
    found = func_0B3980(base);
    if (*found != value) {
        return 0;
    }
    func_0B39A0(base);
    *(int *)(base - 4) = 0;
    return 1;
}
