/* LEVEL_09:0x0B85F0 -- placement copy of LEVEL_01_0BB340.c: removes the first queued entry when it matches the given value. */
extern char D_003101E4[];
extern int *func_0B9E90(char *);
extern int func_0B9EB0(char *);

int func_0B85F0(int value)
{
    char *base;
    int *found;

    base = D_003101E4;
    if (*(int *)(base + 0x20) == 0) {
        return 0;
    }
    found = func_0B9E90(base);
    if (*found != value) {
        return 0;
    }
    func_0B9EB0(base);
    *(int *)(base - 4) = 0;
    return 1;
}
