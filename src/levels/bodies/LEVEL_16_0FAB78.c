struct Obj {
    int value;
    int kind;
};

struct Obj *func_0FA938(void);

int func_0FAB78(void)
{
    struct Obj *p = func_0FA938();

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
