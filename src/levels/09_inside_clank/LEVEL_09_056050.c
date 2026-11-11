extern void **func_055F30(void *handle);
extern void func_16D438(char *object, int *first, int *second);
extern void func_056048(int first, int second);

void func_056050(char *state, void *handle, int enable)
{
    char *value;
    if (enable != 0) {
        void **entry = func_055F30(handle);
        if (entry != 0)
            *(char **)(state + 0xce8) = entry[1];
    } else {
        *(char **)(state + 0xce8) = 0;
    }
    value = *(char **)(state + 0xce8);
    if (value != 0) {
        int first;
        int second;
        func_16D438(value, &first, &second);
        func_056048(first, second);
    } else {
        func_056048(0, 0);
    }
}
