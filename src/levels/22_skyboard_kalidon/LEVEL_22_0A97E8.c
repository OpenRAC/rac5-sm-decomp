/* LEVEL_22:0x0A97E8 -- placement copy of LEVEL_01_0BB340.c: removes the first queued entry when it matches the given value. */
extern char D_0027E624[];
extern int *func_0AB090(char *);
extern int func_0AB0B0(char *);

int func_0A97E8(int value)
{
    char *base;
    int *found;

    base = D_0027E624;
    if (*(int *)(base + 0x20) == 0) {
        return 0;
    }
    found = func_0AB090(base);
    if (*found != value) {
        return 0;
    }
    func_0AB0B0(base);
    *(int *)(base - 4) = 0;
    return 1;
}
