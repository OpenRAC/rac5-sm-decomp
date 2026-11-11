extern int func_01F590(void *owner, int id);

int func_01E490(char *item, void *other)
{
    return func_01F590(other, *(int *)(item + 0xf8));
}
