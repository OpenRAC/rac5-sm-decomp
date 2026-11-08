extern void *func_073D98(void *key);
extern void func_073DE8(void *record);

void func_073400(void *key)
{
    void *value = func_073D98(key);
    if (value != 0)
        func_073DE8(value);
}
