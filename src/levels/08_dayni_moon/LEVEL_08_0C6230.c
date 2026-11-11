/* LEVEL_08:0x0C6230 -- placement copy of LEVEL_01_0BB340.c: removes the first queued entry when it matches the given value. */
extern char D_00377CE4[];
extern int *func_0C7B08(char *);
extern int func_0C7B28(char *);

int func_0C6230(int value)
{
    char *base;
    int *found;

    base = D_00377CE4;
    if (*(int *)(base + 0x20) == 0) {
        return 0;
    }
    found = func_0C7B08(base);
    if (*found != value) {
        return 0;
    }
    func_0C7B28(base);
    *(int *)(base - 4) = 0;
    return 1;
}
