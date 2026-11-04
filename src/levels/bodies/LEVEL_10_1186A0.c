struct Obj {
    int value;
    int kind;
};

struct Obj *func_118460(void);

int func_1186A0(void)
{
    struct Obj *p = func_118460();

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
