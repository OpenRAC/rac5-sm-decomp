extern char *func_01F460(int, int);

char *func_01EBE8(char *item)
{
    return func_01F460(*(int *)(item + 0x9a0), *(int *)(item + 0xf8));
}
