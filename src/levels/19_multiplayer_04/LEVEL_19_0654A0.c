extern void *func_065E88(void *key);
extern void func_065ED8(void *record);

void func_0654A0(void *key)
{
    void *value = func_065E88(key);
    if (value != 0)
        func_065ED8(value);
}
