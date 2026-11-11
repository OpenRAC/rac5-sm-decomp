extern char *func_021D08(void *owner, int id);

int func_0224D0(void *owner, int id)
{
    return *(int *)(func_021D08(owner, id) + 0x50) != 0;
}
