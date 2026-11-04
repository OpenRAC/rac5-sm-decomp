struct Obj {
    int value;
    int kind;
};

struct Obj *func_0F4708(void);

int func_0F4948(void)
{
    struct Obj *p = func_0F4708();

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
