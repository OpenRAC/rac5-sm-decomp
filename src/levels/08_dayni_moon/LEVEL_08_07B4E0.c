extern void *func_07BE78(void *key);
extern void func_07BEC8(void *record);

void func_07B4E0(void *key)
{
    void *value = func_07BE78(key);
    if (value != 0)
        func_07BEC8(value);
}
