extern char *D_002313A8;

void func_0D81F8(int *);

int func_0D7A60(void)
{
    char *p = D_002313A8 + 0x150D4;

    if (*(int *)(p + 0x60) == *(int *)(p + 0x64))
        return 0;
    func_0D81F8((int *)p);
    return 1;
}
