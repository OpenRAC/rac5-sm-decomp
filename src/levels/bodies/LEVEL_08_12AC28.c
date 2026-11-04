struct Obj {
    int value;
    int kind;
};

struct Obj *func_12A9E8(void);

int func_12AC28(void)
{
    struct Obj *p = func_12A9E8();

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
