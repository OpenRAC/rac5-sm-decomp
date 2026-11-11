extern int func_024D98(int category, int selector);

int func_023A88(char *item, int category)
{
    return func_024D98(category, *(int *)(item + 0xf8));
}
