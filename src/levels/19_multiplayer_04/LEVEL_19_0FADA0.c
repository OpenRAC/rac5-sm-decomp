struct Obj {
    int value;
    int kind;
};

struct Obj *func_0FAB60(unsigned int value);

int func_0FADA0(unsigned int value)
{
    struct Obj *p = func_0FAB60(value);

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
