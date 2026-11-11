extern void *func_058590(void *key);
extern void func_0585E0(void *record);

void func_057BA8(void *key)
{
    void *value = func_058590(key);
    if (value != 0)
        func_0585E0(value);
}
