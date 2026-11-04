struct Obj {
    int value;
    int kind;
};

struct Obj *func_113638(void);

int func_113878(void)
{
    struct Obj *p = func_113638();

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
