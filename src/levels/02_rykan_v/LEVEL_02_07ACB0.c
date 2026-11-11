extern void *func_07B648(void *key);
extern void func_07B698(void *record);

void func_07ACB0(void *key)
{
    void *value = func_07B648(key);
    if (value != 0)
        func_07B698(value);
}
