struct Obj {
    char pad00[16];
};

int func_131AA8(struct Obj *, struct Obj *);
int func_1319D8(struct Obj *, struct Obj *);

int func_131AF8(struct Obj *first, struct Obj *second)
{
    int pending;

    pending = func_131AA8(first, second);
    if (pending != 0)
        return func_1319D8(first, second);
    return 0;
}
