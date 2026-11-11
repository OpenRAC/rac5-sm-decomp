struct Obj {
    int value;
    int kind;
};

struct Obj *func_116268(unsigned int value);

int func_1164A8(unsigned int value)
{
    struct Obj *p = func_116268(value);

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
