extern int func_17C320(void *node, void *other);

int func_17C468(char *record, void *other)
{
    char *value = *(char **)(record + 0x58);
    void *state = *(void **)(value + 100);
    if (state == 0)
        return 0;
    return func_17C320(state, other);
}
