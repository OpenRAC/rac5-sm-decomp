extern int func_024830(int category, int selector);

int func_023520(char *item, int category)
{
    return func_024830(category, *(int *)(item + 0xf8));
}
