extern void *func_074B50(void *key);
extern void func_074BA0(void *record);

void func_0741B8(void *key)
{
    void *value = func_074B50(key);
    if (value != 0)
        func_074BA0(value);
}
