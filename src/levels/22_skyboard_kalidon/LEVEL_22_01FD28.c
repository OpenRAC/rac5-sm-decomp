extern char *func_01F460(int x, int y);

int func_01FD28(int x, int y)
{
    return *(int *)(func_01F460(x, y) + 0x54) == 2;
}
