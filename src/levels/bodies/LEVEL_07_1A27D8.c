extern void func_082CA0(int);

void func_1A27D8(char *record)
{
    char *nested = *(char **)(record + 0x54);
    int value = *(int *)(nested + 0x18);
    if (value != 0) {
        func_082CA0(value);
        *(int *)(nested + 0x18) = 0;
    }
}
