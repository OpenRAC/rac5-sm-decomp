extern void *func_06A5F0(void *key);
extern void func_06A640(void *record);

void func_069C58(void *key)
{
    void *value = func_06A5F0(key);
    if (value != 0)
        func_06A640(value);
}
