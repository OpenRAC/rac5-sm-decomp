extern void *func_070C30(void *key);
extern void func_070C80(void *record);

void func_070298(void *key)
{
    void *value = func_070C30(key);
    if (value != 0)
        func_070C80(value);
}
