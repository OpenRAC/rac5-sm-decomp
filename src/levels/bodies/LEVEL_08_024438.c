extern int func_025748(int category, int selector);

int func_024438(char *item, int category)
{
    return func_025748(category, *(int *)(item + 0xf8));
}
