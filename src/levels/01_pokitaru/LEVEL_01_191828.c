extern void func_080B38(int);

void func_191828(char *record)
{
    char *nested = *(char **)(record + 0x54);
    int value = *(int *)(nested + 0x18);
    if (value != 0) {
        func_080B38(value);
        *(int *)(nested + 0x18) = 0;
    }
}
