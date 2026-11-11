struct Obj {
    int value;
    int kind;
};

struct Obj *func_10B7B0(unsigned int value);

int func_10B9F0(unsigned int value)
{
    struct Obj *p = func_10B7B0(value);

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
