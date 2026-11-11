struct Obj {
    int value;
    int kind;
};

struct Obj *func_113638(unsigned int value);

int func_113878(unsigned int value)
{
    struct Obj *p = func_113638(value);

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
