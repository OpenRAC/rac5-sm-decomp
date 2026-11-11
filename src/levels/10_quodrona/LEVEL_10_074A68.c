extern void *func_075400(void *key);
extern void func_075450(void *record);

void func_074A68(void *key)
{
    void *value = func_075400(key);
    if (value != 0)
        func_075450(value);
}
