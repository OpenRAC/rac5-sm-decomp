extern void *func_06EA80(void *key);

int func_06E118(void *key)
{
    return *(int *)((char *)func_06EA80(key) + 4);
}
