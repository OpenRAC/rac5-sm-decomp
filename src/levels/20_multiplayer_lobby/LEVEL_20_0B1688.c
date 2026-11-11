extern char *D_00137A28;

void func_0B1E20(int *);

int func_0B1688(void)
{
    char *p = D_00137A28 + 0x150D4;

    if (*(int *)(p + 0x60) == *(int *)(p + 0x64))
        return 0;
    func_0B1E20((int *)p);
    return 1;
}
