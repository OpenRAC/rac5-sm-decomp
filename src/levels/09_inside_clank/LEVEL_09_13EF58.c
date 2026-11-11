extern void func_07D5B8(int);
void func_13EF58(char *record)
{
    char *nested = *(char **)(record + 0x58);
    int value = *(int *)(nested + 0x58);
    if (value != 0) {
        func_07D5B8(value);
        *(int *)(nested + 0x58) = 0;
    }
}