extern char *func_022400(int x, int y);

int func_022CC8(int x, int y)
{
    return *(int *)(func_022400(x, y) + 0x54) == 2;
}
