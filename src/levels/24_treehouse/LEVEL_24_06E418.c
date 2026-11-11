extern void *func_06ED80(void *key);

int func_06E418(void *key)
{
    return *(int *)((char *)func_06ED80(key) + 4);
}
