struct Obj {
    int value;
    int kind;
};

struct Obj *func_1183B8(unsigned int value);

int func_1185F8(unsigned int value)
{
    struct Obj *p = func_1183B8(value);

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
