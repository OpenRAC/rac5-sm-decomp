extern void func_07B218(int);
void func_13BD98(char *record)
{
    char *nested = *(char **)(record + 0x58);
    int value = *(int *)(nested + 0x58);
    if (value != 0) {
        func_07B218(value);
        *(int *)(nested + 0x58) = 0;
    }
}