extern void func_088AA8(int);
void func_1583F8(char *record)
{
    char *nested = *(char **)(record + 0x58);
    int value = *(int *)(nested + 0x58);
    if (value != 0) {
        func_088AA8(value);
        *(int *)(nested + 0x58) = 0;
    }
}