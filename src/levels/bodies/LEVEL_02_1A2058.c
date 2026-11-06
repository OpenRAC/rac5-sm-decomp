extern void func_087408(int);

void func_1A2058(char *record)
{
    char *nested = *(char **)(record + 0x54);
    int value = *(int *)(nested + 0x18);
    if (value != 0) {
        func_087408(value);
        *(int *)(nested + 0x18) = 0;
    }
}
