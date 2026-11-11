struct Obj {
    int value;
    int kind;
};

struct Obj *func_11D298(unsigned int value);

int func_11D4D8(unsigned int value)
{
    struct Obj *p = func_11D298(value);

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
