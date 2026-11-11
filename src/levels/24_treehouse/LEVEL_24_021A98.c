extern int func_022CA0(int category, int selector);

int func_021A98(char *item, int category)
{
    return func_022CA0(category, *(int *)(item + 0xf8));
}
