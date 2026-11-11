extern char *func_021710(void *owner, int id);

int func_021ED8(void *owner, int id)
{
    return *(int *)(func_021710(owner, id) + 0x50) != 0;
}
