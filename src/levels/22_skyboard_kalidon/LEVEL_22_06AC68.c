extern void *func_06AA18(void *key);

int func_06AC68(void *key)
{
    return *(int *)((char *)func_06AA18(key) + 0xc);
}
