extern void *func_077748(void *key);

void func_077950(void *object, int value)
{
    char *record = func_077748(object);
    if (record != 0) {
        *(int *)(record + 0xc) = value;
    } else {
        record = *(char **)((char *)object + 0x48);
        *(int *)(record + 0xdc) = value;
    }
}
