extern int *func_1DA958(void);

int func_1DB880(void)
{
    int *slot = func_1DA958();
    char *record = *(char **)slot;
    *(int *)(record + 0x14) = 1;
    ++*(long long *)(record + 0x20);
    return (int)record;
}
