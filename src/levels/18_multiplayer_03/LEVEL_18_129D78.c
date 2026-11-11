extern void func_072D30(int);
void func_129D78(char *record)
{
    char *nested = *(char **)(record + 0x58);
    int value = *(int *)(nested + 0x58);
    if (value != 0) {
        func_072D30(value);
        *(int *)(nested + 0x58) = 0;
    }
}