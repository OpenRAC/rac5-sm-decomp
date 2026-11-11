extern void **func_0560F0(void *handle);
extern void func_169800(char *object, int *first, int *second);
extern void func_056208(int first, int second);

void func_056210(char *state, void *handle, int enable)
{
    char *value;
    if (enable != 0) {
        void **entry = func_0560F0(handle);
        if (entry != 0)
            *(char **)(state + 0xce8) = entry[1];
    } else {
        *(char **)(state + 0xce8) = 0;
    }
    value = *(char **)(state + 0xce8);
    if (value != 0) {
        int first;
        int second;
        func_169800(value, &first, &second);
        func_056208(first, second);
    } else {
        func_056208(0, 0);
    }
}
