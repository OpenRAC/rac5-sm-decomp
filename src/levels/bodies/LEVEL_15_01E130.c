extern char *func_01E990(int, int);

char *func_01E130(char *item)
{
    return func_01E990(*(int *)(item + 0x9a0), *(int *)(item + 0xf8));
}
