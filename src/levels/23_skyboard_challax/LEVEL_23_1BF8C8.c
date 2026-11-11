extern int *func_1BE9A0(void);

int func_1BF8C8(void)
{
    int *slot = func_1BE9A0();
    char *record = *(char **)slot;
    *(int *)(record + 0x14) = 1;
    ++*(long long *)(record + 0x20);
    return (int)record;
}
