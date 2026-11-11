struct Obj {
    int value;
    int kind;
};

struct Obj *func_11A248(unsigned int value);

int func_11A488(unsigned int value)
{
    struct Obj *p = func_11A248(value);

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
