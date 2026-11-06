extern void func_081168(int);
void func_143378(char *record)
{
    char *nested = *(char **)(record + 0x58);
    int value = *(int *)(nested + 0x58);
    if (value != 0) {
        func_081168(value);
        *(int *)(nested + 0x58) = 0;
    }
}