extern void func_082CA0(int);
void func_1492A0(char *record)
{
    char *nested = *(char **)(record + 0x58);
    int value = *(int *)(nested + 0x58);
    if (value != 0) {
        func_082CA0(value);
        *(int *)(nested + 0x58) = 0;
    }
}