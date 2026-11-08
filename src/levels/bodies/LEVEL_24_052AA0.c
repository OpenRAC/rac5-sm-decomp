extern void **func_052980(void *handle);
extern void func_15F938(char *object, int *first, int *second);
extern void func_052A98(int first, int second);

void func_052AA0(char *state, void *handle, int enable)
{
    char *value;
    if (enable != 0) {
        void **entry = func_052980(handle);
        if (entry != 0)
            *(char **)(state + 0xce8) = entry[1];
    } else {
        *(char **)(state + 0xce8) = 0;
    }
    value = *(char **)(state + 0xce8);
    if (value != 0) {
        int first;
        int second;
        func_15F938(value, &first, &second);
        func_052A98(first, second);
    } else {
        func_052A98(0, 0);
    }
}
