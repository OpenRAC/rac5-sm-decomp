extern char *func_01EDC8(int, int);

char *func_01E440(char *item)
{
    return func_01EDC8(*(int *)(item + 0x9a0), *(int *)(item + 0xf8));
}
