extern void func_1B5728(int, int);

void func_15FAF0(char *record)
{
    char *value = *(char **)(record + 0x54);
    int target = *(int *)(value + 0x18);
    if (target != 0)
        func_1B5728(target, *(int *)(value + 8));
}
