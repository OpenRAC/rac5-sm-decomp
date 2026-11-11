extern void **func_057CB0(void *handle);
extern void func_179878(char *object, int *first, int *second);
extern void func_057DC8(int first, int second);

void func_057DD0(char *state, void *handle, int enable)
{
    char *value;
    if (enable != 0) {
        void **entry = func_057CB0(handle);
        if (entry != 0)
            *(char **)(state + 0xce8) = entry[1];
    } else {
        *(char **)(state + 0xce8) = 0;
    }
    value = *(char **)(state + 0xce8);
    if (value != 0) {
        int first;
        int second;
        func_179878(value, &first, &second);
        func_057DC8(first, second);
    } else {
        func_057DC8(0, 0);
    }
}
