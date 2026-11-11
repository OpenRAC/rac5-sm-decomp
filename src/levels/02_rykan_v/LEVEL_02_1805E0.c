extern void func_1DB6A0(int, int);

void func_1805E0(char *record)
{
    char *value = *(char **)(record + 0x54);
    int target = *(int *)(value + 0x18);
    if (target != 0)
        func_1DB6A0(target, *(int *)(value + 8));
}
