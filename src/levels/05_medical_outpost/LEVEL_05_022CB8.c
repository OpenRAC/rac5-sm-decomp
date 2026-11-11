extern int func_023E60(int category, int selector);

int func_022CB8(char *item, int category)
{
    return func_023E60(category, *(int *)(item + 0xf8));
}
