extern char *func_01E990(int x, int y);

int func_01F258(int x, int y)
{
    return *(int *)(func_01E990(x, y) + 0x54) == 2;
}
