extern void func_0737C8(int);
void func_12B8F8(char *record)
{
    char *nested = *(char **)(record + 0x58);
    int value = *(int *)(nested + 0x58);
    if (value != 0) {
        func_0737C8(value);
        *(int *)(nested + 0x58) = 0;
    }
}