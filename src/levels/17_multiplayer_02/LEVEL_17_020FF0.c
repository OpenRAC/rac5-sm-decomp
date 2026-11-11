extern int func_022210(void *owner, int id);

int func_020FF0(char *item, void *other)
{
    return func_022210(other, *(int *)(item + 0xf8));
}
