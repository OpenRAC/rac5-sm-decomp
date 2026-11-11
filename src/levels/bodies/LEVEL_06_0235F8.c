extern char *func_022D30(int x, int y);

int func_0235F8(int x, int y)
{
    return *(int *)(func_022D30(x, y) + 0x54) == 2;
}
