extern char *func_021D08(int a, int b);

int func_0224F8(int a, int b)
{
    return *(int *)(func_021D08(a, b) + 0x50) == 2;
}
