struct Obj {
    int value;
    int kind;
};

struct Obj *func_0D3798(unsigned int value);

int func_0D39D8(unsigned int value)
{
    struct Obj *p = func_0D3798(value);

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
