extern void *func_05D678(void *key);

int func_05D8C8(void *key)
{
    return *(int *)((char *)func_05D678(key) + 0xc);
}
