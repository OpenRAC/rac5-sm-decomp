extern char *func_01EDC8(void *owner, int id);

int func_01F590(void *owner, int id)
{
    return *(int *)(func_01EDC8(owner, id) + 0x50) != 0;
}
