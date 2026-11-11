extern int *func_140258(void);

int __start_cp_handler(void)
{
    int *slot = func_140258();
    char *record = *(char **)slot;
    *(int *)(record + 0x14) = 1;
    ++*(long long *)(record + 0x20);
    return (int)record;
}
