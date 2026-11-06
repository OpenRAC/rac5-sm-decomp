extern long long func_170F78(int);

long long func_1710C0(char *record)
{
    char *value = *(char **)(record + 0x58);
    int state = *(int *)(value + 100);
    if (state == 0)
        return 0;
    return func_170F78(state);
}