struct Obj {
    int value;
    int kind;
};

struct Obj *func_120590(unsigned int value);

int func_1207D0(unsigned int value)
{
    struct Obj *p = func_120590(value);

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
