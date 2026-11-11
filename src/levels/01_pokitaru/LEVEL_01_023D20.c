extern int func_024EC8(int category, int selector);

int func_023D20(char *item, int category)
{
    return func_024EC8(category, *(int *)(item + 0xf8));
}
