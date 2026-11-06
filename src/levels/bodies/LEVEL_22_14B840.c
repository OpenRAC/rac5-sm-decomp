extern int *func_14A918(void);

int func_14B840(void)
{
    int *slot = func_14A918();
    char *record = *(char **)slot;
    *(int *)(record + 0x14) = 1;
    ++*(long long *)(record + 0x20);
    return (int)record;
}
