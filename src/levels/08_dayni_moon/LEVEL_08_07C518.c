extern void *func_07C2C8(void *key);

int func_07C518(void *key)
{
    return *(int *)((char *)func_07C2C8(key) + 0xc);
}
