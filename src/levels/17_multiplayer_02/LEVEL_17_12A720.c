extern void func_073DB0(int);
void func_12A720(char *record)
{
    char *nested = *(char **)(record + 0x58);
    int value = *(int *)(nested + 0x58);
    if (value != 0) {
        func_073DB0(value);
        *(int *)(nested + 0x58) = 0;
    }
}