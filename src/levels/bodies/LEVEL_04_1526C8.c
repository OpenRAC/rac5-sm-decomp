extern void func_083F98(int);
void func_1526C8(char *record)
{
    char *nested = *(char **)(record + 0x58);
    int value = *(int *)(nested + 0x58);
    if (value != 0) {
        func_083F98(value);
        *(int *)(nested + 0x58) = 0;
    }
}