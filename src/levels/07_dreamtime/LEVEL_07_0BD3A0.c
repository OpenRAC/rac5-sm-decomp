/* LEVEL_07:0x0BD3A0 -- placement copy of LEVEL_01_0BB340.c: removes the first queued entry when it matches the given value. */
extern char D_0033E364[];
extern int *func_0BEC40(char *);
extern int func_0BEC60(char *);

int func_0BD3A0(int value)
{
    char *base;
    int *found;

    base = D_0033E364;
    if (*(int *)(base + 0x20) == 0) {
        return 0;
    }
    found = func_0BEC40(base);
    if (*found != value) {
        return 0;
    }
    func_0BEC60(base);
    *(int *)(base - 4) = 0;
    return 1;
}
