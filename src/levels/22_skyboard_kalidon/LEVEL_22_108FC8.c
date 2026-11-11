struct Obj {
    char pad00[16];
};

int func_108F78(struct Obj *, struct Obj *);
int func_108EA8(struct Obj *, struct Obj *);

int func_108FC8(struct Obj *first, struct Obj *second)
{
    int pending;

    pending = func_108F78(first, second);
    if (pending != 0)
        return func_108EA8(first, second);
    return 0;
}
