extern void *func_065C98(void *key);
extern void func_065CE8(void *record);

void func_0652B0(void *key)
{
    void *value = func_065C98(key);
    if (value != 0)
        func_065CE8(value);
}
