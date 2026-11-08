extern void **func_05A020(void *handle);
extern void func_186868(char *object, int *first, int *second);
extern void func_05A138(int first, int second);

void func_05A140(char *state, void *handle, int enable)
{
    char *value;
    if (enable != 0) {
        void **entry = func_05A020(handle);
        if (entry != 0)
            *(char **)(state + 0xce8) = entry[1];
    } else {
        *(char **)(state + 0xce8) = 0;
    }
    value = *(char **)(state + 0xce8);
    if (value != 0) {
        int first;
        int second;
        func_186868(value, &first, &second);
        func_05A138(first, second);
    } else {
        func_05A138(0, 0);
    }
}
