struct List;
extern void func_1B5728(struct List *, void *);

void func_15FAF0(char *record)
{
    char *value = *(char **)(record + 0x54);
    struct List *target = *(struct List **)(value + 0x18);
    if (target != 0)
        func_1B5728(target, *(void **)(value + 8));
}
