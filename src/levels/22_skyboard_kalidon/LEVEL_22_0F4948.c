struct Obj {
    int value;
    int kind;
};

struct Obj *func_0F4708(unsigned int value);

int func_0F4948(unsigned int value)
{
    struct Obj *p = func_0F4708(value);

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
