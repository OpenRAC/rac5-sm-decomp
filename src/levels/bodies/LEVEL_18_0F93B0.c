struct Obj {
    int value;
    int kind;
};

struct Obj *func_0F9170(unsigned int value);

int func_0F93B0(unsigned int value)
{
    struct Obj *p = func_0F9170(value);

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
