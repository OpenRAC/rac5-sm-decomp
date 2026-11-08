extern void *func_06EA80(void *key);
extern void func_06EAD0(void *record);

void func_06E0E8(void *key)
{
    void *value = func_06EA80(key);
    if (value != 0)
        func_06EAD0(value);
}
