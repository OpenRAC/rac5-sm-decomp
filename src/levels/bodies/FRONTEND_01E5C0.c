struct Obj {
    int value;
    int kind;
};

struct Obj *func_01E380(void);

int func_01E5C0(void)
{
    struct Obj *p = func_01E380();

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
