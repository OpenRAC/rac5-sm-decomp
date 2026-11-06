extern void func_077F38(int);
void func_148E28(char *record)
{
    char *nested = *(char **)(record + 0x58);
    int value = *(int *)(nested + 0x58);
    if (value != 0) {
        func_077F38(value);
        *(int *)(nested + 0x58) = 0;
    }
}