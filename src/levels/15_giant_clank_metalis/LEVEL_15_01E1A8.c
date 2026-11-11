extern int func_01F230(int category, int selector);

int func_01E1A8(char *item, int category)
{
    return func_01F230(category, *(int *)(item + 0xf8));
}
