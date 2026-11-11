extern int func_021ED8(void *owner, int id);

int func_020CB8(char *item, void *other)
{
    return func_021ED8(other, *(int *)(item + 0xf8));
}
