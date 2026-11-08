extern void *func_06ED80(void *key);
extern void func_06EDD0(void *record);

void func_06E3E8(void *key)
{
    void *value = func_06ED80(key);
    if (value != 0)
        func_06EDD0(value);
}
