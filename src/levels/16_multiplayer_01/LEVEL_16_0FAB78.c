struct Obj {
    int value;
    int kind;
};

struct Obj *func_0FA938(unsigned int value);

int func_0FAB78(unsigned int value)
{
    struct Obj *p = func_0FA938(value);

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
