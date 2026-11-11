extern char *D_00182FA8;

void func_0C6738(int *);

int func_0C5FA0(void)
{
    char *p = D_00182FA8 + 0x150D4;

    if (*(int *)(p + 0x60) == *(int *)(p + 0x64))
        return 0;
    func_0C6738((int *)p);
    return 1;
}
