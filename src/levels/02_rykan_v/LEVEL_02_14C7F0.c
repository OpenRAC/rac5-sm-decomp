extern void func_087408(int);
void func_14C7F0(char *record)
{
    char *nested = *(char **)(record + 0x58);
    int value = *(int *)(nested + 0x58);
    if (value != 0) {
        func_087408(value);
        *(int *)(nested + 0x58) = 0;
    }
}