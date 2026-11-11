extern char *D_001D13A8;

void func_0C6E30(int *);

int func_0C6698(void)
{
    char *p = D_001D13A8 + 0x150D4;

    if (*(int *)(p + 0x60) == *(int *)(p + 0x64))
        return 0;
    func_0C6E30((int *)p);
    return 1;
}
