extern void func_1D1328(int, int);

void func_171870(char *record)
{
    char *value = *(char **)(record + 0x54);
    int target = *(int *)(value + 0x18);
    if (target != 0)
        func_1D1328(target, *(int *)(value + 8));
}
