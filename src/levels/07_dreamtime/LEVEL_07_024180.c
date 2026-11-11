extern int func_025490(int category, int selector);

int func_024180(char *item, int category)
{
    return func_025490(category, *(int *)(item + 0xf8));
}
