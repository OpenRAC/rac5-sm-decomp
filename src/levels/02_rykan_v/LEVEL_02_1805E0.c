struct List;
extern void func_1DB6A0(struct List *, void *);

void func_1805E0(char *record)
{
    char *value = *(char **)(record + 0x54);
    struct List *target = *(struct List **)(value + 0x18);
    if (target != 0)
        func_1DB6A0(target, *(void **)(value + 8));
}
