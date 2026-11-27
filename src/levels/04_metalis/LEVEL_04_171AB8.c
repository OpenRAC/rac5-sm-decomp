extern int func_16F7D0(void *, void *, void *, void *);

int func_171AB8(char *record, void *b, void *c, void *d)
{
    char *value = *(char **)(record + 0x58);
    void *state = *(void **)(value + 100);
    if (state == 0)
        return 0;
    return func_16F7D0(state, b, c, d);
}