struct Obj {
    int value;
    int kind;
};

struct Obj *func_0FAB60(void);

int func_0FADA0(void)
{
    struct Obj *p = func_0FAB60();

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
