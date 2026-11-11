extern char *D_002488A8;

void func_0DEB88(int *);

int func_0DE3F0(void)
{
    char *p = D_002488A8 + 0x150D4;

    if (*(int *)(p + 0x60) == *(int *)(p + 0x64))
        return 0;
    func_0DEB88((int *)p);
    return 1;
}
