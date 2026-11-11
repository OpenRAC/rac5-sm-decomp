extern int func_16F7D0(int);

int func_171AB8(char *record, void *b, void *c, void *d)
{
    char *value = *(char **)(record + 0x58);
    int state = *(int *)(value + 100);
    if (state == 0)
        return 0;
    return func_16F7D0(state);
}