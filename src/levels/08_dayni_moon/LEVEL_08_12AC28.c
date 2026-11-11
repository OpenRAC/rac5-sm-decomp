struct Obj {
    int value;
    int kind;
};

struct Obj *func_12A9E8(unsigned int value);

int func_12AC28(unsigned int value)
{
    struct Obj *p = func_12A9E8(value);

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
