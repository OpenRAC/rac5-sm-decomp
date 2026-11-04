struct Obj {
    int value;
    int kind;
};

struct Obj *func_0D3798(void);

int func_0D39D8(void)
{
    struct Obj *p = func_0D3798();

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
