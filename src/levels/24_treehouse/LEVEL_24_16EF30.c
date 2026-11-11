extern void func_07B218(int);

void func_16EF30(char *record)
{
    char *nested = *(char **)(record + 0x54);
    int value = *(int *)(nested + 0x18);
    if (value != 0) {
        func_07B218(value);
        *(int *)(nested + 0x18) = 0;
    }
}
