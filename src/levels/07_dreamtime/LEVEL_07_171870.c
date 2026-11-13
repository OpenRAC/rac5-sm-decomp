struct List;
extern void func_1D1328(struct List *, void *);

void func_171870(char *record)
{
    char *value = *(char **)(record + 0x54);
    struct List *target = *(struct List **)(value + 0x18);
    if (target != 0)
        func_1D1328(target, *(void **)(value + 8));
}
