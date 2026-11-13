struct List;
extern void func_1F7FF8(struct List *, void *);

void func_181A00(char *record)
{
    char *value = *(char **)(record + 0x54);
    struct List *target = *(struct List **)(value + 0x18);
    if (target != 0)
        func_1F7FF8(target, *(void **)(value + 8));
}
