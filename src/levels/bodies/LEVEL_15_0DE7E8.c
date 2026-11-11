struct Obj {
    int value;
    int kind;
};

struct Obj *func_0DE5A8(unsigned int value);

int func_0DE7E8(unsigned int value)
{
    struct Obj *p = func_0DE5A8(value);

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
