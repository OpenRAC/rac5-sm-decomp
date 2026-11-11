extern void **func_05EB58(void *handle);
extern void func_196E50(char *object, int *first, int *second);
extern void func_05EC70(int first, int second);

void func_05EC78(char *state, void *handle, int enable)
{
    char *value;
    if (enable != 0) {
        void **entry = func_05EB58(handle);
        if (entry != 0)
            *(char **)(state + 0xce8) = entry[1];
    } else {
        *(char **)(state + 0xce8) = 0;
    }
    value = *(char **)(state + 0xce8);
    if (value != 0) {
        int first;
        int second;
        func_196E50(value, &first, &second);
        func_05EC70(first, second);
    } else {
        func_05EC70(0, 0);
    }
}
