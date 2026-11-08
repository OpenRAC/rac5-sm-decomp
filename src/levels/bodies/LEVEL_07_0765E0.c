extern void *func_076F78(void *key);
extern void func_076FC8(void *record);

void func_0765E0(void *key)
{
    void *value = func_076F78(key);
    if (value != 0)
        func_076FC8(value);
}
