extern int func_025828(int category, int selector);

int func_024680(char *item, int category)
{
    return func_025828(category, *(int *)(item + 0xf8));
}
