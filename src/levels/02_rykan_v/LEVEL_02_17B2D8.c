extern void func_087408(int);

void func_17B2D8(char *record)
{
    char *nested = *(char **)(record + 0x54);
    int value = *(int *)(nested + 0x1c);
    if (value != 0) {
        func_087408(value);
        *(int *)(nested + 0x1c) = 0;
    }
}
