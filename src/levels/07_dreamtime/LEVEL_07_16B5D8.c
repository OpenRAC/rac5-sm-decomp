extern void func_16CAF0(int, void *);

void func_16B5D8(char *record)
{
    char *value = *(char **)(record + 0x58);
    int target = *(int *)(value + 0xdc);
    if (target != 0)
        func_16CAF0(target, value + 0xa0);
}
