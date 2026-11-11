extern void *func_071890(void *key);
extern void func_0718E0(void *record);

void func_070EF8(void *key)
{
    void *value = func_071890(key);
    if (value != 0)
        func_0718E0(value);
}
