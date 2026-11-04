struct Obj {
    int value;
    int kind;
};

struct Obj *func_0F9F48(void);

int func_0FA188(void)
{
    struct Obj *p = func_0F9F48();

    if (p == 0)
        return 0;
    if (p->kind != 3)
        return 0;
    return p->value;
}
