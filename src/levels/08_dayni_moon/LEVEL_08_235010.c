extern int *func_2340E8(void);

int func_235010(void)
{
    int *slot = func_2340E8();
    char *record = *(char **)slot;
    *(int *)(record + 0x14) = 1;
    ++*(long long *)(record + 0x20);
    return (int)record;
}
