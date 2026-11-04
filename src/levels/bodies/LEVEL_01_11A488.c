struct Obj {
    int value;
    int kind;
};

struct Obj *func_11A248(void);

int func_11A488(void)
{
    struct Obj *p = func_11A248();

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
