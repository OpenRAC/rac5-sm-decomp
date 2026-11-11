int func_0242E8(void);

int __start_cp_handler(void)
{
    int p = *(int *)func_0242E8();
    *(int *)(p + 0x14) = 1;
    ++*(unsigned long long *)(p + 0x20);
    return p;
}
