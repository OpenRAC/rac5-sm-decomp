extern int func_170F78(void *node, void *other);

int func_1710C0(char *record, void *other)
{
    char *value = *(char **)(record + 0x58);
    void *state = *(void **)(value + 100);
    if (state == 0)
        return 0;
    return func_170F78(state, other);
}
