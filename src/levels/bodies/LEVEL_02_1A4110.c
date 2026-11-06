extern void func_087408(int);

void func_1A4110(char *record)
{
    char *nested = *(char **)(record + 0x54);
    int value = *(int *)(nested + 0xc);
    if (value != 0) {
        func_087408(value);
        *(int *)(nested + 0xc) = 0;
    }
}
