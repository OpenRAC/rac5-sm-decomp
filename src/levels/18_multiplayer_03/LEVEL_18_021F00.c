extern char *func_021710(int a, int b);

int func_021F00(int a, int b)
{
    return *(int *)(func_021710(a, b) + 0x50) == 2;
}
