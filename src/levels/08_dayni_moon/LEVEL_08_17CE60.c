extern int func_17AB78(int);

int func_17CE60(char *record, void *b, void *c, void *d)
{
    char *value = *(char **)(record + 0x58);
    int state = *(int *)(value + 100);
    if (state == 0)
        return 0;
    return func_17AB78(state);
}