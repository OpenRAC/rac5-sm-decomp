extern void **func_0580F8(void *handle);
extern void func_17BE30(char *object, int *first, int *second);
extern void func_058210(int first, int second);

void func_058218(char *state, void *handle, int enable)
{
    char *value;
    if (enable != 0) {
        void **entry = func_0580F8(handle);
        if (entry != 0)
            *(char **)(state + 0xce8) = entry[1];
    } else {
        *(char **)(state + 0xce8) = 0;
    }
    value = *(char **)(state + 0xce8);
    if (value != 0) {
        int first;
        int second;
        func_17BE30(value, &first, &second);
        func_058210(first, second);
    } else {
        func_058210(0, 0);
    }
}
