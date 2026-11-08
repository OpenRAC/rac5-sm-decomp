extern void *func_06F1A8(void *key);

int func_06F3F8(void *key)
{
    return *(int *)((char *)func_06F1A8(key) + 0xc);
}
