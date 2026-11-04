struct Obj {
    int value;
    int kind;
};

struct Obj *func_110818(void);

int func_110A58(void)
{
    struct Obj *p = func_110818();

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
