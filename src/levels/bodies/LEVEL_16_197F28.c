extern int *func_197000(void);

int func_197F28(void)
{
    int *slot = func_197000();
    char *record = *(char **)slot;
    *(int *)(record + 0x14) = 1;
    ++*(long long *)(record + 0x20);
    return (int)record;
}
