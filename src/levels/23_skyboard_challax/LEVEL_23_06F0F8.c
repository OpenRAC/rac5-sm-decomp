extern void *func_06EEA8(void *key);

int func_06F0F8(void *key)
{
    return *(int *)((char *)func_06EEA8(key) + 0xc);
}
