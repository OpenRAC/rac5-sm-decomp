struct Obj {
    int value;
    int kind;
};

struct Obj *func_0F9F48(unsigned int value);

int func_0FA188(unsigned int value)
{
    struct Obj *p = func_0F9F48(value);

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
