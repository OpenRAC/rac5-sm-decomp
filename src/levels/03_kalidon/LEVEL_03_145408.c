extern void func_080918(int);
void func_145408(char *record)
{
    char *nested = *(char **)(record + 0x58);
    int value = *(int *)(nested + 0x58);
    if (value != 0) {
        func_080918(value);
        *(int *)(nested + 0x58) = 0;
    }
}