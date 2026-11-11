struct Obj {
    int value;
    int kind;
};

struct Obj *func_01E380(unsigned int value);

int func_01E5C0(unsigned int value)
{
    struct Obj *p = func_01E380(value);

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
