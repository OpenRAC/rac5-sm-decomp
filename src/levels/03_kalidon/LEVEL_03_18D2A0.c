extern void func_080918(int);

void func_18D2A0(char *record)
{
    char *nested = *(char **)(record + 0x54);
    int value = *(int *)(nested + 0x18);
    if (value != 0) {
        func_080918(value);
        *(int *)(nested + 0x18) = 0;
    }
}
