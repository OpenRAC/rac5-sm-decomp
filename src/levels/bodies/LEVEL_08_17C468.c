extern long long func_17C320(int);

long long func_17C468(char *record)
{
    char *value = *(char **)(record + 0x58);
    int state = *(int *)(value + 100);
    if (state == 0)
        return 0;
    return func_17C320(state);
}