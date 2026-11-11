extern char *func_023F90(int x, int y);

int func_024858(int x, int y)
{
    return *(int *)(func_023F90(x, y) + 0x54) == 2;
}
