extern void func_073680(int);
void func_12ACD0(char *record)
{
    char *nested = *(char **)(record + 0x58);
    int value = *(int *)(nested + 0x58);
    if (value != 0) {
        func_073680(value);
        *(int *)(nested + 0x58) = 0;
    }
}