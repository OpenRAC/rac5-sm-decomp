extern int *func_1EB560(void);

int func_1EC488(void)
{
    int *slot = func_1EB560();
    char *record = *(char **)slot;
    *(int *)(record + 0x14) = 1;
    ++*(long long *)(record + 0x20);
    return (int)record;
}
