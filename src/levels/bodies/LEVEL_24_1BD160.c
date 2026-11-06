extern int *func_1BC238(void);

int func_1BD160(void)
{
    int *slot = func_1BC238();
    char *record = *(char **)slot;
    *(int *)(record + 0x14) = 1;
    ++*(long long *)(record + 0x20);
    return (int)record;
}
