extern void *func_05D3B8(void *key);
extern void func_05D408(void *record);

void func_05CA20(void *key)
{
    void *value = func_05D3B8(key);
    if (value != 0)
        func_05D408(value);
}
