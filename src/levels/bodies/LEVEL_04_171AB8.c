extern long long func_16F7D0(int);

long long func_171AB8(char *record)
{
    char *value = *(char **)(record + 0x58);
    int state = *(int *)(value + 100);
    if (state == 0)
        return 0;
    return func_16F7D0(state);
}