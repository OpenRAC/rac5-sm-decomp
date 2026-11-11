extern int *func_1D53C8(void);

int func_1D62F0(void)
{
    int *slot = func_1D53C8();
    char *record = *(char **)slot;
    *(int *)(record + 0x14) = 1;
    ++*(long long *)(record + 0x20);
    return (int)record;
}
