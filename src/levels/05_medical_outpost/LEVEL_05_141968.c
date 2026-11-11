extern void func_07E1D8(int);
void func_141968(char *record)
{
    char *nested = *(char **)(record + 0x58);
    int value = *(int *)(nested + 0x58);
    if (value != 0) {
        func_07E1D8(value);
        *(int *)(nested + 0x58) = 0;
    }
}