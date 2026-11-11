extern int func_024B48(int category, int selector);

int func_0239A0(char *item, int category)
{
    return func_024B48(category, *(int *)(item + 0xf8));
}
