extern void func_1F7FF8(int, int);

void func_181A00(char *record)
{
    char *value = *(char **)(record + 0x54);
    int target = *(int *)(value + 0x18);
    if (target != 0)
        func_1F7FF8(target, *(int *)(value + 8));
}
