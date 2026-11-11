extern void func_07A718(int);
void func_13C670(char *record)
{
    char *nested = *(char **)(record + 0x58);
    int value = *(int *)(nested + 0x58);
    if (value != 0) {
        func_07A718(value);
        *(int *)(nested + 0x58) = 0;
    }
}