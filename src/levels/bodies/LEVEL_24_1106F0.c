struct Obj {
    int value;
    int kind;
};

struct Obj *func_1104B0(void);

int func_1106F0(void)
{
    struct Obj *p = func_1104B0();

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
