struct Obj {
    int value;
    int kind;
};

struct Obj *func_116268(void);

int func_1164A8(void)
{
    struct Obj *p = func_116268();

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
