extern char *D_0010BE50;

void func_016000(int *);

int func_0158B0(void)
{
    char *p = D_0010BE50 + 0x150D4;

    if (*(int *)(p + 0x60) == *(int *)(p + 0x64))
        return 0;
    func_016000((int *)p);
    return 1;
}
