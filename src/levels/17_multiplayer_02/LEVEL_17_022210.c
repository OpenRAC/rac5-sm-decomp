extern char *func_021A48(void *owner, int id);

int func_022210(void *owner, int id)
{
    return *(int *)(func_021A48(owner, id) + 0x50) != 0;
}
