struct Obj {
    int value;
    int kind;
};

struct Obj *func_110818(unsigned int value);

int func_110A58(unsigned int value)
{
    struct Obj *p = func_110818(value);

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
