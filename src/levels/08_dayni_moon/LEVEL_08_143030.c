struct Obj {
    char pad00[16];
};

int func_142FE0(struct Obj *, struct Obj *);
int func_142F10(struct Obj *, struct Obj *);

int func_143030(struct Obj *first, struct Obj *second)
{
    int pending;

    pending = func_142FE0(first, second);
    if (pending != 0)
        return func_142F10(first, second);
    return 0;
}
