extern int *func_140258(void);

int func_141180(void)
{
    int *slot = func_140258();
    char *record = *(char **)slot;
    *(int *)(record + 0x14) = 1;
    ++*(long long *)(record + 0x20);
    return (int)record;
}
