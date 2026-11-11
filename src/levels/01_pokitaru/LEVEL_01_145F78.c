extern void func_080B38(int);
void func_145F78(char *record)
{
    char *nested = *(char **)(record + 0x58);
    int value = *(int *)(nested + 0x58);
    if (value != 0) {
        func_080B38(value);
        *(int *)(nested + 0x58) = 0;
    }
}