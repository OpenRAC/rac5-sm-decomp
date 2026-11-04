struct Obj {
    int value;
    int kind;
};

struct Obj *func_1183B8(void);

int func_1185F8(void)
{
    struct Obj *p = func_1183B8();

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
