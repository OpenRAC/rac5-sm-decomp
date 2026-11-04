struct Obj {
    int value;
    int kind;
};

struct Obj *func_120590(void);

int func_1207D0(void)
{
    struct Obj *p = func_120590();

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
