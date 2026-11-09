/* LEVEL_19:0x0A9C68 -- placement copy of LEVEL_01_0BB340.c: removes the first queued entry when it matches the given value. */
extern char D_00276B24[];
extern int *func_0AB948(char *);
extern int func_0AB968(char *);

int func_0A9C68(int value)
{
    char *base;
    int *found;

    base = D_00276B24;
    if (*(int *)(base + 0x20) == 0) {
        return 0;
    }
    found = func_0AB948(base);
    if (*found != value) {
        return 0;
    }
    func_0AB968(base);
    *(int *)(base - 4) = 0;
    return 1;
}
