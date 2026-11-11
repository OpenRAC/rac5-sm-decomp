extern void *func_07BE78(void *key);

int func_07B510(void *key)
{
    return *(int *)((char *)func_07BE78(key) + 4);
}
