extern int *func_1F45B8(void);

int func_1F54E0(void)
{
    int *slot = func_1F45B8();
    char *record = *(char **)slot;
    *(int *)(record + 0x14) = 1;
    ++*(long long *)(record + 0x20);
    return (int)record;
}
