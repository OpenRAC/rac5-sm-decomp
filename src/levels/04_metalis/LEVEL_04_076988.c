extern void *func_077320(void *key);
extern void func_077370(void *record);

void func_076988(void *key)
{
    void *value = func_077320(key);
    if (value != 0)
        func_077370(value);
}
